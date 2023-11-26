/**
 * @param {number[]} nums1
 * @param {number} m
 * @param {number[]} nums2
 * @param {number} n
 * @return {void} Do not return anything, modify nums1 in-place instead.
 */
var merge = function(nums1, m, nums2, n) {
    let i=0
    let j=0
    let ans=[]
         //  2        2
    while(i<m && j<n){
        //if i<=j ans=i i++      0 1 2 
        //else if i>j ans=j j++  0
        if(nums1[i]<=nums2[j]){
            ans.push(nums1[i]);
            //console.log(`i ${i} and value is ${nums1[i]}  and ${nums2[j]}`)

            i++
        }
        else{
            //console.log(`j is ${j} and ${nums2[j]}`)
            ans.push(nums2[j])
            j++
        }
        
        
    }
    
   // console.log(`after first while array is ${ans} and i is ${i} j is ${j}`)
    while(i<m){
            ans.push(nums1[i])
            i++
        }
        
        while(j<n){
            ans.push(nums2[j])
            j++
        }
    
    for(let k=0;k<ans.length;k++){
        nums1[k]= ans[k]
    }
};