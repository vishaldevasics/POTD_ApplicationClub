//Time Complexity O(n);
//Space Complexity O(1);
int minMoves(int a[], int n, int k){
    long count = 0;
    for(int i = 0;i<n-1;i++){
        if(a[i]<a[i+1]){
            // cout<<a[i+1]<<" "<<a[i]<<endl;
            int num = ceil((a[i+1] - a[i])*1.0/k);
            // cout<<num;
            a[i+1] = a[i+1] - (k*num);
            count += num;
        }
    }
    return count%1000000007;
}