#include <iostream>
using namespace std;

int main() {
    int arr[100001] = {0,};
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int N, M, a, b, sum = 0;
    cin >> N >> M;


    for (int i = 1; i <= N; i++){
        cin >> arr[i];
        arr[i] += arr[i-1];
    }

    for (int j = 0; j < M; j++){
        cin >> a >> b;
        cout << arr[b] - arr[a-1] << "\n";
    }

    return 0;
}
