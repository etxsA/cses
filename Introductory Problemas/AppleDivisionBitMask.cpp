#include <bits/stdc++.h>

using namespace std; 

using ll = long long int; 


ll solve(ll n, vector<ll> &weights) {
	
	ll minW = INT64_MAX; 
	
	for(int m = 0; m < (1 << n); m++) {
		
		ll sum1 = 0, sum2 = 0; 
		
		for(int i = 0; i < n; i++) {
			
			if(m&(1<<i)) sum1 += weights[i];
			else sum2 += weights[i];
		}
		
		minW = min(minW, abs(sum1 - sum2));
		
	}
	
	return minW; 
}


int main() {
	vector<ll> weights;
	ll n; 
	
	cin >> n;
	weights.resize(n); 
	
	for(ll &e: weights)
		cin >> e; 
	
	
	cout << solve(n, weights) << endl; 
}