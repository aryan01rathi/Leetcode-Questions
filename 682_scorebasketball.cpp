#include <bits/stdc++.h>
using namespace std;
int convert(string s)
{
   
    stringstream geek;

    // inserting string s in geek stream
    geek << s;

    // The object has the value 12345
    // and stream it to the integer x
    int x;
    geek >> x;
    return x;
}
int calPoints(vector<string> &op)
{
    stack<int> st;
    int len = op.size();
    cout << "working" << endl;
    for (int i = 0; i < len; i++)
    {
        if (op[i] == "+")
        {

            int temp1 = st.top();
            st.pop();
            int temp2 = st.top();
            st.push(temp1);
            st.push((temp1 + temp2));
            cout << st.top() << endl;
        }
        else if (op[i] == "C")
        {
            st.pop();
        }
        else if (op[i] == "D")
        {
            int temp = st.top();
            st.push((2 * temp));
            cout << st.top() << endl;
        }
        else
        {
            string s = op[i];
            st.push(convert(s));
            cout << st.top() << endl;
        }
    }
    int sum = 0;
    while (!st.empty())
    {
        sum += st.top();
        st.pop();
    }

    return sum;
}

int main()
{
    
    vector<string> v = {"5","-2","4","C","D","9","+","+"};
    cout<<calPoints(v);
    
}