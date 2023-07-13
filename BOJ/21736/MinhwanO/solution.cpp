#include <iostream>
#include <vector>

using namespace std;
struct P{
    int x;
    int y;
};


vector<P> where;
vector<vector<char> > v;
vector<vector<int> > visited;

int N, M;
int counting = 0;

void bfs(int x, int y);

int main(){
    char a;

    cin >> N;
    cin >> M;

    v.assign(N, vector<char>(M, '\0'));
    visited.assign(N, vector<int>(M, 0));

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cin >> a;
            v[i][j] = a;
        }
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            if (v[i][j] == 'I'){
                P person;
                person.x = j;
                person.y = i;
                where.push_back(person);
                visited[i][j] = 1;
                break;
            }
        }
    }
    int x2 = where.front().x;
    int y2 = where.front().y;
    where.erase(where.begin());

    bfs(x2, y2);

    if (counting > 0)
        cout << counting;
    else
        cout << "TT";

    

    

    return 0;
}

void bfs(int x, int y){
    if (v[y][x] == 'P'){
        counting++;
    }
    if (x != 0 && v[y][x-1] != 'X' && !visited[y][x-1]){
        visited[y][x-1] = 1;
        P person;
        person.x = x-1;
        person.y = y;
        where.push_back(person);
    }
    if (x != M-1 && v[y][x+1] != 'X' && !visited[y][x+1]){
        visited[y][x+1] = 1;
        P person;
        person.x = x+1;
        person.y = y;
        where.push_back(person);
    }
    if (y != 0 && v[y-1][x] != 'X' && !visited[y-1][x]){
        visited[y-1][x] = 1;
        P person;
        person.x = x;
        person.y = y-1;
        where.push_back(person);
    }
    if (y != N-1 && v[y+1][x] != 'X' && !visited[y+1][x]){
        visited[y+1][x] = 1;
        P person;
        person.x = x;
        person.y = y+1;
        where.push_back(person);
    }
    if (!where.empty()){
        int x2 = where.front().x;
        int y2 = where.front().y;
        where.erase(where.begin());
        bfs(x2, y2);
    }

}