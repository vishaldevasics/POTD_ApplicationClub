//To find the missing number form 0 to n in an array.
//time complexity O(n).


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int sum = (size * (size +1))/2;
        int sum1=0;
        for(int i = 0;i<size;i++){
            sum1 = nums[i]+sum1;
        }
        return sum-sum1;
    }
};