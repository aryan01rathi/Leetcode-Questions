#include <bits/stdc++.h>
using namespace std;
int sum = 0;
int recSum(int n)
{
    // parameterized recursion
    //  if(n<1) {cout<<sum;return;}
    //  recSum(n-1, sum+=n);

    // functional recursion
    if (n == 0)
        return 0;

    return n + recSum(n - 1);
    // ex n=3   3+recSum(2)->2+recSum(1)->1+recSum(0)->return 0
    // it becomes 3+3=6          2+1=3     1+0=1
}
void printN(int n)
{
    if (n == 1)
    {
        cout << n << " ";
        return;
    }
    printN(n - 1);
    cout << n << " ";
}


int main()
{
    

    int n;
    cin>>n;
    int sum=0;
    //recSum(n, sum);
    cout<<recSum(n);// line 9
    

    
}