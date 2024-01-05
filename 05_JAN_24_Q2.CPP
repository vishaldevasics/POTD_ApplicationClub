//Time Complexity O(n)
//Space Complexity O(1)
class Solution {
public:
    bool isAnagram(string s, string t) {
        int hashs[26] = {0};
        int hasht[26] = {0};
        for(int i = 0;i<s.length();i++){
            hashs[s[i]-'a']++;
        }
        for(int i = 0;i<t.length();i++){
            hasht[t[i]-'a']++;
        }
        for(int i = 0;i<26;i++){
            if(hashs[i] != hasht[i]) return false;
        }
        return true;
        
    }
};