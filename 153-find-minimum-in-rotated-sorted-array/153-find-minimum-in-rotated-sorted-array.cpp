class Solution {
public:
    int findMin(vector<int>& arr) {
        
        int start = 0;
        int n = arr.size();
        int end= arr.size()-1;
        
        while(start<=end)
        {
            if(arr[start]<arr[end])
            {
                return arr[start];
            }
            
            int mid = start +(end -start)/2;
            int next = (mid+1)%n;
            int pre  =(mid-1+n)%n;
            
            if((arr[mid]<=arr[pre])&&(arr[mid]<=arr[next]))
            {
                return arr[mid];
            }
            
            else if(arr[start]<=arr[mid])
            {
                start = mid+1;
            }
            else 
            {
                end = mid-1;
            }
            
        }
        
        return 0;
       
    }
};