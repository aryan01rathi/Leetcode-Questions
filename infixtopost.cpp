#include <bits/stdc++.h>
using namespace std;

int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
// Function to convert an infix expression to a postfix expression.
string infixToPostfix(string s)
{
    // Your code here

    stack<char> st;
    string result;
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        {
            result += c;
        }

        else if (c == '(')
        {
            st.push('(');
        }

        else if (c == ')')
        {
            while (st.top() != '(')
            {
                result += st.top();
                st.pop();
            }
            st.pop();
        }

        else
        {
            while (!st.empty() && prec(s[i]) <= prec(st.top()))
            {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty())
    {
        result += st.top();
        st.pop();
    }
    return result;
}

int main()
{
    string s = "a+b*(c^d-e)^(f+g*h)-i";
    cout << infixToPostfix(s);

    // stack<string> st;
    // string str="aryan";
    // st.push(string(1,str[4]));
    // while(!st.empty()){
    //     cout<<st.top();
    //     st.pop();
    // }
}