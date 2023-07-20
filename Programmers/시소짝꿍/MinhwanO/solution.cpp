#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(vector<int> weights) {
    long long answer = 0;
    
    sort(weights.begin(), weights.end());
    
    for (int i = 0; i < weights.size(); i++){
        for (int j = i+1; j < weights.size(); j++){
            int l = weights[i];
            int m = weights[j];
            
            if (l == m){
                answer++;
                continue;
            }
            
            for (int k = 3, s = 2; k <= 4 && s <= 4;){
                if (l * k == m * s){
                    answer++;
                    break;
                }
                else if (l * k < m * s)
                    k++;
                else{
                    k++;
                    s++;
                }
            }
            
            
        }
    }
    
    return answer;
}