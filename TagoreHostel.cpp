#include<bits/stdc++.h>
using namespace std;
int main()
{
int n1;
cin>>n1;
int mca[n1];
for(int i = 0;i<n1;i++){
    cin>>mca[i];
}
int n2;
cin>>n2;
int btech[n2];
for(int i = 0;i<n1;i++){
    cin>>btech[i];
}
sort(mca,mca+n1);
sort(btech,btech+n2);

int i = 0;
int j = 0;
int count = 0;
while(i<n1 && j<n2){
    if(abs(mca[i]-btech[j]) < 2){
        count++;
        i++;
        j++;
    }
    else if(mca[i]>btech[j]) j++;
    else i++;
}
cout<<count;

 return 0;
}