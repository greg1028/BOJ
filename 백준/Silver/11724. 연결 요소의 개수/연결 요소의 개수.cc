#include <iostream>
#include <stack>
#define MAX 1001
using namespace std;
int N, M;
int graph[MAX][MAX] = {0,};
bool visited[MAX] = {false,};

void DFS(int i){
    stack<int> s;
    s.push(i);
    while (!s.empty()){
        int x = s.top(); s.pop();
        for (int n = 1; n <= N; n++){
            if (graph[x][n] == 1){
                if (!visited[n]){
                    visited[n] = true;
                    s.push(n);
                }
            }
        }
    }
}

int main(){
    int x, y, cnt = 0;
    cin >> N >> M;
    for (int i = 1; i <= M; i++){
        cin >> x >> y;
        graph[x][y] = 1;
        graph[y][x] = 1;
    }


    for (int i = 1; i <= N; i++){
        if (!visited[i]){
            DFS(i);
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}