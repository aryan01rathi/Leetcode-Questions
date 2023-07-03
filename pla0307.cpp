#include <bits/stdc++.h>
using namespace std;

void swapNibbles(int n)
{
    vector<int> v;

    int temp = n;
    while (temp != 0)
    {
        v.push_back(temp % 2);
        temp /= 2;
    }
    while (v.size() < 8)
    {
        v.push_back(0);
    }
    reverse(v.begin(), v.end());

    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    
    for (int i = 0; i < v.size() / 2; i++)
    {
        swap(v[i], v[i + 4]);
    }

    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    int ans = 1;
    int base = 1;
    for (int i = v.size() - 1; i > 0; i--)
    {
        ans = ans + v[i] * base;
        base = base * 2;
    }
    cout << ans - 1;
}

//--------- 2 --------

void findOneFourNine(int lower, int upper){
    int count=0;
    for(int i=(lower+1);i<=upper;i++){
        //TC O(upper-lower+1)
        int temp=i;
        while(temp!=0)
        {
            // TC O(logn)
            int rem=temp%10;
            if(rem==1||rem==4 ||rem==9){
                count++;
                break;
            }
            temp/=10;
        }
    }
    cout<<count;
    // TC O((upper-lower+1)logn)
}
void leaderInArray(vector<int>v){
    vector<int>ans;
    int leader=INT_MIN;
    for(int i=v.size()-1;i>0;i--){
        if(v[i]>leader){
            ans.push_back(v[i]);
            leader=v[i];
        }
    }
    for(auto it:ans){
        cout<<it<<" ";
    }
}

int main()
{
//    swapNibbles(50);
//    findOneFourNine(1,10);

   vector<int>v={16,17,4,3,5,2};
   leaderInArray(v);
}