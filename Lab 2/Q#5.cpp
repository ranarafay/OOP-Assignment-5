#include <iostream>
using namespace std;

// sort columns in acending order
void sortColumns()
{

    int r, c;
    r = 5;
    c = 5;

    // initializing the pointer
    int *pointerarr;

    // dynamic 2D array of size 5x5
    pointerarr = new int[r * c];

    // iterating and generating random elements in array between 0-20
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            *(pointerarr + i * c + j) = rand() % 20;
        }
    }

    // printing the 2D array by derefrencing
    cout << "\nThe 2D Array in form of Matrix: " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            cout << *(pointerarr + i * c + j) << " ";
        }
        cout << endl;
    }


    cout << "\nThe column of 2D Array in Acending Order are below: " << endl;

    // iterations and logics for accessing columns ---> converting in acending order ---> printing each column in acending order
    int cnt1 = 0;
    int arr[c];
    for (int i = 0; i < r; i++)
    {

        int cnt = 0;

        for (int j = 0; j < c; j++)
        {
            int val = *(pointerarr + cnt + cnt1);
            // inserting in array
            arr[j] = val;
            cnt += 5;
        }

        // for acending order
        int temp;

        for (int x = 0; x < r; x++)
        {
            for (int y = 0; y < r; y++)
            {
                // condition for ascending
                if (arr[x] < arr[y])
                {
                    // swapping the elements
                    temp = arr[x];
                    arr[x] = arr[y];
                    arr[y] = temp;
                }
            }
        }

        // printing columns
        cout << "Column: " << i + 1 << endl;
        for (int m = 0; m < r; m++)
        {
            cout << arr[m] << endl;
        }
    }
    cnt1 += 1;

    delete[] pointerarr;
}

// sum of rows and printing mean array
void meanRows()
{
        // initializing rows and columns
    int r, c;
    r = 5;
    c = 5;

    // initializing the pointer
    int *pointerarr;

    // dynamic 2D array of size 5x5
    pointerarr = new int[r * c];

    // iterating and generating random elements in array between 0-20
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            *(pointerarr + i * c + j) = rand() % 20;
        }
    }

    // printing the 2D array by derefrencing
    cout << "\nThe 2D Array in form of Matrix: " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            cout << *(pointerarr + i * c + j) << " ";
        }
        cout << endl;
    }

    // calculating sums of all rows and then printig mean

    // declaring an array for storing the mean of all rows
    int sums[5];

    // iterating for calculating sum / applying logic and conditions
    for (int i = 0; i < r; i++)
    {
        int count = 0;
        int chk = 0;
        for (int j = 0; j < c; j++)
        {
            count += *(pointerarr + i * c + j);
            chk++;
            if (chk == 5)
            {
                sums[i] = count;
            }
        }
    }

    // itearating and printing array of means
    cout << "\nThe Means of Rows are: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Row" << i + 1 << ": " << sums[i] / 5 << endl;
    }

    delete[] pointerarr;
}

// swapping the odd number rows
void swap_Odd_Rows()
{
    // initializing rows and columns
    int r, c;
    r = 5;
    c = 5;

    // initializing the pointer
    int *pointerarr;

    // dynamic 2D array of size 5x5
    pointerarr = new int[r * c];

    // iterating and generating random elements in array between 0-20
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            *(pointerarr + i * c + j) = rand() % 20;
        }
    }

    // printing the 2D array by derefrencing
    cout << "\nThe 2D Array in form of Matrix: " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            cout << *(pointerarr + i * c + j) << " ";
        }
        cout << endl;
    }

    

    // iterating and applying logics to swap rows
    int cnt = 10;
    int cnt1 = 20;
    int temp;
    for (int i = 0; i < 5; i++)
    {
        temp = *(pointerarr + cnt); 
        
        *(pointerarr + cnt) = *(pointerarr + cnt1);

        *(pointerarr + cnt1) = temp; 

        
        cnt ++;
        cnt1++;
    }
    
    // printing the 2D array by derefrencing
    cout << "\nThe 2D Array in for of Matrix (After Swapping Odd rows): " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            cout << *(pointerarr + i * c + j) << " ";
        }
        cout << endl;
    }

}


int main()
{
    sortColumns();
    meanRows();
    swap_Odd_Rows();


    return 0;
}
