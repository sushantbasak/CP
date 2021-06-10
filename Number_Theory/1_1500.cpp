/******************************************
* AUTHOR : kevin_007 *
/https://codeforces.com/problemset/problem/1536/C
******************************************/
#include <bits/stdc++.h>
using namespace std;

int gcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}

int solve(){

    int n, d = 0, k = 0, m;        string s;

    cin >> n >> s;

    map<pair<int,int>,int> p1;

    for(int i=0;i<n;i++) {
        
        s[i] == 'K' ? k++ : d++;

        m = gcd(k,d);   

        cout << ++p1[{k/m,d/m}] << " ";
    }

    cout << "\n";
    
    return 0;
}

int main() {
    #ifndef ONLINE_JUDGE   
    freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);    
    #endif 
    Speed_UP


    int t;
    cin>>t;

    while(t--){
        solve();
    }

    //checktime();

    return 0;

}
