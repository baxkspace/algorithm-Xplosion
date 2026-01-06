#include <iostream>
#include <vector>

using namespace std;

struct node{
    int x;
    int y;
    int d;
};

int N, M;

vector<vector<int> > map;
vector<vector<int> > dist;
vector<vector<int> > visited;
vector<node> q;

void bfs(node v){
    dist[v.y][v.x] = v.d;

    if (v.x != 0 && !visited[v.y][v.x-1] && map[v.y][v.x-1] != 0){
        node n;
        n.x = v.x-1;
        n.y = v.y;
        n.d = v.d+1;
        visited[n.y][n.x] = 1;
        q.push_back(n);
    }
    if (v.x != M-1 && !visited[v.y][v.x+1] && map[v.y][v.x+1] != 0){
        node n;
        n.x = v.x+1;
        n.y = v.y;
        n.d = v.d+1;
        visited[n.y][n.x] = 1;
        q.push_back(n);
    }
    if (v.y != 0 && !visited[v.y-1][v.x] && map[v.y-1][v.x] != 0){
        node n;
        n.x = v.x;
        n.y = v.y-1;
        n.d = v.d+1;
        visited[n.y][n.x] = 1;
        q.push_back(n);
    }
    if (v.y != N-1 && !visited[v.y+1][v.x] && map[v.y+1][v.x] != 0){
        node n;
        n.x = v.x;
        n.y = v.y+1;
        n.d = v.d+1;
        visited[n.y][n.x] = 1;
        q.push_back(n);
    }

    if (!q.empty()){
        node k;
        k = q.front();
        q.erase(q.begin());
        bfs(k);
    }
}

int main(){
    cin >> N;
    cin >> M;
    map.assign(N, vector<int>(M, 0));
    dist.assign(N, vector<int>(M, -1));
    visited.assign(N, vector<int>(M, 0));
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cin >> map[i][j];
            if (map[i][j] == 0){
                dist[i][j] = 0;
            }
            if (map[i][j] == 2){
                node v;
                v.x = j;
                v.y = i;
                v.d = 0;
                visited[i][j] = 1;
                dist[i][j] = 0;
                q.push_back(v);
            }
        }
    }    
    
    node k;
    k = q.front();
    q.erase(q.begin());
    bfs(k);

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++)
            cout << dist[i][j] << " ";
        cout << "\n";
    }

    return 0;
}