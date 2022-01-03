#include <iostream>
#include <fstream>
using namespace std;

void WriteRecord()
{
    ifstream fin;
    fin.open("Student.txt");

    if (fin.is_open() == true)
    {
        int rollno;
        string fn;
        string ln;
        string depar;
        string sec;

        cout << "How many records you want to enter: " << endl;
        int chk;
        cin >> chk;

        ofstream fout;
        fout.open("Student.txt", ios ::app);

        for (int i = 0; i < chk; i++)
        {
            cout << "For " << i + 1 << " Student: " << endl;
            cout << "\n";

            cout << "Enter Roll no: " << endl;
            cin >> rollno;
            cout << "Enter First Name: " << endl;
            cin >> fn;
            cout << "Enter Last Name: " << endl;
            cin >> ln;
            cout << "Enter Department: " << endl;
            cin >> depar;
            cout << "Enter Section: " << endl;
            cin >> sec;

            fout << rollno << " " << fn << " " << ln << " " << depar << " " << sec << " " << endl;
        }
        fout.close();
    }

    else
    {
        int rollno;
        string fn;
        string ln;
        string depar;
        string sec;

        cout << "How many records you want to enter: " << endl;
        int chk;
        cin >> chk;

        ofstream fout;
        fout.open("Student.txt");

        for (int i = 0; i < chk; i++)
        {
            cout << "For " << i + 1 << " Student: " << endl;
            cout << "\n";

            cout << "Enter Roll no: " << endl;
            cin >> rollno;
            cout << "Enter First Name: " << endl;
            cin >> fn;
            cout << "Enter Last Name: " << endl;
            cin >> ln;
            cout << "Enter Department: " << endl;
            cin >> depar;
            cout << "Enter Section: " << endl;
            cin >> sec;

            fout << rollno << " " << fn << " " << ln << " " << depar << " " << sec << " " << endl;
        }
        fout.close();
    }
}

int main()
{
    WriteRecord();

    return 0;
}