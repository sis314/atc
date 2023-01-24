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
    int a[N];
    rep(i,0,N) cin >> a[i];
    int count = 0;
    int index = 1;
    bool ok  = false;
    rep(i,0,N){
        if(index == 2){
            ok = true;
            break;
        }
                count++;
        index = a[index-1];
    }
    if(ok == 1) cout << count << endl;
    if(ok == 0) cout << -1 << endl;
}
