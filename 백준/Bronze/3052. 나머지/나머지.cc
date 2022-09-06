#include<iostream>
using namespace std;
int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int arr[42] = {0,};
    int input, sum = 0;
    for(int i = 0; i<10; i++){
        cin>>input;

        arr[input%42] = 1;
    }

    for(int i = 0; i<42; i++){
        sum = sum + arr[i];
    }

    cout<<sum;

    return 0;
}
