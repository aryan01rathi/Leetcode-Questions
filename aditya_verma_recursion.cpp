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

        cout << ans << endl;

        return;
    }

    char ch = s[0];
    s.erase(s.begin() + 0);
    subsets(s, ans + ch);
    subsets(s, ans);
}

void subsetswithoutduplicate(string s, string ans, unordered_map<string, int> &mp)
{

    if (s.length() == 0)
    {
        mp[ans]++;
        if (mp[ans] == 1)
        {
            cout << ans << endl;
        }
        return;
    }

    char ch = s[0];
    s.erase(s.begin() + 0);
    subsetswithoutduplicate(s, ans + ch, mp);
    subsetswithoutduplicate(s, ans, mp);
}

void permWithSpaces(string ip, string op, int n)
{
    if (n == 1)
    {
        cout << ip;
        return;
    }
    // base condition
    if (ip.length() == 0)
    {

        cout << op << endl;
        return;
    }
    // to seperate out the first char, we can also do that before calling the function in main
    if (ip.length() == n)
    {

        op = ip[0];
        ip.erase(ip.begin() + 0);
    }
    char ws = ip[0];

    ip.erase(ip.begin() + 0);

    permWithSpaces(ip, op + " " + ws, n);
    permWithSpaces(ip, op + ws, n);
}

void permWithCaseChange(string ip, string op)
{
    if (ip.length() == 0)
    {
        cout << op << endl;
        return;
    }

    char temp = ip[0];
    char tempu = toupper(temp);
    ip.erase(ip.begin() + 0);
    permWithCaseChange(ip, op + temp);
    permWithCaseChange(ip, op + tempu);
}

void generBalPar(int open, int close, string op, vector<string> &v)
{
    if (open == 0 && close == 0)
    {

        v.push_back(op);
        return;
    }

    if (open == close)
    {
        generBalPar(open - 1, close, op + '(', v);
    }

    else
    {
        // this if condition to check that open does not go in negative
        if (open > 0)
        {
            generBalPar(open - 1, close, op + '(', v);
        }

        generBalPar(open, close - 1, op + ')', v);
    }

    // if(open!=0){
    //     generBalPar(open-1,close,op+'(',v);
    // }
    // if(close>open){
    //     generBalPar(open,close-1,op+')',v);
    // }
    // return;
}

void n_bitBinary(int ip, string op, int one, int zero)
{
    if (ip == 0)
    {
        // if(one>zero){
        cout << op << endl;
        //}
        return;
    }

    n_bitBinary(ip - 1, op + '1', one + 1, zero);
    if (zero < one)
        n_bitBinary(ip - 1, op + '0', one, zero + 1);
}

void gameOfDeath(vector<int> v, int k, int index, int &ans)
{
    if (v.size() == 1)
    {
        ans = v[0];
        return;
    }
    index = (index + k) % v.size();
    v.erase(v.begin() + index);
    gameOfDeath(v, k, index, ans);
}
 
int main()
{
    // vector<int> v;
    // for (int i = 1; i <= 5; i++)
    // {
    //     v.push_back(i);
    // }
    // int ans = -1;
    // gameOfDeath(v, 2, 0, ans);
    // cout << "The person that will survive is " << ans;

    // n_bitBinary(2,"1",1,0);

    // vector<string> ans;
    // generBalPar(3, 3, "", ans);
    // for (auto it : ans)
    // {
    //     cout << it << endl;
    // }

    // string ip="ab";
    // string op="";
    // permWithCaseChange(ip,op);

    // string ip = "a";
    // string op = "";
    // int n = ip.length();
    // permWithSpaces(ip, op, n);

    // unordered_map<string,int>mp;
    // subsetswithoutduplicate("aab", "",mp);

    // subsets("abc","");
    //  toh(3,'a','b','c');

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