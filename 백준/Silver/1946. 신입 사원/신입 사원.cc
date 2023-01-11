#include <iostream>
#define MAX 100001
using namespace std;
int grade[MAX] = {0, };

int main(){
    int T, N, a, b, rank, cnt;
    cin >> T;
    for (int t = 0; t < T; t++){
        cin >> N;
        cnt = 1;
        for (int i = 1; i <= N; i++){
            cin >> a >> b;
            grade[a] = b;
        }
        rank = grade[1];
        for (int i = 2; i <= N; i++){
            if ( grade[i] < rank ){
                rank = grade[i];
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}