#include <iostream>
using namespace std;
  bool findstartindex;
  int search(int arr[], int key, bool findstartindex)
{
    int ans = -1;
    int start = 0;
    int end = 8;
    while (start <= end)
    {
        int i = (start + end) / 2;
        if (arr[i] == key)
        {
            ans = i;
            
            if (findstartindex)
            {
                end = i - 1;
            }
            else
            {
                start = i + 1;
            }
        }
        else if (key > arr[i])
        {
            start = i + 1;
        }
        else
        {
            end = i - 1;
        }

    }

    return ans;
}

int ansproblem(int arr[], int target)
{
  
    int ans[] = {-1, -1};
    int start = search(arr, target, true);
    int end = search(arr, target, false);

    ans[0] = start;
    ans[1] = end;
    cout<<start<<","<<end;
}


int main()
{
    int arr[] = {2, 5, 7, 7, 7, 7, 8, 8, 10};

    int key = 10;
  
    ansproblem ( arr,key);

    return 0;
}