#include <iostream>
using namespace std;

int main(){
    int A, B, cnt = 1;
    cin >> A >> B;
    while (A != B){
        cnt++;
        if (B % 10 == 1) B /= 10;

        else if (B % 2 == 0) B /= 2;

        else{
            cnt = -1;
            break;
        }
        if (B < A) {
            cnt = -1;
            break;
        }
    }
    cout << cnt;

    return 0;
}