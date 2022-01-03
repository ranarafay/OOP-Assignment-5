#include<iostream>
using namespace std;

int main(){

    // taking the len of arrays as 5 as in qustion
    int len = 5;

    // taking two pointers
    int* pointerarr1; 
    int* pointerarr2; 

    // declaring dynamic arrays
    pointerarr1 = new int [len];
    pointerarr2 = new int [len];

    // iterating for user input for the 1st array to initialize it
    cout << "Enter the values in array of length " << len << " to initialize it " << endl; 
    for (int i = 0; i < 5; i++)
    {
        int val;
        cin >> val;
        *(pointerarr1 + i) = val; 
    }

    // printing the result for checking
    cout << "Printing the Array1: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout <<"Item " << i + 1 << " is: " << *(pointerarr1 + i) << endl;
    }


    // making 2nd array duplicate of first array by iterating defrefreced items of 1st array
    for (int i = 0; i < len; i++)
    {
        *(pointerarr2 + 1) = *(pointerarr1 + 1);
    }

    // printing the 2nd array for cheking results
    cout << "Printing the Array2: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout <<"Item " << i + 1 << " is: " << *(pointerarr1 + i) << endl;
    
    }
    
    delete[] pointerarr1;
    delete[] pointerarr2;

    return 0;
}