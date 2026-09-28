class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length() != t.length()) {
            return false;
        }

        int freq[26] = {0};

        for (int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                return false;
            }
        }

        return true;
    }
};























/*brute force approach 

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        }

        for(int i = 0; i < s.length(); i++){
            int countS=0;
            int countT=0;

            for(int j=0; j<s.length(); j++){
                if(s[j] == s[i]) {
                    countS++;
                }
            }

            for(int j = 0; j< t.length(); j++){
                if(t[j] == s[i]){
                    countT++;
                }
            }

            if(countS != countT) {
                return false;
            }
        }
        return true;
    }
}; */