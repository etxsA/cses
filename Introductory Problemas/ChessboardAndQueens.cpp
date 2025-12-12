// A simpler iteration of the problem is solved
// in CPH 5.3 backtracking explanation. 


// Examples of the ds
/*
col
	0 1 2 3
	0 1 2 3
	0 1 2 3 
	0 1 2 3

diag1

	0 1 2 3
	1 2 3 4
	2 3 4 5 
	3 4 5 6

diag2

	3 4 5 6
	2 3 4 5 
	1 2 3 4
	0 1 2 3 

*/

#include<bits/stdc++.h>

using namespace std; 

int n; 
vector<int> col, diag1, diag2;
vector<vector<int>> grid; 
int counts; 

void search(int y) {
	
	if(y==n) {
		counts++;
		return; 
	} else {
		
		for(int x = 0; x < n; x++) {
			if(col[x] || diag1[x+y] || diag2[x-y+n-1] || grid[y][x])
				continue; 
			
			col[x] = diag1[x+y] = diag2[x-y+n-1] = 1;
			search(y+1);
			col[x] = diag1[x+y] = diag2[x-y+n-1] = 0;
		}
		
	}
}

int main() {
	
	n  = 8; 
	
	counts = 0; 
	
	col.resize(n, 0);
	diag2.resize(2*n-1, 0);
	diag1.resize(2*n-1, 0);
	
	grid.resize(n, vector<int>(n));
	
	char s; 
	for(vector<int> &row: grid) {
		for(int &e: row){
			cin >> s; 
			if(s == '.')
				e = 0; 
			else 
				e = 1; 
		}
	}
	
	
	search(0);
		
	cout << counts << endl; 
	
	
	
	
	
}

