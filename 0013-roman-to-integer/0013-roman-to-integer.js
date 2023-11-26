/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function(s) {
    let romanint=new Map()
    romanint.set('I',1)
    romanint.set('V',5)
    romanint.set('X',10)
    romanint.set('L',50)
    romanint.set('C',100)
    romanint.set('D',500)
    romanint.set('M',1000)
  
    
    let ans=0;
    
    let i
    for( i=0;i<s.length-1;i++){
        
        let t1=romanint.get(s[i]);
        let t2=romanint.get(s[i+1]);
        if(t1<t2){
            ans+=t2-t1;
            i++
            check=1
        }else 
            ans+=t1;   
    }
    
    
    if(i==s.length-1){
        ans+=romanint.get(s[i])
    }
    return ans
    
    
    
    
    
    
    return ans;
    
};