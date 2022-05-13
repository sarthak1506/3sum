class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int a;
        set<vector<int>> hst;
        sort(nums.begin(), nums.end());
        
        for(int i =0; i<nums.size(); i++)
        {
            a = -nums[i];
            set<int> st;
            for(int j = i+1; j<nums.size(); j++)
            {
                auto it = st.find(-nums[j]+a);
                st.insert(nums[j]);
                if(it!=st.end())
                {
                    vector<int> temp1;
                    temp1.push_back(nums[i]);
                    temp1.push_back(nums[j]);
                    temp1.push_back(*it);
                    sort(temp1.begin(), temp1.end());
                    hst.insert(temp1);
                }    
            }
        }
        vector<vector<int>> temp(hst.begin(),hst.end());
        return temp;
        
    }
};
