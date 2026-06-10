class Solution {
public:
    void resetFrq(int frq[])
    {
        for(int i=0;i<26;i++)
        {
            frq[i]=0;
        }
    }

    string stringCode(int frq[])
    {
        string s="";
        for(int i=0;i<26;i++)
        {
            for(int j=0;j<frq[i];j++)
            {
                s += char(i + 'a');
            }
        }

        return s;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>grouping;
        int frq[26]={0};
        int n = strs.size();
        string s;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<strs[i].size();j++)
            {
                frq[strs[i][j]-'a']++;
            }

            s = stringCode(frq);
            grouping[s].push_back(strs[i]);
            resetFrq(frq);
        }

        vector<vector<string>> result;

        for (auto &p : grouping)
        {
            result.push_back(p.second);
        }

        return result;
    }
};
