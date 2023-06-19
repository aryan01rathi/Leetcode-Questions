#include <bits/stdc++.h>
using namespace std;
vector<int> asteroidCollision(vector<int> &ast)
{
    int len = ast.size();
    stack<int> st;
    vector<int> v;
    for (int i = 0; i < len; i++)
    {
        if (st.empty())
        {
            st.push(ast[i]);
            cout << "first if condition " << st.top() << endl;
        }
        else
        {
            if ((ast[i] > 0 && st.top() > 0) || (ast[i] < 0 && st.top() < 0))
            {
                st.push(ast[i]);
                cout << "insdie else's if condition " << st.top() << endl;
            }
            else if (abs(ast[i]) > abs(st.top()))
            {
                while (abs(ast[i]) > abs(st.top()))
                {
                    st.pop();
                    cout << "while loop " << st.top() << " , " << ast[i] << endl;
                }
                // st.push(ast[i]);
            }
            else if (abs(ast[i]) == abs(st.top()))
            {
                st.pop();
            }
        }
    }

    if (!st.empty())
    {
        while (st.empty() != true)
        {
            v.push_back(st.top());
            st.pop();
        }
    }
    reverse(v.begin(), v.end());
    return v;
}
int main()
{
    vector<int> v={5,10,-5};
    vector<int>a;
    a=asteroidCollision(v);
    for( int i=0;i<a.size();i++){
        cout<<a[i]<<endl;
    }
}