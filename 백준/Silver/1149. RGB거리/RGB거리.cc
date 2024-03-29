#include <iostream>
#define MAX 1001
int arr[MAX][3];
using namespace std;
int main(){
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) cin >> arr[i][0] >> arr[i][1] >> arr[i][2];

    for (int i = 1; i < N; i++){
        arr[i][0] += min( arr[i-1][1], arr[i-1][2] );
        arr[i][1] += min( arr[i-1][0], arr[i-1][2] );
        arr[i][2] += min( arr[i-1][0], arr[i-1][1] );
    }
    cout << min(min(arr[N-1][0], arr[N-1][1]), arr[N-1][2]);

    return 0;
}