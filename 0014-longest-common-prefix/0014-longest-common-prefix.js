/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
    strs.sort()
    console.log(strs)
    let ans=""
    let first=strs[0];
    let last=strs[strs.length-1]
    
    for(let i=0;i<first.length;i++){
        if(first[i]===last[i]) ans+=first[i]
        
        else break;
    }
    return ans;
};