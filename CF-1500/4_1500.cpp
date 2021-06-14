/******************************************
* AUTHOR : kevin_007 *
* Link : https://codeforces.com/problemset/problem/1515/D
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

void swap(int *x,int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int solve(){

    int n,l,r,p,ans=0,k;

    cin >> n >> l >> r;

    map<int,int> left,right;

    rep(i,n) {

        cin >> p;

        if(l > 0) left[p]++;

        else {
           if(left.find(p) == left.end()) right[p]++;

           else {

                if(left[p] == 1)    left.erase(p);

                else left[p]--;
           }
        }
        l--;
    }

    l = 0, r = 0;

    for(auto itr : left) l += itr.second;

    for(auto itr : right) r += itr.second;

    // cout << l << r << " ";

    if(l == r) {
        cout << l << "\n";    return 0;
    }

    if(r > l) {
        swap(r,l);

        map<int,int> p1 = left;

        left = right;

        right = p1;
    }

    for(auto itr1 : left) {
        auto itr = itr1.second;

        k = l - r;

        itr = itr/2;

        int dp = min(itr*2,k);

        ans += dp/2;

        l = l - dp;
    }    

    // socks pair changed
    ans += (l - r)/2;

    // socks color changed
    ans += (l+r)/2;

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
