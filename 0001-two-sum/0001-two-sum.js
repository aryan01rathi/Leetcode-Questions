/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let left=0;
    let right=nums.length-1;
    let ansarray=[];
    
    temparra=nums.slice().sort((a,b)=>a-b)
    
    while(left<right){
       //console.log("yes")
        if(temparra[left]+temparra[right]===target){
            if(temparra[left]!==temparra[right]){
            let index1=nums.indexOf(temparra[left])
            let index2=nums.indexOf(temparra[right])
            
            ansarray.push(index1);
            ansarray.push(index2);}
        else{
                nums.forEach((element, index) => {
                        if (temparra[left] === element) {
                            ansarray.push(index);
                        }   
                });
            }
            break;
           
        }
        else if(temparra[left]+temparra[right]>=target){
            right--;
        }
        else if(temparra[left]+temparra[right]<=target){
            left++;
        }
    }
    return ansarray;
};