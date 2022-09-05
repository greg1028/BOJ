#include<iostream>
using namespace std;
int price[100000] = {0,};
int dis[100000] = {0,};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    long long min;
    long long sum = 0;
    cin >> N;

    for (int i = 0; i < N-1; i++){
        cin >> dis[i];
    }

    cin >> price[0];

    min = price[0];

    for (int i = 1; i < N; i++){

        if (price[i-1] < min) min = price[i-1];

        sum += min * dis[i-1];

        cin >> price[i];
    }

    cout << sum;

    return 0;
}