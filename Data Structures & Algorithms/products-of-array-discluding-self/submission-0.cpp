class Solution {
public:
    //Follow-up: Could you solve it in O(n) time without using the division operation?

    vector<int> productExceptSelf(vector<int>& nums) {
        /*
            Time complexity: O(n)
            Space complexity: O(n)
        */
        
        int n = nums.size();
        vector<int> res(n);

        vector<int> pref(n);//Prefix product: pref[i] = product of all elements to the left of i

        vector<int> suff(n);//Suffix product: suff[i] = product of all elements to the right of i


        pref[0] = 1;
        suff[n - 1] = 1;
        for (int i = 1; i < n; i++) {
            pref[i] = nums[i - 1] * pref[i - 1];
        }
        for (int i = n - 2; i >= 0; i--) {
            suff[i] = nums[i + 1] * suff[i + 1];
        }
        for (int i = 0; i < n; i++) {
            res[i] = pref[i] * suff[i];
        }
        
        return res;
    }
};
