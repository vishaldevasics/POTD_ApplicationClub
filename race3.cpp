#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
for(int k = 0;k<n;k++){
    int s ;
    int a ;
    int b ;
    int c ;
    int count = 0;
    cin>>s>>a>>b>>c;
    if(s<a) count++;
    if(s<b) count++;
    if(s<c) count++;
    cout<<count<<endl;
 }
 return 0;
}