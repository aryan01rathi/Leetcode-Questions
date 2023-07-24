#include<bits/stdc++.h>
using namespace std;

bool ischar(char ch){
    switch(ch){
        case '+':
        case '-':
        case '/':
       
        case '*':
        return true;
    }
    return false;
}L

string post_to_infi(string str){

    stack<string> st;
    int len=str.size();

    for(int i=0;i<len;i++){

        if(ischar(str[i])){
            string temp1=st.top();
            st.pop();
            string temp2= st.top();
            st.pop();
            string result="("+temp2+str[i]+temp1+")";
            st.push(result);
        }
        else{
            //this syntax creating a string of length 1 given as the first argument
            //and the next argument specifies the char to be used as the new string.
            //string(1, str[i])
            
            st.push(string(1,str[i]));
             
        }
    }
    return st.top();

}

int main(){
    string str="ab*c+";
    cout<<post_to_infi(str);

}