#include<bits/stdc++.h>
using namespace std;
int findMax(int arr[],int len){
 
    int Max=-1;
    for(int i=0;i<len;i++){
        Max=max(Max,arr[i]);
    }
    return Max;
}
//check whether the arr have same element or sum of elements?
bool isSame(int arr1[], int arr2[], int len){
    int sum1=0,sum2=0;
    for(int i=0;i<len;i++ ){
        sum1+=arr1[i];
    }
    for(int i=0;i<len;i++ ){
        sum2+=arr2[i];
    }
    return sum1==sum2?true:false;
    
}

bool isCompatible(int arr1[],int arr2[],int n){
    sort(arr1,arr1+n);
    sort(arr2,arr2+n);
    bool check=1;
    for(int i=0;i<n;i++){
        if(arr1[i]<arr2[i]){
            check=0;
        }
    }
    return check;

}
int main(){
    //int arr[]={3,4,5,2,111,59};
    //int len=sizeof(arr)/sizeof(arr[0]);
    // cout<<findMax(arr,len);
    int n;
    cin>>n;
    
    int arr1[n],arr2[n]; 
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"Next array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    //cout<<"if sum same "<<isSame(arr1,arr2,n);
    //3,4,5,6
    //5,6,7,8
    cout<<"is Compatible  "<<isCompatible(arr1,arr2,n);
    
    
}