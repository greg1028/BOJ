#include <iostream>
using namespace std;

char arr[50][50];
char white_arr[8][8] = {
        'W','B','W','B','W','B','W','B',
        'B','W','B','W','B','W','B','W',
        'W','B','W','B','W','B','W','B',
        'B','W','B','W','B','W','B','W',
        'W','B','W','B','W','B','W','B',
        'B','W','B','W','B','W','B','W',
        'W','B','W','B','W','B','W','B',
        'B','W','B','W','B','W','B','W'
};

char black_arr[8][8] = {
        'B','W','B','W','B','W','B','W',
        'W','B','W','B','W','B','W','B',
        'B','W','B','W','B','W','B','W',
        'W','B','W','B','W','B','W','B',
        'B','W','B','W','B','W','B','W',
        'W','B','W','B','W','B','W','B',
        'B','W','B','W','B','W','B','W',
        'W','B','W','B','W','B','W','B'
};

int white_first(int x, int y){
    int result = 0;
    for(int i = 0; i<8; i++){
        for(int j = 0; j<8; j++){
            if(arr[x + i][y + j] != white_arr[i][j])
                result++;
        }
    }

    return result;
}

int black_first(int x, int y){
    int result = 0;
    for(int i = 0; i<8; i++){
        for(int j = 0; j<8; j++){
            if(arr[x + i][y + j] != black_arr[i][j])
                result++;
        }
    }

    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, result = 64;
    cin>>N>>M;
    for(int i = 0; i<N; i++)
        for(int j = 0; j<M; j++)
            cin>>arr[i][j];

    int white, black;
    for(int i = 0; i<= N - 8; i++){
        for(int j = 0; j<= M - 8; j++){
            white = white_first(i, j);
            black = black_first(i, j);

            if(white < black){
                if(white < result) result = white;
            }

            else{
                if(black < result) result = black;
            }
        }
    }
    cout<<result;

    return 0;
}