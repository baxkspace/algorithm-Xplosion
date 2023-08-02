#include <iostream>
#include <string>
#include <vector>

using namespace std;
vector<vector<int> > s;
int num = 1;
int total;

void re(int x, int y, int n){
    if (n == 1){
        s[x][y] = num;
        return;
    }
    else if (n < 1)
        return;
    for (int i = 0; i < n; i++){
        s[x++][y] = num++;
    }
    x--;
    n--;
    for (int i = 0; i < n; i++){
        s[x][++y] = num++;
    }
    n--;
    for (int i = 0; i < n; i++){
        s[--x][--y] = num++;
    }
    re(x+1, y, n-1);
}

vector<int> solution(int n) {
    vector<int> answer;
    s.assign(n, vector<int>(n, 0));
    re(0, 0, n);
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            answer.push_back(s[i][j]);
        }
    }
    
    return answer;
}

// 1
// 2 9
// 3 10 8
// 4 5 6 7