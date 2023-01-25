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

string S;

void _main(){
    cin >> S;
    int max = 0;
    int N = S.length();
    rep(i,0,N){
        int cnt = 0;
        rep(j,i,N){
            if(S[j] == 'A' || S[j] == 'C' || S[j] == 'G' || S[j] == 'T'){
                cnt++;
            }else{
                break;
            }
        }
        if(cnt > max) max = cnt;
    }
    cout << max << endl;
}
