#include <iostream>
using namespace std;
bool solve(int n)
{
    int arr[] = {4, 2, 1, 3, 1};
    int temp=0;
    for( int i=0;i<n;i++){
        temp=temp^arr[i];
        cout<<"inside for "<<temp<<endl;
    }
    cout<<temp;

   
}
int main()
{
    int n;
    cin >> n;

    while (n)
    {
        int size;
        cin >> size;
        solve(size);
        n--;
    }
}