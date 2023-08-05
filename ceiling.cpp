#include <iostream>
using namespace std;

int ceilingBinarysearch(int arr[], int key)
{
    int start = 0;
    int end = 8;
    while (start <= end)
    {
        int i = (start + end) / 2;
        if (arr[i]==key)
        {  cout<<"printing i "<<i;
            return i;
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
    
    //return -1;
    cout<<"printing out of the loop";
    return start ;
}
void sortselect(int arr[], int n)
{
    int i, j, min;
    for (i = 0; i < n; i++)
    {
        //min=i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {  int temp= arr[i];
                arr[i] = arr[j];
                arr[j]= temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout<<endl;
    
 }

int main()
{
     int arr[] = {2, 20,33, 90, 1, 50, 10, 100};
   int arr[]= {1,2,10,20,33,50,90,100};
  
    int key = 49;
    sortselect(arr,8);
    int pos = ceilingBinarysearch(arr, key);
    if(pos==-1){cout<<"element not found";}
    else{
    cout <<"\nelement found at index "<< pos;}
    return 0;
}