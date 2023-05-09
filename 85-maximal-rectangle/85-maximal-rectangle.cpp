class Solution {
public:
    vector<int> nsr(vector<int> hei,int r){
        vector<int> right(r);
        stack<int> s;
        
        for(int i=r-1;i>=0;i--){
            while(!s.empty() && hei[s.top()]>=hei[i] ){
                s.pop();
            }
            if(s.empty()){
                right[i] = -1;
            }
            else{
                right[i]=s.top();
            }
            s.push(i);
        }
        return right;
        
    }
    
    vector<int> nsl(vector<int> hei,int r){
        vector<int> left(r);
        stack<int> s;
        
        for(int i=0;i<r;i++){
            while(!s.empty() && hei[s.top()]>=hei[i] ){
                s.pop();
            }
            if(s.empty()){
                left[i] = -1;
            }
            else{
                left[i]=s.top();
            }
            s.push(i);
        }
        return left;
        
    }
    
    int mah(vector<int> & hei){
        int n=hei.size();
        
        vector<int> left(n);
        vector<int> right(n);
        left=nsl(hei,n);
        right=nsr(hei,n);
        
        int res=INT_MIN;
        
        for(int i=0;i<n;i++){
            int w;
            int l,r;
            l=left[i];
            r=right[i];
            if(l==-1) l= -1;
            if(r==-1) r=n;
            
            w=(r-1)-(l+1)+1;
            res=max(res,w*hei[i]);
        }
        return res;
    }
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        vector<int> v(c,0);
      
        int mx=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]=='0'){
                    v[j]=0;
                }
                else{
                    v[j]=v[j]+1;
                }
            }
            mx=max(mx,mah(v));
        }
        return mx;
        
        
    }
};