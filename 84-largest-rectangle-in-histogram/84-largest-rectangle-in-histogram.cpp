class Solution {
public:
    
    
    vector<int> indexsRight(vector<int>& h)
    {
        stack<pair<int,int>> st;
        vector<int> ans;
         int pesudoindex = h.size();
        int n = h.size();
        for(int i =n-1;i>=0;i--)
        {
            if(st.size()==0)
            {
                ans.push_back(pesudoindex);
            }
            else if(st.size()>0&&st.top().first<h[i])
            {
                ans.push_back(st.top().second);
            }
            else if(st.size()>0&&st.top().first>=h[i])
            {
                while(st.size()>0&&st.top().first>=h[i])
                {
                    st.pop();
                }
                if(st.size()==0)
                {
                    ans.push_back(pesudoindex);
                }
                else 
                {
                    ans.push_back(st.top().second);
                }
            }
            st.push({h[i],i});
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
    
    
    vector<int> indexsLeft(vector<int> &h)
    {
        stack<pair<int,int>> st;
        vector<int> ans;
        int pesudoindex = -1;
        int n = h.size();
        for(int i =0;i<n;i++)
        {
            if(st.size()==0)
            {
                ans.push_back(pesudoindex);
            }
            else if(st.size()>0&&st.top().first<h[i])
            {
                ans.push_back(st.top().second);
            }
            else if(st.size()>0&&st.top().first>=h[i])
            {
                while(st.size()>0&&st.top().first>=h[i])
                {
                    st.pop();
                }
                if(st.size()==0)
                {
                    ans.push_back(pesudoindex );
                }
                else 
                {
                    ans.push_back(st.top().second);
                }
            }
            st.push({h[i],i});
        }
            
        return ans;
    }
    
    
    int largestRectangleArea(vector<int>& heights) {
        
        
        vector<int> right =  indexsRight(heights);
        vector<int> left   = indexsLeft(heights);
        vector<int> width;
        vector<int> area;
        for(int i=0;i<right.size()&&i<left.size();i++ )
        {
            width.push_back((right[i]-left[i])-1);
        }
        
        for(int i = 0;i<width.size();i++)
        {
            area.push_back(width[i]*heights[i]);
        }
        
        int max = INT_MIN;
        for(int i = 0;i<area.size();i++)
        {
            if(area[i]>max)
            {
                max = area[i];
            }
        }
        
        return max;
        
    }
};