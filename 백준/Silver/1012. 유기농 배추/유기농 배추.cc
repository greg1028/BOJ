#include <iostream>
#include <queue>
#define MAX 51
using namespace std;
int graph[MAX][MAX];
int x_dir[4] = {1, -1, 0, 0};
int y_dir[4] = {0, 0, 1, -1};
int M, N;

void BFS(int i, int j){
    queue<pair<int, int>> q;
    pair<int, int> loc;
    loc.first = i;
    loc.second = j;
    q.push(loc);
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int d = 0; d < 4; d++){
            int next_x = x + x_dir[d];
            int next_y = y + y_dir[d];
            if ( 0 <= next_x < M and 0 <= next_y < N ){
                if ( graph[next_x][next_y] == 1 ){
                    graph[next_x][next_y] = 0;
                    loc.first = next_x;
                    loc.second = next_y;
                    q.push(loc);
                }
            }
        }
    }
}

int main(){
    int T, K, x, y, cnt;
    cin >> T;
    for (int t = 0; t < T; t++){
        cnt = 0;
        cin >> M >> N >> K;

        //그래프 초기화
        for (int m = 0; m < M; m++){
            for (int n = 0; n < N; n++){
                graph[m][n] = 0;
            }
        }

        //입력
        for (int k = 0; k < K; k++){
            cin >> x >> y;
            graph[x][y] = 1;
        }

        //그래프
        for (int m = 0; m < M; m++){
            for (int n = 0; n < N; n++){
                if ( graph[m][n] == 1){
                    BFS(m, n);
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}