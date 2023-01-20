#include <iostream>
#define MAX 1001
int A[MAX];
int dp[MAX] = {0,};
using namespace std;

int main(){
    int N, max = 0;
    cin >> N;

    for (int i = 0; i < N; i++) cin >> A[i];

    for (int i = 0; i < N; i++){
        for (int j = 0; j < i; j++){
            if (A[j] < A[i]){
                if (dp[i] <= dp[j]){
                    dp[i] = dp[j] + 1;
                    if (max < dp[i]){
                        max = dp[i];
                    }
                }
            }
        }
    }
    cout << max + 1;

    return 0;
}