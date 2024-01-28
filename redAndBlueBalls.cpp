#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
string str;
cin>>str;
int count = 1;
int maxCount = 0;
bool flag = 0;
for(int i = 1;i<n;i++){
    if(str[i]=='R' || str[i-1]=='R') flag = 1;
    while(str[i-1]=='R' && str[i]=='R'){
        count++;
        i++;
    }
    if(count>maxCount) maxCount = count;
    count = 1;
}
 if(!flag){
    cout<<0;
    return 0;
 }
 cout<<maxCount;
 return 0;
}