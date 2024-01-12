#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
        string str;
        cin>>str;
        int ans = 0;
        int count = 0;
        for(int i = 2 ;i<str.size();i++){
            if(str[i]==str[i-1]&& str[i-1]==str[i-2] && str[i-2]=='x'){
                str.erase(str.begin()+i);
                i--;
                ans++;
            }
        }
        cout<<ans<<endl;
 return 0;
}