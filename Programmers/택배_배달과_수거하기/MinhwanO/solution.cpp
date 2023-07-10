#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long solution(int cap, int n, vector<int> deliveries, vector<int> pickups){
    long long answer = 0;
    long long count = 0;
    int dn = n-1, pn = n-1;
    int dmax = 0, pmax = 0;
    
    while(!deliveries.empty() || !pickups.empty()){
        
        count = 0;
        
        while(1){
            if (dn < 0)
                break;
            int dv = deliveries[dn];
            if (dv != 0){
                if (dmax == 0)
                    dmax = dn+1;
                if (count + dv > cap){
                    deliveries[dn] -= cap - count;
                    break;
                }
                count += dv;
            }
            dn--;
        }
        deliveries.erase(deliveries.begin() + dn+1, deliveries.end());
        
        count = 0;
        
        while(1){
            if (pn < 0)
                break;
            int pu = pickups[pn];
            if (pu != 0){
                if (pmax == 0)
                    pmax = pn+1;
                if (count + pu > cap){
                    pickups[pn] -= (cap - count);
                    break;
                }
                count += pu;
            }
            pn--;
        }
        pickups.erase(pickups.begin() + pn + 1, pickups.end());
        
        answer += (dmax < pmax) ? pmax*2 : dmax*2;
        dmax = 0, pmax = 0;
    }
    
    return answer;
}
