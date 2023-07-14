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
int fact(int n)
{
    if (n == 0 || n == 1)
    {
        // cout<<n;
        return n;
    }

    return n * fact(n - 1);
}
//----Sorting of array using recursion -------------
void insert(vector<int> &v, int temp)
{
    if (v.size() == 0 || v[v.size() - 1] <= temp)
    {
        v.push_back(temp);
        return;
    }

    int val = v[v.size() - 1];
    v.pop_back();
    insert(v, temp);
    cout << "Value of top element " << val << endl;
    v.push_back(val);
}

void Sort(vector<int> &v)
{
    if (v.size() == 1)
    {
        return;
    }
    int temp = v[v.size() - 1];
    v.pop_back();
    cout << "temp element in sort function " << temp << endl;
    Sort(v);
    cout << "vector elements : ";
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "value of temp after sort line " << temp << endl;
    insert(v, temp);
}
//--------- ENDS ---------

// -----deleting kth element from stack -----------------
void deleelement(stack<int> &st, int k, int count)
{
    if (count == k)
    {
        st.pop();
        return;
    }
    count++;
    int val = st.top();
    st.pop();
    deleelement(st, k, count);
    st.push(val);
}

void delkthelement(stack<int> &st, int k)
{
    int count = 1;
    deleelement(st, k, count);
}
//------ENDS----------

int kthSymbol(int n, int k)
{
    if (n == 1 && k == 1)
        return 0;

    int mid = pow(2, n - 1) / 2;
    if (k <= mid)
    {
        cout << "inside if condition " << n - 1 << " " << k << endl;
        return kthSymbol(n - 1, k);
    }

    else
    {
        cout << "inside else condition " << n - 1 << " " << k << endl;
        return !kthSymbol(n - 1, k - mid);
    }
}

void toh(int n, char ts, char td, char th)
{
    if (n == 0)
    {
        return;
    } // base condition
    // moving n-1 disks from s to h using d, hypothesis on smaller n
    toh(n - 1, ts, th, td);
    // moving nth from s to d, Induction step
    cout << n << " from ts to td " << endl;
    // moving those n-1 from h to d using s
    toh(n - 1, th, td, ts);
}

void subsets(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << " ";
        return;
    }

    char ch=s[0];
    s.erase(s.begin()+0);
    subsets(s,ans+ch);
    subsets(s,ans);
}

int main()
{
    
    subsets("abc", "");
    

    // toh(3,'a','b','c');

    // cout<<kthSymbol(2,2);

    // int n;
    // cin>>n;
    // int sum=0;
    // //recSum(n, sum);
    // cout<<recSum(n);// line 9
    // vector<int>v={2,1,3,7,0};
    // for(auto it:v){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    // Sort(v);
    // cout<<endl;
    // for(auto it:v){
    //     cout<<it<<" ";
    // }

    // stack<int>st;
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.push(4);
    // st.push(5);
    // delkthelement(st,2);
    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }

    // cout<<kthSymbol(2,1);
}