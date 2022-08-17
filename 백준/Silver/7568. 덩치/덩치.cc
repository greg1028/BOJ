#include <iostream>
using namespace std;

struct Size{
    int height;
    int weight;
};

int main() {
    int N, cnt = 1;
    Size arr[50];
    cin>>N;
    for(int i = 0; i<N; i ++){
        cin>>arr[i].height>>arr[i].weight;
    }
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            if(arr[i].height < arr[j].height && arr[i].weight < arr[j].weight)
                cnt++;
        }
        cout<<cnt<<" ";
        cnt = 1;
    }
    return 0;
}
