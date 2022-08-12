#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string word;
    int cnt=0;
    while(cin>>word)
        cnt++;
    cout<<cnt;
    return 0;
}