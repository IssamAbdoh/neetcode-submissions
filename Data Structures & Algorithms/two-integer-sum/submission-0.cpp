class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>frq;
        vector<int>ans;
        for (int i=0;i<nums.size();i++)
        {
            frq[nums[i]]++;
        }
        int remain;
        for (int i=0;i<nums.size();i++)
        {
            remain=target-nums[i];
            if(frq[remain]!=0)
            {
                if(remain==nums[i]&&frq[remain]==1)
                {
                    continue;
                }
                ans.push_back(i);
                if(ans.size()==2)
                {
                    break;
                }
            }
        }

        return ans;
    }
};
