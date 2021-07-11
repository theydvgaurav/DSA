//https://practice.geeksforgeeks.org/problems/find-the-highest-number2259/1
//Binary Searching Concept
#include <bits/stdc++.h>
using namespace std;

int myfn(int *a, int n){
    int low=0;
    int high = n-1;
    
    while(low<high){
        int mid = low + (high - low)/2;
        //l+(h-l)/2                   
    
        if(a[mid]>a[mid+1] && a[mid]>a[mid-1])  
            return a[mid];
        if(a[mid]>a[mid+1])
        {
            high = mid;
        }
        if(a[mid-1]<a[mid])
        {
            low = mid;
            
        }
        if(low==high-1){
            return max(a[low],a[high]);
        }
        
    }
}


int main() {
    int n;
    cin >> n;
	int a[n];
	for(int i = 0 ; i<n;i++){
	    cin >> a[i];
	}
	
	cout << myfn(a,n);
	
	return 0;
}
