#include <iostream>
#include <vector>

using namespace std;
vector<vector<int> > dp;

int main(){
    string a, b;
    cin >> a;
    cin >> b;
    
    dp.assign(a.size()+1, vector<int>(b.size()+1, 0));
    
    for (int i = 1; i <= a.size(); i++){
        for (int j = 1; j <= b.size(); j++){
            if (a[i-1] == b[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
            else{
                if (dp[i-1][j] > dp[i][j-1])
                    dp[i][j] = dp[i-1][j];
                else
                    dp[i][j] = dp[i][j-1];
            }
        }
    }

    cout << dp[a.size()][b.size()];


    return 0;
}

//CAPCAK
//ACAYKP