class Solution {
public:
    int maxArea(vector<int>& h) {
        int mx=0;

        int i=0,j=h.size()-1;
        while(i<j)
        {
            mx=max(mx,(j-i)*min(h[i],h[j]));
            if(h[i]<h[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }

        return mx;
    }
};
