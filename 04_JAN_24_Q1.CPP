//Since the outer loop runs for only the size of the string at the first index it is comparitively very small than the size of the array.
//Time Complexity O(n) n->sizeOfArray
//Space Complexity O(1)
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1) return strs[0];
        string st = "";
        int count = 0;
        int flag = 1;
        for(int i = 0;i<strs[0].length();i++){
            for(int j = 1;j<strs.size();j++){
                if(i==strs[j].length()){
                    flag = 0;
                    break;
                }
                if(strs[j][i] != strs[j-1][i]){
                    flag = 0;
                    break;
                } 
            }
            if(flag == 0) break;
            count++;
        }
        return strs[0].substr(0,count);
    }
};