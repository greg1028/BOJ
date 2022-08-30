#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> arr;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, num, sum = 0;

    cin >> N;

    for (int i = 1; i <= N; i++){
        cin >> num;
        arr.push_back(num);
    }

    sort(arr.begin(), arr.end());

    num = N;
    for (int i = 0; i < N; i++){
        sum += arr[i]*num--;
    }

    cout << sum;

    return 0;
}