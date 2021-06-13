/******************************************
* AUTHOR : kevin_007 *
/ https://codeforces.com/contest/1526/problem/C2
******************************************/
#include <bits/stdc++.h>
using namespace std;
#define checktime() cout<<"\nTime Elapsed : "<<fixed<<float(clock()-clk)/CLOCKS_PER_SEC<<setprecision(5)<<endl
#define ll long long

int solve(){

    int n;

    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++) cin >> arr[i];

    multiset<ll> p1;    int ans = 0;    ll sum = 0;

    for(int i=0;i<n;i++) {
        sum += arr[i];
        ans++;

        p1.insert(arr[i]);

        while(sum < 0) {
            auto itr = p1.begin();  

            sum = sum - *itr;   ans--;
            p1.erase(itr);
        }

        // cout << sum << " " << ans << "\n";
    }

    cout << ans << "\n";

    return 0;
}

int main() {
    #ifndef ONLINE_JUDGE   
    freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);    
    #endif 
    Speed_UP


    int t = 1;
    // cin>>t;

    while(t--){
        solve();
    }

    //checktime();

    return 0;

}
