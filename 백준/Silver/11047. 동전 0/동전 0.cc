#include<iostream>
using namespace std;

int arr[10] = {0,};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, K, sum = 0;

    cin >> N >> K;

    for (int i = N-1; i >= 0; i--){
        cin >> arr[i];
    }

    for (int i = 0; i< N; i++){
        if (K % arr[i] != K){
            sum += K / arr[i];
            K %= arr[i];
        }
    }
    cout << sum;

    return 0;
}