//To find the second largest number from an array.
//Time complexity O(n(log n))
//since the sort function takes n log n and the next comparision at max can get to n times 
//where in the highest degree would be n log n


//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    sort(arr,arr+n);
	    for(int i = n-1;i>0;i--){
	        if(arr[i]!=arr[i-1]) return arr[i-1];
	    }
	    return -1;
	}
};
