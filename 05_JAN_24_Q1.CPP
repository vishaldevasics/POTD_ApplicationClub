//Time complexity O(n);
//Space complexity O(n);
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    string ref = "codeforces";
    int ans[n]={0};
    for(int i = 0 ;i<n ;i++){
        string inps;
        cin>>inps;
        for(int j = 0;j<10;j++){
            if(inps[j] != ref[j]) ans[i]++;
        }
    }
    for(int i = 0;i<n;i++){
        cout<<ans[i]<<endl;
    }
 return 0;
}