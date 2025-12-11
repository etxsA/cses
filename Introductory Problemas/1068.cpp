// Weird Algorithm
#include <iostream>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long x; 
    cin >> x; 

    while(x != 1) {
        cout << x << ' ';
        if(x & 1) {
            x *= 3; 
            x++;
        } else {
            x /= 2;
        }

    }

    cout << x << '\n';
}