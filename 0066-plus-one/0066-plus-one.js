/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function(digits) {
    let c=0;
    for(let i=digits.length-1;i>=0;i--){
        if(c==0 && i<digits.length-1){
            return digits;
        }else{
            digits[i]+=1;
            if(digits[i]>9){
                c=1
                //console.log(c)
            }
            else{
                c=0
               // console.log("else ",c)
            }
            digits[i]%=10;
        }
        
    }
    if(c==1){
            //console.log("ee")
            digits.unshift(1);
        }
    return digits
};