#include <iostream>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    bool isPrime[10001] ={0,};

    for (int i = 0; i < 10001; i++) isPrime[i] = 1;

    isPrime[0] = 0;
    isPrime[1] = 0;

    for (int i = 2; i < 10001; i++){
        if (isPrime[i]){
            for (int j = i+i; j < 10001; j += i) isPrime[j] = false;
        }
    }

    int T, n;
    cin >> T;
    for (int i = 0; i < T; i++){
        cin >> n;

        for (int j = n/2; j >= 2; j--){
            if (isPrime[j] && isPrime[n-j]){
                cout << j << " " << n-j << "\n";
                break;
            }
        }
    }

    return 0;
}

