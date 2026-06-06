class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int frq[26] = {0};        
        int left=0;
        int max_frq=0;
        int max_length=0;

        for(int right=0;right<s.size();right++){

            char right_character=s[right];
            frq[right_character - 'A']++;

            max_frq=max(max_frq,frq[right_character-'A']);

            int current_length=right-left+1;
            int required_k=current_length-max_frq;

            if(required_k>k){
                char leftCharacter=s[left];
                frq[leftCharacter -'A']--;
                left++;
            }

            max_length=max(max_length,right-left+1);
        }

        return max_length;
    }
};
