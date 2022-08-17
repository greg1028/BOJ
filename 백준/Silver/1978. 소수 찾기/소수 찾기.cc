#include <iostream>
using namespace std;

int main() {
    int N, num, cnt = 0, isPrime = 1;
    cin>>N;
    for(int i = 0; i<N; i++){
        cin>>num;

        for(int j = 2; j<num; j++){
            if(num%j == 0){
                isPrime = 0;
            }
        }

        if(num == 2){
            isPrime = 1;
        }

        if(num == 1)
            isPrime = 0;

        if(isPrime)
            cnt++;

        isPrime = 1;

    }
    cout<<cnt;

    return 0;
}