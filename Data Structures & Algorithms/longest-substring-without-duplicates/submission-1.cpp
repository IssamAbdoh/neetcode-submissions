class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>frq;

        int mx=0,n=s.size();
        int l=0,r=0;
        while(r<n)
        {
            frq[s[r]]++;
            if(frq[s[r]]>1)
            {
                while(frq[s[r]]==2)
                {
                    frq[s[l++]]--;
                }
            }
            mx=max(mx,r-l+1);
            r++;
        }

        return mx;
    }
};
