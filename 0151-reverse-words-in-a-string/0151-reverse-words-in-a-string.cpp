class Solution {
public:
    string reverseWords(string s) {
        
          
         string result ;
         string sum;
         int j;
         int i = 0;
         int n = s.length();
      
       while(i<n){ 
        
        while(i<n&&s[i]==' ') i++;
        
        if(i>=n) break;
        
        j = i;
           
        while(j<n&&s[j]!=' ') j++;
        
        sum  = s.substr(i,j-i);
        
         if(result.length()==0) result = sum;  
         
        else 
         result = sum +" "+result;
        
         i = j+1;  
       } 
        return result;
    }
};