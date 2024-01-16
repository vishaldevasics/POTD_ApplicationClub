#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
for(int k = 0;k<n;k++){
    int len;
    cin>>len;
    int count = 0;
    int avlCats = 0;
    string str1,str2;
    cin>>str1>>str2;
    for(int i = 0;i<len;i++){
        if(str1[i]=='1') avlCats++;
    }
    for(int i = 0;i<len;i++){
        if(str2[i]=='1'){
            if(str1[i]=='1') avlCats--;
            else{
            count++;
        }
        }
        
    }
    cout<<max(count,avlCats)<<endl;

}
 return 0;
}