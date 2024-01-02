//User function template in C++
//Time complexity would be O(m*n)
//Space complexity would be O(n+m)
class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        map<int,int> mpp;
        for(int i=0 ;i<n;i++){
            mpp[a[i]]++;
        }
        for(int i=0;i<m;i++){
            mpp[b[i]]++;
        }
        return mpp.size();
    }
};