#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string art;
    int sum = 0, tmp = 0, flag = 0;
    cin >> art;

    for (int i = 0; i <= art.length(); i++){
        if (!(art[i] == '+' || art[i] == '-')){
            if (i != art.length()){
                tmp += art[i] - 48;
                tmp *= 10;
            }
        }

        if (art[i] == '+' || art[i] == '-' || i == art.length()){
            tmp /= 10;

            if (!flag) sum += tmp;

            else sum -= tmp;

            if (art[i] == '-') flag = 1;

            tmp = 0;
        }

    }

    cout << sum << endl;

    return 0;
}