#include <iostream>
using namespace std; 

int modpow(long long x, long long n, long long m) {

    if(n==0) return 1%m; 
    long long u = modpow(x, n/2, m);

    u = (u*u) % m;
    
    if(n%2) u = (u*x) % m;
    return u;  
}

int main() {

    int a, b, c, t; 

    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> a >> b >> c;

        cout << modpow(a,modpow(b,c, 1e9 + 6), 1e9 + 7) << endl;
    }
    
    

}