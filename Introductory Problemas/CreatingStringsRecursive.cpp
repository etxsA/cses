// Think about how a permutation with repetition works, and it
// woule be easier to implement
// next_permutation does it by default. 
// Solution from USACO guide
#include<bits/stdc++.h>

using namespace std; 

#define sz(x) (int)(x).size()


string s; 
vector<string> permutations; 
int char_count[26];

void search(string curr = "") {
	
	if(sz(curr) == sz(s)) {
		permutations.push_back(curr);
		return;
	} else {
		for(int i = 0; i < 26; i++) {
			
			if(char_count[i] > 0) {
				
				char_count[i]--;
				search(curr + (char)('a'+i));
				char_count[i]++;
			}
			
		}
	}
	
	
	
	
}

int main() {
	
	cin >> s; 
	for(char c: s)
		char_count[c-'a']++;
	
	
	search();
	
	cout << sz(permutations) << endl;
	
	for(string &e: permutations) cout << e << endl; 
	
}