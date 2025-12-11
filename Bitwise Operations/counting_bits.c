// Cses Counting Bits
#include <bits/stdc++.h>
#define endl '\n'

using ll = long long; 
using namespace std; 

void solve(long long n) {
	
	n++;
	ll res = 0; 
	
	// Using pattern, that for bit k, there are 2^k zeros and 2^k ones
	// 
	for(ll i  = 0; i < 60; i++) {
		
		ll cycleSize  = 1ll << (i+1); // Including 1 and 0
		ll onesCount = 1ll << i; // Half of cycle size
		
		// The result is the number of cycles that exist from 1 to n+1
		// Using that information we can know how many times the pattern repat  
		// All of those patterns has the same onesCount
		res += (n / cycleSize) * onesCount;
		
		// If there are incomplete patterns
		ll rem = n % cycleSize; 
		
		// 
		if( (rem-cycleSize/ 2) > 0)
			res += rem-cycleSize /2;  
	}
	
	
	cout <<  res << endl; 
}

int main() {
	cin.tie(0) -> ios::sync_with_stdio(0);
	long long n; 
	
	cin >> n; 
	
	solve(n); 
	
	
}