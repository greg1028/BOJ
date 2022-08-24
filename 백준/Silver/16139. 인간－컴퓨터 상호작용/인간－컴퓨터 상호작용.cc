#include <iostream>
using namespace std;
int alpha[26][200002] = {0,};

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    string S;
    cin >> S;
    for (int i = 1; i <= S.length(); i++){
        alpha[S[i - 1] - 'a'][i]++;
        for (int j = 0; j < 26; j++){
            alpha[j][i] += alpha[j][i-1];
        }
    }

    int Q, L, R;
    char A;
    cin >> Q;
    for (int i = 0; i < Q; i++){
        cin >> A >> L >> R;
        cout << alpha[A - 'a'][R + 1] - alpha[A - 'a'][L] << "\n";
    }

    return 0;
}