#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        int size ;
        cin >> size;
        int arr[size];
        for(int j = 0 ; j < size ; j++)
        {
            cin >> arr[j];
        }
        int count2 = 0;
        int count1 = 0;
        int no2 = 0;
        int sum = 0;
        for(int k = 0 ; k < size ; k++)
        {
           if(arr[k] == 1) count1++;
            if(arr[k] == 2) 
            {
                count2 += 2;
                no2++;
            }
            
            sum += arr[k];
        }
      if(sum % 2 == 0  && count1 % 2 == 0 && count2 % 2 == 0  )
      {
          if(count1 == 0 && no2 %2 != 0)
          {
              cout << "NO" << endl;
          }
          else
          {
              cout << "YES" << endl;
            }   
      }
        else
        { 
            cout << "NO" << endl;
        }
            
        
    }
    return 0;
}