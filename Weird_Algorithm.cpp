#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
 
    ll n;
    cin >> n;
    while(n!=1){
        cout << n << " ";
        if(n%2==0){
            n=n/2;
        }
        else if(n%2!=0){
            n=(n*3)+1;
        }
    }
    cout << n << endl;
 
    return 0;
}
