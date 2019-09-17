#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main() {
 
    ll n; cin >> n;
    if(n==1){cout << 1 << endl;}
    else if(n<=3){
        cout << "NO SOLUTION";
    }
    else {
        for(ll i=n;i>=1;i--){
            if(i%2!=0){
                cout << i << " ";
            }
        }
        for(ll i=n;i>=1;i--){
            if(i%2==0){
                cout << i << " ";
            }
        }
    }
