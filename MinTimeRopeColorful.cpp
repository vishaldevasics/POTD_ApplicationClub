class Solution {
public:
    int minCost(string c, vector<int>& t) {
    int timeTaken = 0;
    int n = c.length();

    for(int i=1;i<n;i++){
        if(c[i]==c[i-1]){
            timeTaken += min(t[i],t[i-1]);
            if(t[i]<t[i-1]){
                t[i] = t[i-1];
            }
        }
    }

    return timeTaken;
    }
};