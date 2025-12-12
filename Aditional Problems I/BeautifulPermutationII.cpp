// The problem is a backtracking problem, you can't search the entire space
// You should see if the difference between the previous element and current 
// is greater than 1, if so do no continue that perm
#include<bits/stdc++.h>

using namespace std; 



vector<int> permutation;
vector<bool> chosen; 
int n; 

bool found; 

void search() {
	if(found) return; 
	
	if(permutation.size() == n) {
		found = true; 
	} else {
		for(int i = 1; i <= n; i++) {
			
			if(chosen[i] ) continue; 
			
			// Don't continue permutations where one difference is already 1
			if(!permutation.empty()) {
				if(abs(permutation.back() - i) == 1) continue; 
			}
			
			chosen[i] = true; 
			permutation.push_back(i);
			search();
			
			// If found don't pop found permutation
			if(found) return; 
			chosen[i] = false; 
			permutation.pop_back();
			
		}
	}
}


int main() {
	
	
	cin >> n; 
	
	chosen.resize(n+1, false); 
	
	found = false; 
	search();
	
	if(found) {
		for(auto e: permutation)
			cout << e << " ";
	} else 
		cout << "NO SOLUTION";
	
	
}