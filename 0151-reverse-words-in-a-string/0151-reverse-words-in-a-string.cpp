class Solution {
public:
    string reverseWords(string s) {
        stack<string>v;
        s+=" ";
        int len=s.length();
        string temp="";
        for(int i=0;i<len;i++){
            
            if(s[i]!=' '){
                //cout<<s[i]<<" ";
                temp+=s[i];
            }
            if(s[i]==' ' && temp!=""){
                v.push(temp);
                //cout<<"temp is "<<temp<<endl;
                temp="";
            }
           
        }
        //v.push(temp);
        temp="";
        while(!v.empty()){
           temp+=v.top();
           temp+=' ';
            
           // cout<<"stack is "<<v.top()<<" and temp is "<<temp<<endl;
            
            v.pop();
        }
        temp.pop_back();
        return temp;
    }
};