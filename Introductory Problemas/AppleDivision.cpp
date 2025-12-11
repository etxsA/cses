#include <bits/stdc++.h>

using namespace std; 

using ll = long long int; 

vector<ll> weights;
ll n; 

ll apples(int index, ll sum1, ll sum2) {
	
	if(index == n) {
		return abs(sum1-sum2);
	} else {
		
		return min(apples(index +1, sum1, sum2 + weights[index]), 
					apples(index +1, sum1 + weights[index], sum2));
	}
	
}

int main() {
	
	
	cin >> n;
	weights.resize(n); 
	
	for(ll &e: weights)
		cin >> e; 
	
	
	cout << apples(0,0,0) << endl; 
}