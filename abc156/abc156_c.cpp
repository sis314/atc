#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std; void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

//-------------------------------------------------------------------------------------------------

int N;

void _main(){
    cin >> N;
    int X[N];
    rep(i,0,N) cin >> X[i];

    ll min = infl;

    rep(P,1,100){
        ll sum = 0;
        fore(x, X){
            sum += (x - P)*(x - P);
        }
        if(sum < min) min = sum;
    }
    cout << min << endl;
}
