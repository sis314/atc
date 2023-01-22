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

int N,P,Q,R,S;

int A[100];
int B[100];

void _main(){
    cin >> N >> P >> Q >> R >> S;
    
    int diff = R - P;
    int length = Q - P - 1;

    rep(n,0,N){
        cin >> A[n];
    }
    rep(i,0,P-1){
        B[i] = A[i];
    }
    rep(i,P-1,Q){
        B[i] = A[i+diff];
    }
    rep(i,Q,R-1){
        B[i] = A[i];
    }
    rep(i,R-1,S){
        B[i] = A[i-diff];
    }
    rep(i,S,N){
        B[i] = A[i];
    }
    rep(i,0,N){
        cout << B[i];
        if(i == N-1)cout << endl;
        else cout << " ";
    }
}