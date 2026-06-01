class Solution {
public:
    bool isValid(string s) {
        deque<char>st;
        int i=0,diff=0;
        while(i<s.size())
        {            
            if(st.size()==0)
            {
                goto hoon;
            }
            diff=s[i] - st[st.size()-1];
            if(diff==1||diff==2)
            {
                st.pop_back();
                i++;
                continue;
            }


            hoon:
            if(i<s.size())
            {
                st.push_back(s[i++]);
            }
        }

        return st.size()==0;
    }
};
