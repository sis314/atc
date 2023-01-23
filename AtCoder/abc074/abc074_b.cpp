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

int N,K;

void _main(){
    cin >> N >> K;
    int min = inf;
    int x[N];
    fore(i, x) cin >> i;
    int count = 0;
    rep(i,0,N){
        int a = x[i]*2;
        int b = (K-x[i])*2;
        if(a>b) count+= b;
        else count += a;
    }
    cout << count << endl;
}
