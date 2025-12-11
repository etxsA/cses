//Static Range Sum Queries

#include <iostream>
#include <vector>
using namespace std; 


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, q;
    cin >> n >> q;

    vector<long long> arr(n+1);
    arr[0] = 0;

    int x = 0; 
    for(int i = 1; i <= n; i++) {
        cin >> x; 
        arr[i] = arr[i-1] + x; 
    }

    int a, b; 
    for(int i = 0; i < q; i++) {
        cin >> a >> b; 
        cout << arr[b] - arr[a-1] << "\n";
    }

    return 0;


}