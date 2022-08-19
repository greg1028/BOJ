#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int M, N;
    cin >> M >> N;
    bool isPrime = true;
    for (int i = M; i <= N; i++){
        if (i == 2) isPrime = true;
        
        else if (i == 1) isPrime = false;
        
        else if (i % 2 == 0) continue;

        else{
            for (int j = 2; j <= sqrt(i); j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        

        if (isPrime) cout << i << "\n";

        isPrime = true;

    }

    return 0;
}