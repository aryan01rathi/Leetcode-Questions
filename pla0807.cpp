#include <bits/stdc++.h>
using namespace std;
bool duckNumber(string str){
    int len=str.length();
    int i=0;
    while(i<len &&  str[i]=='0'){
        i++;
        
    }
    
    while(i<len){
        if(str[i]=='0'){
            
            return true;
        }
        i++;

    }
    return false;
}

int main()
{
    string s="09807";
    cout<<duckNumber(s);
    return 0;
   
}
