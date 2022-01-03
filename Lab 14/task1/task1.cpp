#include <iostream>
#include <fstream>
using namespace std;

class Directory
{
    // private
    int empId;
    string empFirstName;
    string empLastName;
    string empContactNumber;
    string empAddress;

public:
    // parameterized constructor
    Directory(int id, string fn, string ln, string cn, string ad)
    {
        empId = id;
        empFirstName = fn;
        empLastName = ln;
        empContactNumber = cn;
        empAddress = ad;
    }

    void add()
    {

        ifstream fin("EmployeeDirectory.txt");

        if (fin.is_open() == true)
        {
            ofstream fout;
            fout.open("EmployeeDirectory.txt", ios ::app);
            fout << empId << " " << empFirstName << " " << empLastName << " " << empContactNumber << " " << empAddress << endl;
            fout.close();
        }

        else
        {
            ofstream fout;
            fout.open("EmployeeDirectory.txt");
            fout << empId << " " << empFirstName << " " << empLastName << " " << empContactNumber << " " << empAddress << endl;
            fout.close();
        }

        fin.close();
    }

    void UpdateAddress(int gid, string gad)
    {
        ifstream fin;
        fin.open("EmployeeDirectory.txt");

        // for updating data copying in temp file
        ofstream fout;
        fout.open("Temp.txt");
        while (fin)
        {
            int id;
            string fn;
            string ln;
            string cn;
            string ad;

            fin >> id >> fn >> ln >> cn >> ad;

            if (id == gid)
            {
                fout << id << " " << fn << " " << ln << " " << cn << " " << gad << endl;
            }
            else
            {
                fout << id << " " << fn << " " << ln << " " << cn << " " << ad << endl;
            }
        }
        fin.close();
        fout.close();

        // for clearing data in "EmployeeDirectory"
        ofstream clear;
        clear.open("EmployeeDirectory.txt", ofstream::out | ofstream::trunc);
        clear.close();

        // reading temp and storing updated data in Origional file
        ifstream fin1;
        fin1.open("Temp.txt");

        ofstream fout1;
        fout1.open("EmployeeDirectory.txt");
        while (fin1)
        {
            int id;
            string fn;
            string ln;
            string cn;
            string ad;

            // reading
            fin1 >> id >> fn >> ln >> cn >> ad;

            // writing
            fout1 << id << " " << fn << " " << ln << " " << cn << " " << ad << endl;
        }
        fin1.close();
        fout1.close();

        // deleting temp file
        remove("Temp.txt");
    }

    void SearchById(int gid)
    {
        ifstream fin;
        fin.open("EmployeeDirectory.txt");

        while (fin)
        {
            int id;
            string fn;
            string ln;
            string cn;
            string ad;

            fin >> id >> fn >> ln >> cn >> ad;

            if (id == gid)
            {
                cout << id << " " << fn << " " << ln << " " << cn << " " << ad << endl;
            }
        }
        fin.close();
    }
};



int main()
{
    Directory d1(1, "Rana", "Rafay", "03103608836", "E11_Islamabad");
    Directory d2(2, "Muhammad", "Haris", "03103608836", "H11_Islamabad");
    d2.SearchById(2);

    
    return 0;
}