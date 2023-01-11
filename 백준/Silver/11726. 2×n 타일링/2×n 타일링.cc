#include <iostream>
#define MAX 1001
using namespace std;
long long tiles[MAX] = {0, 1, 2,};
int cnt = 2;

int main(){
    int n;
    cin >> n;

    while ( cnt < n ){
        cnt++;
        tiles[cnt] = (tiles[cnt - 1] + tiles[cnt - 2]) % 10007;
    }

    cout << tiles[n];

    return 0;
}