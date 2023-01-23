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

int A[9];
int Check[9] = {0};
int N;
int B;

void _main(){
    rep(i,0,9) cin >> A[i];
    cin >> N;
    rep(i,0,N){
        cin >> B;
        rep(j,0,9){
            if(A[j] == B) Check[j] = 1;
        }
    }

    bool ok = false;

    rep(i,0,3){
        if(Check[i]==Check[i+3]&&Check[i]==Check[i+6]&&Check[i]==1) ok = true;
    }
    rep(i,0,3){
        if(Check[i*3]==Check[i*3+1]&&Check[i*3]==Check[i*3+2]&&Check[i*3]==1) ok = true;
    }
    if(Check[0] == Check[4]&& Check[0] == Check[8]&& Check[0] == 1) ok = true;
    if(Check[2] == Check[4]&& Check[2] == Check[6]&& Check[2] == 1) ok = true;

    if(ok)cout << "Yes" << endl;
    else cout << "No" << endl;
}
