/******************************************
* AUTHOR : kevin_007 *
******************************************/
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define N 100005
#define MOD 1000000007
#define dd double
#define rep(i, n) for(int i = 0; i < n; i++)


int solve(){

    int n,x = 0;

    cin >> n;

    int arr[n];

    rep(i,n) {
        cin >> arr[i];  x ^= arr[i];
    }

    if(x == 0) {
        cout << "YES\n";    return 0;
    }


        int c = 0, t = 0;

        for(int i=0;i<n;i++) {
            t ^= arr[i];

            if(t == x) {
                c++;    t = 0;
            }
        }

        if(c >= 3) cout << "YES\n"; 

    else cout << "NO\n";


    return 0;
}

int main() {
    #ifndef ONLINE_JUDGE   
    freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);    
    #endif 
    Speed_UP


    int t1;
    cin>>t1;

    while(t1--){
        solve();
    }

    //checktime();

    return 0;

}
