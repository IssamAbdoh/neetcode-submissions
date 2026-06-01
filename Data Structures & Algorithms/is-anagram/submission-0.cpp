class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>frq1,frq2;
        if(s.size()!=t.size())
        {
            return false;
        }
        for(int i=0;i<s.size();i++)
        {
            frq1[s[i]]++;
            frq2[t[i]]++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(frq1[s[i]]!=frq2[s[i]])
            {
                return false;
            }
        }
        return true;
    }
};
