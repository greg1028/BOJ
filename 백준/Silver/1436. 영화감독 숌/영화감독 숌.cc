#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0, num = 665, tmp;
    cin>>n;

    while(cnt<n){
        num++;
        tmp = num;
        while(tmp>1){
            if(tmp%1000 == 666){
                cnt++;
                break;
            }
            tmp /= 10;
        }
    }
    cout<<num;

    return 0;
}
