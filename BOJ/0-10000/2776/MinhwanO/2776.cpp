#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    for (int i = 0; i < T; i++){
        int N, M;
        cin >> N;
        vector<int> v(N, 0);
        for (int j = 0; j < N; j++)
            cin >> v[j];
        sort(v.begin(), v.end());
        cin >> M;
        for (int j = 0; j < M; j++){
            int ans, a, b, m, find;
            cin >> find;
            ans = 0;
            a = 0;
            b = N-1;
            m = 0;
            while(a <= b){
                m = (a+b)/2;
                if (find == v[m]){
                    ans = 1;
                    break;
                }
                else if (find < v[m])
                    b = m-1;
                else
                    a = m+1;
            }
            cout << ans << "\n";
        }
    }
    return 0;
}