#include <iostream>
using namespace std;

// declaring a functiuon
void isPlaindrome()
{
    // taking a list of char to check palindrome
    char ch[] = "MADAM";

    // length of char array
    int len;
    len = sizeof(ch) - 1;

    // taking a string for checking purpose
    string chk1;

    // iterating for inversing string by indexing
    for (int i = len; i >= 0; i--)
    {
        // taking inverser of char array and making it equal to string
        chk1 += ch[i];
    }

    // logic and conditions for checking
    int count;
    count = 0;
    int cnt = 1;
    for (int i = 0; i < len; i++)
    {
        if (ch[i] == chk1[cnt])
        {
            count++;
            cnt++;
        }
    }

    // applying conditions and printing the result
    if (count == len)
    {
        cout << "It is Palindrome!" << endl;
    }

    else
    {
        cout << "It is Palindrome!" << endl;
    }
}

int main()
{

    isPlaindrome();

    return 0;
}