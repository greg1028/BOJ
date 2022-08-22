#include <iostream>
using namespace std;

int main() {
    int arr[100001] = {0,};
    int sum[100001] = {0,};
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int N, K, max = -10000000;
    cin >> N >> K;

    for (int i = 1; i <= N; i++){
        cin >> arr[i];
        arr[i] += arr[i-1];

        if (K <= i ){
            sum[i] = arr[i] - arr[i-K];
            if (max < sum[i]) max = sum[i];
        }
    }

    cout << max;

    return 0;
}