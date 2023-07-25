#include<bits/stdc++.h>
using namespace std;

bool isChar(char ch){
    switch(ch){
        case '+':
        case '-':
        case '/':
        case '*':
        case '%':
        case '^':
        return true;
    }
    return false;
}

string prefixTOinfix(string str){
    stack<string>ststr;

    int len= str.size();

    for(int i=len-1;i>=0;i--){
        //checking if it is a operand or operator starting from right to left
        if(isChar(str[i])){
            string one=ststr.top();
            ststr.pop();
            string two=ststr.top();
            ststr.pop();
            string result="("+one+str[i]+two+")";
            ststr.push(result);

        }
        else{
            ststr.push(string(1,str[i]));
        }
    }

    return ststr.top();
}

int main(){
    string exp= "*-A/BC-/AKL";
    string st=prefixTOinfix(exp);
    cout<<st;
}