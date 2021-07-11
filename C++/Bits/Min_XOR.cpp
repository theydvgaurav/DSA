//Interview Bit Question
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> V = {0, 2, 5, 7};
    vector<int> A;
    
    sort(V.begin(),V.end());
    
    
    for(int i = 0 ; i < V.size() - 1 ; i++){
        A.push_back(V[i]^V[i+1]);
    }
    
    
    
    sort(A.begin(), A.end());
	cout << A[0];
	return 0;
}
