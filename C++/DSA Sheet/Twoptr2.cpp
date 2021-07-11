//Program to find that whether sum of some (a[i],a[j],a[k]) equals a given number
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[7] = {1,3,9,11,15,17,20};
	int sum = 35;
	int low = 0;
	int mid = 0;
	int high = 6;
	while(low<=high){
	    
	    for(mid = low + 1 ; mid < high ; mid++){
	    if(a[low]+a[high] + a[mid] > sum || a[low]+a[high] + a[mid] == sum)
	        break;
	}
	    if(a[low] + a[high] + a[mid] > sum)
	        high--;
	    if(a[low] + a[high] + a[mid] < sum)
	        low++;
	    if(a[low] + a[high] + a[mid] == sum)
	        break;
	    
	}
	
	cout << "Indexes : " << low << " " << mid << " " << high << endl;
	cout << "Values : " << a[low] << " " << a[mid] << " " << a[high] << endl;
	cout << "Required Sum : " << sum << endl;
	
	return 0;
}
