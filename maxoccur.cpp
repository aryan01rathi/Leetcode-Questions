#include <bits\stdc++.h>
using namespace std;
char solve(string s)
{   int maxi=-1,ansi=0;
    int arr[26]={0};
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            int num = s[i] - 'a';
            arr[num]++;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            int num = s[i] - 'A';
            arr[num]++;
        }
        
    }
    for(int i=0;i<26;i++){
      if(maxi<arr[i]){
          maxi=arr[i];
          ansi=i;
      }
       //maxi=max(maxi,arr[i]);
    }
    return char(ansi+'a');
}
int main()
{
    string s = " ";
    cout<<solve(s);
    return 0;
}