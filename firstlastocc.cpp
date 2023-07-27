#include <iostream>
using namespace std;

int firstocc(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}
int lastocc(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
        {
            ans = mid;
        }
        else if (arr[mid] > arr[mid + 1])
        {
            end = mid - 1;
        }
        else if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;

    int arr[10] = {1, 2, 3, 3, 3, 3, 3, 4, 5, 6};
    cout << firstocc(arr, 10, 3) << " " << lastocc(arr, 10, 3);
}