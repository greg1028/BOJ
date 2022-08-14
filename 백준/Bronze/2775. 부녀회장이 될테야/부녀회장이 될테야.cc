#include <iostream>
using namespace std;

int apt[100000][15]  = {{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},};

int main() {

    int T, k, n; //k 층, n 호
    int sum = 0;
    cin >> T;
    for(int i = 0; i<T; i++){//test case
        cin>>k>>n;

        for(int j = 1; j<=k; j++){//층 채우기

            for(int l = 0; l<=n; l++){ //j 층의 l 호 채우기
                sum = 0;

                for(int m = 0; m<=l; m++){
                    sum += apt[j-1][m];
                }

                apt[j][l] = sum;
            }
        }
        cout<<apt[k][n]<<endl;
    }

    return 0;
}
