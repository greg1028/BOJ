#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<pair<int, int>> meeting;

    int N, srt, end, cnt = 0;
    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> srt >> end;
        meeting.push_back(make_pair(end, srt));
    }
    sort(meeting.begin(), meeting.end());
    
    end = 0;

    for (int i = 0; i < N; i++){
        if (end <= meeting[i].second){
            end = meeting[i].first;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}