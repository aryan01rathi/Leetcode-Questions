#include <iostream>
using namespace std;
void solve(string s)
{  //cout<<"function in"<<endl;
    int i=0;
    int n=s.length();
    while (s.length()!=0 &&s[i+1]!='\0')
    { //cout<<"while loop enter  "<<s[i]<<" "<<s[i+1]<<endl;
        if (s[i] != s[i + 1])
        {  
               i++;
        }
        else{
            //cout<<"if loop enter and value of i is "<<i<<" "<<i+1<<" "<<s[i]<<" "<<s[i+1]<<endl;
            s.erase(i,2);
            //s.erase(s.begin() + i);
         
            //cout<<s<<endl;
            if(i>0)i--;
            else i=0;
            //cout<<"value of i is "<<i<<endl;
        }
     
        
    }
    cout << s;
}

int main()
{            // 012345
    string s = "abbaca";
    solve(s);
  
}