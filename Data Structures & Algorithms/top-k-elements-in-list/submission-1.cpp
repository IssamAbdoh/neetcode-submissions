class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // -1000 <= nums[i] <= 1000
        int frq_positive[1000+1]={0};
        int frq_negative[1000+1]={0};
        int zeroes=0,n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]<0)
            {
                frq_negative[nums[i]*(-1)]++;
            }
            else if(nums[i]>0)
            {
                frq_positive[nums[i]]++;
            }
            else
            {
                zeroes++;
            }
        }

        //In C++ a priority_queue is implemented as a heap, and by default it behaves as a max heap.
        priority_queue<pair<int,int>> pq;

        if(zeroes)
        {
            pq.push({zeroes, 0});
        }
        for(int i=1;i<1000+1;i++)
        {
            if(frq_negative[i])
            {
                pq.push({frq_negative[i], (i)*(-1)});
            }
        }
        for(int i=1;i<1000+1;i++)
        {
            if(frq_positive[i])
            {
                pq.push({frq_positive[i], (i)});
            }
        }

        vector<int>ans;
        while(k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};
