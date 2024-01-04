//Time complexity O(n^2)
//Space complexity O(1)
class Solution {
public:
    bool rotateString(string s, string g) {
        int lens = s.length();
        int leng = g.length();
        if(lens != leng) return false;
        for(int i = 0;i<s.size();i++){
            char temp = s[0];
            for(int j = 1;j<lens;j++){
                s[j-1] = s[j];
            }
            s[lens-1] = temp;
            if(s == g) return true;
        }
        
        return false;
    }
};