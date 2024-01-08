#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> ans;
    for(int i = 0;i<n;i++){
        int num ;
        cin>>num;
        if(num/100 == 0)  ans.emplace_back(num%10);
        else{
            int minDig = 10;
            while(num != 0){
                int dig = num%10;
                if(dig<minDig) minDig = dig;
                num = num/10;
            }
            ans.emplace_back(minDig);
        }
    }
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }


 return 0;
}