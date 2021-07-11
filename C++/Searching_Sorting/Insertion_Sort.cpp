#include <bits/stdc++.h>
using namespace std;

void sort_in(int *a, int n){
    
    for(int i = 1  ; i < n ; i++ ){ 
        int key = a[i];
        int j = i-1;
        while(j>=0 && a[j]>key){
            a[j+1] = a[j];
            j--;
           
        }
         a[j+1] = key;
         
    //      for(int i = 0 ; i<5 ; i++){
	//     cout << a[i] << " ";
	// }
	// cout << "\n" ;
        
    }
}

int main() {
	int a[5];
	for(int i = 0 ; i<5 ; i++){
	    cin >> a[i];
	}
	sort_in(a,5);
	// cout << "---------------------------\n" ;
	for(int i = 0 ; i<5 ; i++){
	    cout << a[i] << " ";
	}
	return 0;
}