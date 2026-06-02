class Solution {
public:
    bool isPalindrome(string s) {
        deque<char>dq;
        char c;
        for(int i=0;i<s.size();i++)
        {
            c=s[i];
            if(isAlphanumeric(c))
            {
                if(isCapitcal(c))
                {
                    dq.push_back(c+32);
                }
                else
                {
                    dq.push_back(c);
                }
            }
        }

        int i=0,j=dq.size()-1;
        while(i<j)
        {
            if(dq[i++]!=dq[j--])
            {
                return false;
            }
        }
        return true;
    }

    bool isAlphanumeric(char c)
    {
        return ('0'<=c&&c<='9') || isAlphabet(c);
    }


    bool isCapitcal(char c)
    {
        return 'A'<=c&&c<='Z';
    }

    bool isAlphabet(char c)
    {
        return ('a'<=c&&c<='z') || isCapitcal(c);
    }

};
