
    
   class Solution {
public:
    int LB(vector<int> nums, int x){
        int l = 0;
        int r = nums.size()-1;
        int lb = nums.size();
        while(l <= r){
            int m = l + (r-l)/2;
            if(nums[m] == x){
                lb = m;
                r = m - 1;   
            }
            else if(nums[m] < x){
                l = m + 1;
            }
            else r = m - 1;
        }
        return lb;
    }
    int UB(vector<int> nums, int x){
        int l = 0;
        int r = nums.size() - 1;
        int ub = -1;
        while(l <= r){
            int m = l + (r-l)/2;
            if(nums[m] == x){
                ub = m;
                l = m + 1;
            }
            else if(nums[m] > x){
                r = m - 1;
            }
            else l = m + 1;
        }
        return ub;
    }
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int lb = LB(nums,target);
        int ub = UB(nums,target);
        //cout<<lb<<" "<<ub<<endl;
        vector<int> res;
        for(int i=lb;i<=ub;++i) res.push_back(i);
        return res;
    }
};