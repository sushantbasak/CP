/******************************************
* AUTHOR : kevin_007 *
* Hidden Leaf Jujutsu
******************************************/
#include <bits/stdc++.h>
using namespace std;
#define Speed_UP  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
clock_t clk=clock();
#define checktime() cout<<"\nTime Elapsed : "<<fixed<<float(clock()-clk)/CLOCKS_PER_SEC<<setprecision(5)<<endl
#define LL long long
#define N 100005
#define MOD 1000000007
#define dd double
#define rep(i, n) for(int i = 0; i < n; i++)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep1(i,b) for(int i=1;i<=b;i++)
#define pb push_back
#define mp make_pair
#define sz(x) ((int)(x).size())
#define F first
#define S second

int solve(){

    int n, l, r, p, ans = 0;

    cin >> n >> l >> r;

    multiset<int> left,right;
    

    rep(i,n) {
        cin >> p;
        
        if(l) { left.insert(p);  l--;    }

        else {
            if(left.find(p) == left.end()) right.insert(p);

            else left.erase(left.find(p));
        }
    }

    for(auto itr : left) {

        l = left.count(itr);

        if(l  > 1) {
            ans += l / 2;

            left.erase(itr);

            if(l%2) left.insert(itr);
        }
    }

    for(auto itr : right) {

        r = right.count(itr);

        if(r  > 1) {
            ans += r / 2;

            right.erase(itr);

            if(r%2) right.insert(itr);
        }
    }

    l = left.size();    r = right.size();

    ans += abs( l - r) / 2;

    ans += (l + r) / 2;

    cout << ans << "\n";

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
