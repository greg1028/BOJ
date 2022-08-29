#include<iostream>
using namespace std;

int N, M, x;
long long cnt[1001];
long long sum, ans;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    for (int i = 0; i < N; i++){
        cin >> x;
        sum += x;
       // cout << sum << " ";
        cnt[sum % M]++;
    }

//    cout << "\n";
//
//    for (int i = 0; i < N; i++){
//        cout << cnt[i] << " ";
//    }
//    cout << "\n";

    for (int i = 0; i <M; i++){ //조합 n개중 두개 선택

        //    n! / (n-2)! * 2! == n * (n-1) / 2 * 1

        ans += cnt[i] * (cnt[i] - 1) / 2;
    }

    cout << cnt[0] + ans;

    return 0;
}