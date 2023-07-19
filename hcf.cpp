#include <bits/stdc++.h>

using namespace std;

int gcd(int, int);
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    gcd(b % a, a);
}

void swapN(int &a, int &b)
{

    a = a ^ b; // 3^5
    b = a ^ b; // 3^5^5  b=3
    a = a ^ b; // 3^5^3
}

void isPalind(int n)
{
    // n=12321

    int rev_n = 0;
    int temp = n;
    while (temp != 0)
    {
        rev_n = rev_n * 10 + temp % 10;
        temp /= 10;
        cout << rev_n << endl;
    }

    if (n == rev_n)
    {
        cout << "palindrome" << endl;
    }
    else
    {
        cout << "not palindrome" << endl;
    }
}

void revString(string s)
{
    string rev_s;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        rev_s += s[i];
    }

    cout << rev_s << endl;
}

void revSentence(string s)
{
    // hello World!
    reverse(s.begin(), s.end());

    s.insert(s.end(), '_');

    int n = s.length();
    // cout << s << endl;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ' ' || s[i] == '_')
        {
            reverse(s.begin() + j, s.begin() + i);

            j = i + 1;
        }
    }

    s.pop_back();
    cout << s;
}

void fibo(int n)
{

    // int c = 0;
    for (int j = 1; j <= n; j++)
    {
        int a = 0;
        int b = 1;
        int c = 0;
        cout << a << " ";
        for (int i = 1; i < j; i++)
        {
            c = a + b;
            cout << c << " ";
            a = b;
            b = c;
        }
        cout << endl;
    }
}

int findPos(int pos)
{
    static int x = 1;
    x = x * 2;
    if (pos > x)
    {
        return findPos(pos);
    }
    if (pos == x)
    {
        return x;
    }
    return x / 2;
}

int main()
{
    int num;
    cin >> num;
    cout << findPos(num);

    // fibo(4);

    // revSentence("Hello World!");

    // revString("string");

    // isPalind(1451);

    // int a=3,b=5;
    // cout<<a<<" "<<b<<endl;
    // swapN(a,b);
    // cout<<a<<" "<<b;

    // cout<<gcd(15,25);

    // int m = 12, n = 77, ans;

    // cout << "Initial values: m = " << m << ", n = " << n << endl;

    // while (m != n) {
    //     if (m > n) {
    //         m = m - n;
    //     } else {
    //         n = n - m;
    //     }
    //     cout << "Step: m = " << m << ", n = " << n << endl;
    // }

    // cout << "GCD: " << m << endl;
    // return 0;

    // int a=0,b=1,i,c,n,j;
    // cout<<"Enter the limit: ";
    // cin>>n;
    // for(i=1; i<=n; i++)
    // {
    //     a=0;
    //     b=1;
    //     cout<<a<<" ";
    //     for(j=1; j<i; j++)
    //     {
    //         c=a+b;
    //       cout<<c<<" ";
    //         a=b;
    //         b=c;
    //     }
    //     cout<<"\n";
    // }

    // int n = 5;
    // cout << fib(n);
}
