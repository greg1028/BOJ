#include <iostream>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    bool isPrime[250000] ={0,};

    for (int i = 0; i < 250000; i++){
        isPrime[i] = 1;
    }

    isPrime[0] = 0;
    isPrime[1] = 0;

    for (int i = 2; i < 250000; i++){
        if (isPrime[i]){
            for (int j = i+i; j<250000; j += i){
                isPrime[j] = false;
            }
        }
    }


    int n, cnt = 0;
    cin >> n;

    while (n){
        for (int i = n+1; i <= 2*n; i++){
            if (isPrime[i]) cnt++;
        }

        cout << cnt << "\n";

        cnt = 0;

        cin>>n;
    }

    return 0;
}