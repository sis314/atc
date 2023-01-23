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

int a,b;
string s;

void _main(){
    cin >> a >> b;
    s = to_string(a);
    string t = to_string(b);
    s += t;
    double c = stod(s);
    if(floor(sqrt(c))*floor(sqrt(c)) == (int)c && ceil(sqrt(c))*ceil(sqrt(c)) == (int)c){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
}
