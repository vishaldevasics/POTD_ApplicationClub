#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
for(int k = 0;k<n;k++){
    int len ;
    cin>>len;
    int a;
    int count = 0;
    for(int i = 0;i<len;i++){
        cin>>a;
        count += a - 1;
    }
    if(count %2 == 1) cout<<"errorgorn"<<endl;
    else cout<<"maomao90"<<endl;
}
 return 0;
}
