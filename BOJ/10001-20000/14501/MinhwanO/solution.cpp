#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct node{
    int time;
    int pay;
};

int main(){
    int n;

    vector<node> nds;
    vector<int> dp;
    cin >> n;
    dp.assign(n, 0);
    for (int i = 0; i < n; i++){
        node nd;
        cin >> nd.time;
        cin >> nd.pay;
        nds.push_back(nd);
    }

    for (int j = n-1; j >= 0; j--){
        if (nds[j].time <= n-j){
            if (j == n-1)
                dp[j] = nds[j].pay;
            else{
                if (nds[j].time == n-j){
                    dp[j] = max(dp[j+1], nds[j].pay);
                }
                else
                    dp[j] = max(dp[j+1], nds[j].pay + dp[j+nds[j].time]);
            }
        }
        else{
            if (j == n-1)
                dp[j] = 0;
            else
                dp[j] = dp[j+1];
        }
    }
    
    cout << dp[0] << "\n";

    return 0;
}