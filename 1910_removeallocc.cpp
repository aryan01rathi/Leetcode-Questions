#include <bits/stdc++.h>
using namespace std;

void removeocc(string s, string part){
    while(s.length()!=0&& s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
        cout<<s<<endl;
        //find(part) returns leftmost index of the parameter
    }
    // return s;
}
int main()
{
    string s = "daabcbaabcbczzzz";
    string part="abc";
    //cout<<
    removeocc(s,part);
    // cout<<s.find(part);
    // cout<<part.length();
    
    return 0;
}