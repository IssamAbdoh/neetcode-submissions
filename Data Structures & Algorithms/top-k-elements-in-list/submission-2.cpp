class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {//bucket sort solution
        map<int,int>frq;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            frq[nums[i]]++;
        }
        deque<deque<int>>bucket(n+1);//the max occurance of any number will be the number of elements of nums
        //[7,7,7,7,7] n=5 , so the bucket should be of size 6 , so when we retrieve the bucket[5] we'll get 7

        for(int i=0;i<n;i++)
        {
            if(frq[nums[i]])
            {
                bucket[frq[nums[i]]].push_back(nums[i]);
                frq[nums[i]]=0;//seal
            }
        }

        int i=n;
        vector<int>ans;
        while(k)
        {
            if(bucket[i].size()!=0)
            {
                ans.push_back(bucket[i].back());
                bucket[i].pop_back();
                k--;
                if(bucket[i].size()==0)
                {
                    i--;
                }
            }
            else
            {
                i--;
            }
        }

        return ans;
    }
};
