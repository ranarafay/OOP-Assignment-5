#include <iostream>
using namespace std;

void eliminate_duplicates(int &size)
{
    
    // taking array of random elements
    int *arr;
    arr = new int[size];

    // taking len of array
    int len;
    len = sizeof(arr) / 4;

    // taking another array (to store duplicate elements) of len of array
    int dp[len] = {};

    // taking len of array containing duplicate elements
    int dplen;
    dplen = sizeof(dp) / 4;

    // 1st loop for oterating the items of array (containing random elements)
    for (int i = 0; i < len; i++)
    {

        // taking count initially zero for making the logic of continuinig loop
        int count;
        count = 0;

        // 2nd loop for checking the duplicate items (for sack of no repeatations)
        for (int k = 0; k < dplen; k++)
        {
            if (arr[i] == dp[k])
            {
                count++;
            }
        }

        // condition for continuing loop if item is checked before
        if (count > 0)
        {
            continue;
        }

        // taking count1 and initializing as -1 cause loop will iterate over all elements including the element which is being checked
        int count1;
        count1 = -1;

        // 3rd loop for checking an element recursion by comparing with whole array
        for (int j = 0; j < len; j++)
        {
            // condition if elements match
            if (arr[i] == arr[j])
            {
                // increasing count by 1
                count1++;

                // we are adding that matched element to the duplicate items array
                dp[i] = arr[i];
            }
        }

        // logic that if element matched or count becomes greater than 0 it will give output how many times item repeated
        if (count1 > 0)
        {
            cout << arr[i] << " Repeated " << count1 << " Times!" << endl;
        }
    }
}

int main()
{

    int a = 5;
    eliminate_duplicates(a);

    return 0;
}