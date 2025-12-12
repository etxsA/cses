// The problem is a backtracking problem, you can't search the entire space
// You should see if the difference between the previous element and current 
// is greater than 1, if so do no continue that perm

// Check set implementation, looks ambiguos, and shouldn't work
#include<bits/stdc++.h>

using namespace std; 



vector<int> permutation;
set<int> elec; 

int n; 

bool found; 

void search() {
	if(found) return; 
	
	if(permutation.size() == n) {
		found = true; 
	} else {
		
		for(int x: elec) {
			
			if(permutation.empty() || abs(permutation.back() - x) > 1) {
				
				permutation.push_back(x);
				elec.erase(x);
				search();
				
				if(found) return;
				elec.insert(x);
				permutation.pop_back();
				
				
			}
		}
	}
}


int main() {
	
	
	cin >> n; 	
	found = false; 
	
	for(int i = 1; i <= n; i++)
		elec.insert(i);
	
	
	search();
	
	if(found) {
		for(auto e: permutation)
			cout << e << " ";
	} else 
		cout << "NO SOLUTION";
	
	
}