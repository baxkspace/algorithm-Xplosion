#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct direction {
    int x;
    int y;
};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N;
    cin >> N;
    vector<vector<int> > visited(N, vector<int>(N, 0));
    vector<vector<int> > w(N, vector<int>(N , 0));
    queue<direction> q;

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++)
            cin >> w[i][j];
    }

    direction cur;
    cur.x = 0; cur.y = 0;
    q.push(cur);
    
    while(!q.empty()){
        int count;
        direction temp;
        cur = q.front();
        q.pop();
        visited[cur.x][cur.y] = 1;
        count = w[cur.x][cur.y];

        if (cur.x+count < N){
            if (!visited[cur.x+count][cur.y]){
                temp.x = cur.x+count;
                temp.y = cur.y;
                q.push(temp);
            }
        }
        if (cur.y+count < N){
            if (!visited[cur.x][cur.y+count]){
                temp.x = cur.x;
                temp.y = cur.y+count;
                q.push(temp);
            }
        }
    }
    if (visited[N-1][N-1] == 1){
        cout << "HaruHaru" << "\n";
    }
    else
        cout << "Hing" << "\n";

    return 0;
}
