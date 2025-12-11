#include<bits/stdc++.h>

using namespace std; 



int main() {
	
	cin.tie(0) -> sync_with_stdio(0); 
	
	
	string base; 
	
	cin >> base; 
			
	
	vector<string> permutations; 
	
	sort(base.begin(), base.end());
	
	int counter = 0; 
	
	do {
		
		permutations.push_back(base);
		counter++; 
	} while(next_permutation(base.begin(), base.end()));
	
	
	cout << counter << endl; 
	for(auto e: permutations) 
		cout << e << endl; 
	
}