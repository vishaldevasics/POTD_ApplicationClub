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
    // int arr[len];
    for(int i = 0;i<len;i++){
        cin>>a;
        if (a==2) count++;
        if (a==3) count += 2;
        else if(a>3 && a%2 == 0) count += a/2 + 1;
        else if(a>4 && a%2 == 1) count += a/2 + 2;
    }
    // cout<<"count = "<<count<<endl;
    // if(count == 0) cout<<"maomao90"<<endl;
    // else 
    if(count %2 == 1) cout<<"errorgorn"<<endl;
    else cout<<"maomao90"<<endl;
}
 return 0;
}