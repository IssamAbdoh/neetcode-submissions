class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        int l=0,h=numbers.size()-1;
        while(l<h)
        {
            if(numbers[l]+numbers[h]>target)
            {
                h--;
            }
            else if(numbers[l]+numbers[h]<target)
            {
                l++;
            }
            else
            {
                ans.push_back(l+1);
                ans.push_back(h+1);
                break;
            }
        }

        return ans;
    }
};
