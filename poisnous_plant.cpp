#include <bits/stdc++.h>
using namespace std;

// sac suxx
// int poisnousPlant(vector<int> &arr)
// {
//     // int len = arr.size();
//     int count = 0;
//     bool pp = 1;
//     while (pp != 0)
//     {
//         pp = 0;
//         for (int i = 1; i < arr.size(); i++)
//         {
//             if (arr[i] > arr[i - 1])
//             {
//                 arr.erase(arr.begin() + i);
//                 pp = 1;
//             }
//         }
//         count++;
//         cout << "inside " << count << endl;
//         for (int i = 0; i < arr.size(); i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout<<endl;
//     }

//     return count;
// }

void poisnourPlantstack(vector<int> arr)
{   
    stack<int>st;
    for (int i = arr.size()-1; i >=1; i--){

        if(arr[i]<arr[i-1]){
            if(st.empty()){
                st.push(arr[i]);
                //cout<<"from first if condition "<<st.top()<<endl;
            }
            else{
                if(st.top()>arr[i]){
                   //  cout<<"element erased "<<st.top()<<endl;
                    st.pop();
                    st.push(arr[i]);
                    //cout<<"from other if condition "<<st.top()<<" " <<i<<endl;
                }
            }
        }

    }
    st.push(arr[0]);
    
    while(st.empty()!=true){
       cout<< st.top()<<endl;
        st.pop();
    }
    

}

int main()
{
    vector<int> v = {3, 2, 5, 4, 7};
    //cout << poisnousPlant(v);
    // cout << "e";
   // stack<int>b=
  //  while(b.empty()){
    //     cout<<b.top();
    //     b.pop();
    // }
    poisnourPlantstack(v);

}