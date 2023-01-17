#include <iostream>
#include <queue>
#define MAX 1001
using namespace std;
int N, M, x, y, i, j;
int box[MAX][MAX] = {0,};
int x_dir[4] = {-1, 1, 0, 0};
int y_dir[4] = {0, 0, -1, 1};
queue<pair<int, int>> Q;

void BFS(){
    while (!Q.empty()){
        i = Q.front().first;
        j = Q.front().second;
        Q.pop();
        for (int d = 0; d < 4; d++){
            x = x_dir[d] + i;
            y = y_dir[d] + j;
            if ( 0 <= x and x < N and 0 <= y and y < M){
                if (box[x][y] == 0){
                    Q.push(make_pair(x, y));
                    box[x][y] = box[i][j] + 1;
                }
            }
        }
    }
}

int main(){
    int res = 0;
    cin >> M >> N;

    for (i = 0; i < N; i++){
        for (j = 0; j < M; j++){
            cin >> box[i][j];
            if (box[i][j] == 1){
                Q.push(make_pair(i, j));
            }
        }
    }
    BFS();
    res = box[i][j] - 1;

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++) {
            if (box[i][j] == 0){
                res = -1;
                break;
            }
        }
    }

    cout << res;

    return 0;
}