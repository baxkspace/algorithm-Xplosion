#include <iostream>
#include <vector>

using namespace std;

int n;
vector<vector<char> > origin;

void star(int n1, int n2, int m1, int m2){
    if (n1 < 1 || n2 > n || m1 < 1 || m2 > n || n1 > n2 || m1 > m2){
        return;
    }

    int range1 = (n2-n1+1)/3;
    int range2 = (m2-m1+1)/3;

    int n1temp = n1 % ((n2-n1+1)*3);
    int m1temp = m1 % ((m2-m1+1)*3);

    if (n1temp == (n2-n1+2) && m1temp == (m2-m1+2)){
        for (int i = n1; i <= n2; i++){
            for (int j = m1; j <= m2; j++){
                origin[i-1][j-1] = ' ';
            }
        }
        return;
    }

    star(n1, n1+range1-1, m1, m1+range1-1);
    star(n1+range1, n1+range1*2-1, m1, m1+range1-1);
    star(n1+range1*2, n1+range1*3-1, m1, m1+range1-1);
    star(n1, n1+range1-1, m1+range1, m1+range1*2-1);
    star(n1+range1, n1+range1*2-1, m1+range1, m1+range1*2-1);
    star(n1+range1*2, n1+range1*3-1, m1+range1, m1+range1*2-1);
    star(n1, n1+range1-1, m1+range1*2, m1+range1*3-1);
    star(n1+range1, n1+range1*2-1, m1+range1*2, m1+range1*3-1);
    star(n1+range1*2, n1+range1*3-1, m1+range1*2, m1+range1*3-1);
}

int main(){
    cin >> n;
    origin.assign(n, vector<char>(n,'*'));
    star(1, n, 1, n);
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout << origin[i][j];
        cout << '\n';
    }
    return 0;
}

