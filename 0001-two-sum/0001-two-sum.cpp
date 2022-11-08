class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        vector<pair<int,int>> v;
        for(int i=0; i<nums.size(); i++)
            v.push_back({nums[i], i});
        sort(v.begin(),v.end());
        int left=0;
        int right=v.size()-1;
        while(left<right)
        {
            if(v[left].first + v[right].first == target)
            {
                ans.push_back(v[left].second);
                ans.push_back(v[right].second);
                return ans;
            }
            else if(v[left].first + v[right].first > target)
                right--;
            else
                left++;
        }
        return ans;
    }
};
