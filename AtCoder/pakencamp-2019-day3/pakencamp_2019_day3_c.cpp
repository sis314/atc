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

int N,M;

void _main(){
    ll max = 0;
    cin >> N >> M;
    int A[N][M];
    rep(i,0,N){
        rep(j,0,M) cin >> A[i][j];
    }
    rep(i,0,M-1){
        ll ma = 0;
        rep(j,i,M){
            ll count = 0;
            rep(k,0,N){
                if(A[k][i] > A[k][j]){
                    count = count + A[k][i];
                }else{
                    count = count + A[k][j];
                }
            }
            if(count > ma) ma = count;
        }
        if(ma > max) max = ma;
    }
    cout << max << endl;
}
