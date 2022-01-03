#include<iostream>
using namespace std;

int main(){

    // taking length of the array as input
    cout << "Enter the length of Array: " << endl;
    int len;
    cin >> len;

    // initializing the pointer
    int* pointerarr;
    
    // dynamic array
    pointerarr = new int [len];

    // taking the user elments in array as user inputs
    cout << "Enter the items in Array to count prime " << endl;
    int val;
    for (int i = 0; i < len; i++)
    {
        cin >> val;
        *(pointerarr + i) = val;
    }

    // counting and printing the prime numbers in array
    int count = 0;
    cout << "Prime numbers are: " << endl;
    for (int i = 0; i < len; i++)
    {   
        // derefrencing 
        int chk;
        chk = *(pointerarr + i);
        
        // condition for checking prime
        if (chk % chk == 0 && chk % 1 == 0 && chk % 2 != 0)
        {   
            // printing primes
            cout << chk << endl;
            count ++;
        }
        
    }
    
    // printing the final result after counting prime numbers
    cout << "The prime number in Dynamically Allocated Array are: " << count << endl;

   
    delete[] pointerarr;

    return 0;
}