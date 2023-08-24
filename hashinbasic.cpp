#include<bits/stdc++.h>
using namespace std;

int main(){

    // int n;
    // cin>>n;
    int number;
    cin>>number;
    int arr[5]={4,32,1,3,1};
    

    //  for(int i=0;i<n;i++){
    //     cout<<arr[i];
    // }
     
   // hashing
    int hash[13]={0};
    for(int i=0;i<13;i++){
        hash[arr[i]]+=1;
    }

    cout<<"output "<<hash[number];

    // //
    // int q;
    // cin>>q;
    // while(q--){
    //     int number;
    //     cin>>number;
    //     cout<<hash[number]<<endl;
    // }


   
    
}