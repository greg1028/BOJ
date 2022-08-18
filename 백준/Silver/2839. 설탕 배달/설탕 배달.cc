#include <iostream>
using namespace std;

int main() {
    int N, x, y=0, remain, result = -1;
    cin>>N;

    x = N/5;

    if(x*5 == N)
        result = x;

    else{
        while (x != -1){
            remain = N - x*5;
            if(remain % 3 == 0){
                y = remain/3;
                result = x + y;
                break;
            }
            x--;
        }
    }

    cout<<result;

    return 0;
}
