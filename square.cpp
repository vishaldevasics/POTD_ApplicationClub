#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
for(int k = 0;k<n;k++){
    int arr[8];
    for(int i = 0;i<8;i++){
        cin>>arr[i];
    }
    for(int i = 2;i<8;i+=2){
        if(arr[0]==arr[i]){
            int area = (arr[1]-arr[i+1]) * (arr[1]-arr[i+1]) ;
            cout<<area<<endl;
            break;
        }
    }
    
}
 return 0;
}