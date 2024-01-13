
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char k;
        cin >> n >> k;
        string s;
        cin>>s;
        string ans[n+1];
        int flag = 1;
        int j = 0, i = 0;
        while (i <n && j<n+1)
        {
            if (s[i] < k)
            {
                flag = 0;
                ans[j] = k;
                k=INT_MIN;
                j++;
            }
            else
            {
                ans[j] = s[i];
                j++;
                i++;
            }
        }
        // printing ans
        if(flag){
            cout<<s+k<<endl;
            continue;
        }
        for (int a = 0; a < n+1; a++){
            cout << ans[a];
        }
            cout<<endl;
    }
    return 0;
}






// #include<bits/stdc++.h>
// using namespace std;
// int countDigit(long long n) {  
//   return floor(log10(n) + 1);  
// }
// int main()
// {
// int n;
// cin>>n;
// for(int k = 0;k<n;k++){
//     int len ;
//     char d ;
//     string str ;
//     string ans;
//     cin>>len>>d>>str;
//     for(int i = 0;i<len;i++){
//         if(d>str[i]){
//             ans = str.insert(i,1,d);
//             break;
//         }
//         ans = str + d;
//     }
//     cout<<ans<<endl;
// }
//  return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     for(int i = 0;i<20000 ;i++ )
//     cout<<9;
//  return 0;
// }