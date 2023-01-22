#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define fore(i,a) for(auto &i:a)
#define all(x) (x).begin(),(x).end()
using namespace std; void _main(); int main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
//-------------------------------------------------------------------------------------------------

int N;
string S;

void _main(){
    cin >> N;
    char ch[N];
    int list[1000] = {0};
    rep(i,0,N){
        cin >> ch[i];
    }
    hey:
    rep(i,0,N-1){
        if(ch[i]=='n' && ch[i+1]=='a'){
            list[i] = 1;
        }
    }
    rep(i,0,N){
        cout << ch[i];
        if(list[i] == 1)cout << "y";
    }
    cout << endl;
}