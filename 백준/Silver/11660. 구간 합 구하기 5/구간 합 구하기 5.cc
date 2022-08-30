#include<iostream>
using namespace std;
int arr[1025][1025] = {0,};
int N, M, x1, x2, y1, y2;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M;

    for (int i = 1; i <= N; i++){
        for (int j = 1; j <= N; j++){
            if (i == 1 && j == 1){
                cin >> arr[i][j];
            }
            else if (i == 1){
                cin >> arr[i][j];
                arr[i][j] += arr[i][j-1];
            }
            else if (j == 1){
                cin >> arr[i][j];
                arr[i][j] += arr[i-1][j];
            }
            else{
                cin >> arr[i][j];
                arr[i][j] += arr[i-1][j] + arr[i][j-1] - arr[i-1][j-1];
            }
        }
    }

    for (int i = 0; i < M; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        cout << arr[x2][y2] - arr[x1-1][y2] - arr[x2][y1-1] + arr[x1-1][y1-1] << "\n";
    }

    return 0;
}