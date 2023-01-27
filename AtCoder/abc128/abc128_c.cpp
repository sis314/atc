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

int N, M;
vector<int> S[10];
int P[10];

void _main(){
    cin >> N >> M;
    rep(i,0,M){
        int k; cin >> k;
        rep(j,0,k){
            int s; cin >> s;
            S[i].push_back(s-1);
        }
    }
    rep(i,0,M) cin >> P[i];

    int ans = 0;

    rep(bit,0,1 << N){
        int ok = 0;
        rep(m,0,M){
            int cnt = 0;
            fore(s, S[m]) if (bit & (1 << s))cnt++;
            if(cnt % 2 == P[m])ok++;
        }
        if(ok == M) ans++;
    }
    cout << ans << endl;
}
