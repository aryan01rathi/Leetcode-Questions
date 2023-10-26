class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0;
        int j=0;
        while(j<needle.length() && i<haystack.length()){
           
            if(haystack[i]==needle[j]){
                i++;
                j++;
                 if(needle.length()==j){
                return i-needle.length();
            }
               
            }
            if(haystack[i]!=needle[j]){
                i=i-j+1;
               // cout<<"else conditnon "<< " ";
                j=0;
            } 
        }
        return -1;
    }
};