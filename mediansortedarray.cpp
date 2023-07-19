#include<bits/stdc++.h>
using namespace std;
 double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size())return findMedianSortedArrays(nums2,nums1);
        int n1= nums1.size();
        int n2= nums2.size();
        int low=0, high=n1;
        while(low<=high){
            //we will be calculating high and low in shorter array and then move the pointer for the sescond array according to the first array
            int cut1=(low+high)/2;
            int cut2= (n1+n2+1)/2-cut1;
                
            int l1= cut1==0? INT_MIN: nums1[cut1-1];
            //int min because if thers is nothing on the left side we will take the min value
            int l2= cut2==0? INT_MIN: nums2[cut2-1];
            int r1= cut1==n1? INT_MAX: nums1[cut1];
            int r2= cut2==n2? INT_MAX: nums2[cut2];

            if(l1<=r2 && l2<=r1){
                if((n1+n2)%2==0)
                return (max(l1,l2)+min(r1,r2))/2.0;
                else return max(l1,l2);
            }
            else if(l1>r2){
                //this means that cut1 will move towards the left side
                high=cut1-1;
            }
            else low=cut1+1;
            //cut1 will move towards the right side

        }
        return 0.0;
    }
int main(){
int n;
cin>>n;
cout<<solve(n);
}