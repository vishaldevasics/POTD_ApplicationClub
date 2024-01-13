#include<bits/stdc++.h>
using namespace std;
int main()
{
int z;
cin>>z;
for(int k = 0;k<z;k++){
    int n ;
    cin>>n;
    long long nums[n];
    for(int i = 0;i<n;i++){
        cin>>nums[i];
    }
    sort(nums,nums+n);
    long long s = nums[0]*nums[1];
    long long e = nums[n-1] * nums[n-2];
    if(s >= e) cout<<s<<endl;
    else cout<<e<<endl;
}
 return 0;
}