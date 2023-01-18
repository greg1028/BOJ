#include <iostream>
using namespace std;
string S;
int cnt = 1;

int main(){
    cin >> S;

    for (int i = 0; i < S.length() - 1; i++) if (S[i] != S[i + 1]) cnt++;
    
    cout << cnt/2;
    return 0;
}