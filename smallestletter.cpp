#include <iostream>
#include <string.h>
using namespace std;

void ceilingBinarysearch(char arr[], char key)
{
    int start = 0;
    int end = strlen(arr)-1;

    while (start <= end)
    {
        int i = (start + end) / 2;

        if (key > arr[i])
        {
            start = i + 1;
        }
        else
        {
            end = i - 1;
        }
    }
    cout << "printing out of the loop"<<endl;
    cout << arr[start % strlen(arr)];
}


int main()
{
    char arr[] = {'a','s','g','e','h','i','\0'};
  
    char key = 'z';
    
    ceilingBinarysearch(arr, key);
    
    return 0;
}