//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    
    
    
    bool isCheck(int A[],int N,int M,int max)
    {
        int sum =0;
        int student  = 1;
        
        for(int i = 0;i<N;i++)
        {
            sum = sum +A[i];
            if(sum>max)
            {
                sum = A[i];
                student ++;
            }
            
            if(student>M)
            {
                return false;
            }
            
        }
        
        return true;
    }
    
    
    
    int findPages(int A[], int N, int M) 
    {
        
        if(M>N)
        {
            return -1;
        }
        
        int sum = 0;
        for(int i = 0;i<N;i++)
        {
            sum  = sum +A[i];
            
        }
        
        int max = INT_MIN;
        for(int i = 0;i<N;i++)
        {
            if(A[i]>max)
            {
                max= A[i];
            }
        }
        
        int start = max;
        int end =sum;
        int ans = -1;
        
        while(start<=end)
        {
            int mid = start +(end-start)/2;
            if(isCheck(A,N,M,mid)==true)
            {
                ans = mid;
                end = mid-1;
            }
            else 
            {
                start = mid+1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends