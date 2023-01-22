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
ll A, B;
string S;

void _main(){
    cin >> N >> A >> B >> S;
    ll min = infl;
    rep(i,0,N){
        string S2(S);
        S2.append(S2.substr(0,i));
        S2.erase(0,i);
        int count = 0;
        rep(k,0,N/2){
            if(S2[k] != S2[N-k-1])count++;
        }
        ll sum = count*B + i * A;
        if(min > sum) min = sum;
    }
    cout << min << endl;
}
