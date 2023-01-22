#include <iostream>
using namespace std;

class Vec{
    public:
        int x;
        int y;
        Vec(int xin, int yin){
            x = xin;
            y = yin;
        }
        void set(int xin, int yin){
            x = xin;
            y = yin;
        }
};

bool canMove(Vec vec1, Vec vec2, int count){
    int x = vec1.x - vec2.x;
    int y = vec1.y - vec2.y;
    if(x < 0){
        x *= -1;
    }
    if(y < 0){
        y *= -1;
    }
    if(x + y > count){
        return false;
    }else if (x + y == count){
        return true;
    }else{
        if(x + y - count % 2 == 0){
            return true;
        }else{
            return false;
        }
    }
}

int main(){
    int n;
    cin >> n;
    bool ok;
    int count = 0, lastCount = 0;
    int x, y;
    Vec vec1(0,0);
    Vec vec2(0,0);
    for(int i = 0; i < n; i++){
        cin >> count >> x >> y;
        vec2.set(x,y);
        ok = canMove(vec1, vec2, count-lastCount);
        lastCount = count;
        vec1.set(x,y);
        if(!ok){
            break;
        }
    }
    if(ok){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}