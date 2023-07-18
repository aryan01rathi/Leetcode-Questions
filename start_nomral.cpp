#include<iostream>
using namespace std;
int main(){
    int n,row=1;
    cin>>n;
    // while(row<=n){
    //     int col=1;
    //     while(col<=((n-row)+1)){
    //         cout<<"*";
    //         col++;
    //     }
    //     row++;
    //     cout<<endl;
    // }
    // OUTPUT
    // ****
    // ***
    // **
    // *

// NEW pattern
    while(row<=n){
        int space=row-1;
        while(space>0){
            cout<<" ";
            space--;
        }
        int col=1;
        int k=row;
        while(col<=((n-row)+1)){
            cout<<k;
            k++;
            col++;
        }
        row++;
        cout<<endl;
    }

}