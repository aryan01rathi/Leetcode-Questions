#include <bits/stdc++.h>
using namespace std;

int largestRectangleArea(vector<int> &heights)
{
    stack<int> st;
    int len = heights.size();
    int rsa[len];
    int lsa[len];
    // for left
    for (int i = 0; i < len; i++)
    {

        while (!st.empty() && heights[i] <= heights[st.top()])
        {
            st.pop();
        }
        if (st.empty())
        {
            lsa[i] = 0;
        }

        else
        {
            lsa[i] = st.top() + 1;
        }
        st.push(i);
    }
    while (!st.empty())
    {
        st.pop();
    }
    // for right
    for (int i = len - 1; i >= 0; i--)
    {

        while (!st.empty() && heights[i] <= heights[st.top()])
        {
            st.pop();
        }
        if (st.empty())
        {

            rsa[i] = len - 1;
        }

        else
        {
            rsa[i] = st.top() - 1;
        }
        st.push(i);
    }
    int MAX = 0;
    for (int i = 0; i < len; i++)
    {
        MAX = max(MAX, ((rsa[i] - lsa[i] + 1) * heights[i]));
    }
    return MAX;
}
int main(){
    vector<int>v={2,1,5,6,2,3,1};
    cout<<largestRectangleArea(v);
}