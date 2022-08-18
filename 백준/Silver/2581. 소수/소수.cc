#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> prime;

    int M, N, sum = 0, min = -1, cnt = 0;
    bool isPrime = true;
    cin>>M>>N;

    for(int i = M; i<=N; i++){
        for(int j = 2; j<i; j++){
            if( i%j == 0 ){
                isPrime = false;
            }


            if(i == 2){
                isPrime = true;
            }

        }

        if(i == 0 || i == 1){
            isPrime = false;
        }

        if(isPrime){
            prime.push_back(i);
            if(min == -1) min = i;
            cnt++;
        }

        isPrime = true;

    }

    if(min == -1) cout<<-1;

    else{
        for(int i = 0; i<cnt; i++){
            sum += prime[i];
        }
        cout<<sum<<endl<<min;
    }


    return 0;
}
