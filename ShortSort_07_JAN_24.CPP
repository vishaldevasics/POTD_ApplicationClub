#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    vector<string> ans;
    for(int j = 0; j<n; j++){
        string st;
        cin>>st;
        // cout<<st.find('a') << " "<< st.find('c')
        if((st.find('a')==2 && st.find('c')==0) || (st.find('a')<2 && st.find('c')>0)) ans.emplace_back("YES");
        else ans.emplace_back("NO");
    }
    for(auto it : ans){
        cout<<it<<endl;
    }
 return 0;
}