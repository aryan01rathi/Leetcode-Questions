#include <bits/stdc++.h>
using namespace std;
string reverseString(string &s)
{
   
    vector<string> tmp;
    string str = "";
    for (int i = 0; i < s.length(); i++) {
 
       
        if (s[i] == ' ') {
            tmp.push_back(str);
            str = "";
        }
 
       
        else
            str += s[i];
    }
    
    tmp.push_back(str);
    cout<<tmp[2]<<endl;
    string reversed;
    for (int i = tmp.size() - 1; i > 0; i--) {
        reversed += tmp[i] + " ";
    }
    
    reversed += tmp[0];
    return reversed;
}
int main()
{
    string s="Welcome to Coding Ninjas";
    cout<<s<<endl;
    string ans=reverseString(s);
    cout<<ans;
}