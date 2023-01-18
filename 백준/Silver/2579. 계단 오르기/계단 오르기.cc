#include <iostream>
#define MAX 301
using namespace std;
int stair[MAX] = {0,};
int DP[MAX] = {0,};

int main(){
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) cin >> stair[i];

    if (N <= 2){
        int sum = 0;
        for (int i = 0; i < N; i++){
            sum += stair[i];
        }
        cout << sum;
    }
    else{
        for (int i = 0; i < N; i++){
            DP[i] = max(DP[i - 2] + stair[i], DP[i - 3] + stair[i] + stair[i - 1]);
        }
        cout << DP[N - 1];
    }

    return 0;
}