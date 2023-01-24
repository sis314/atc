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

int K,N;

void _main(){
    cin >> K >> N;
    int A[K];
    int a1,a2 = 0,count = 0;
    int aone;
    int max = 0;
    rep(i,0,N){
        cin >> a1;
        if(i == 0) aone = a1;
        count += a1 - a2;
        int t = a1 - a2;
        if(t > max) max = t;
        a2 = a1;
    }
    if(K - a2 + aone > max)max = K -a2 + aone;
    count += K - a2;
    cout << count - max << endl;
}
