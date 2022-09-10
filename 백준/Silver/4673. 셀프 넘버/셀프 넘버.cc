#include <iostream>
using namespace std;
int arr[10000] = {0,};

void d(){
    int a,b,c,d,sum; //1,2,3,4 번째 자리의 수, sum 은 합
    for(int i = 1; i<10000; i++){
        a = 0; b = 0; c = 0; d = 0;
        d = i%10;
        c = (i%100)/10;
        b = (i%1000)/100;
        a = (i%10000)/1000;
        sum = i + a + b + c + d;
        arr[sum] = 1;
    }
}

int main(){
    d();
    for(int i=1; i<10000; i++)
        if(arr[i] == 0)
            cout<<i<<endl;
    return 0;
}