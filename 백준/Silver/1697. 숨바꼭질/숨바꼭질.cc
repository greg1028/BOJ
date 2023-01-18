#include <iostream>
#include <queue>
using namespace std;
int loc[200000] = {0,};
int N, K;

bool isValid(int x){
    if (0 <= x and x < 200000){
        if (loc[x] == 0) return true;
    }
    return false;
}

void BFS(int N){
    queue<int> Q;
    Q.push(N);
    while (!Q.empty()){
        int x = Q.front();
        Q.pop();

        if (x == K) {
            cout << loc[K];
            break;
        }

        if (isValid(x + 1)){
            Q.push(x + 1);
            loc[x + 1] = loc[x] + 1;
        }

        if (isValid(x - 1)){
            Q.push(x - 1);
            loc[x - 1] = loc[x] + 1;
        }

        if (isValid(x * 2)){
            Q.push(x * 2);
            loc[x * 2] = loc[x] + 1;
        }
    }

}
int main(){
    cin >> N >> K;
    BFS(N);

    return 0;
}