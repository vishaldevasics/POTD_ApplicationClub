#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = 0;i<n ;i++){
        string st;
        cin>>st;
        map<char,int> newchar;
        for(int i = 0;i<st.length();i++){
            newchar[st[i]]++;
        }
        if(newchar.size()==1) cout<<"NO"<<endl;
        else if(newchar.size()==2){
            bool flag = true;
            for(auto it : newchar){
                if(it.second == 1){
                    cout<<"NO"<<endl;
                    flag = false;
                    break;
                }
            }
            if(flag) cout<<"YES"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
 return 0;
}