#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
 
    ll n;
    cin >> n;
 
    ll xo=0;
    
    for(int i=1;i<=n-1;i++){
        ll x;
        cin >> x;
        xo=xo^x;
    }
    for(int i=1;i<=n;i++){
        xo=xo^i;
    }
    cout << xo << endl;
 
    return 0;
}
