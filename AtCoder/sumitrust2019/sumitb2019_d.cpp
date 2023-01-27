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
string S;

void _main(){
    int count = 0;
    cin >> N >> S;
    rep(i,0,10){
        rep(j,0,10){
            rep(k,0,10){
                rep(l,0,N-2) if(S[l] == '0'+i){
                    rep(m,l+1,N-1) if(S[m] == '0'+j){
                        rep(n,m+1,N) if(S[n] == '0'+k){
                            count++;
                            break;
                        }
                        break;
                    }
                    break;
                }
            }
        }
    }
    cout << count << endl;
}
