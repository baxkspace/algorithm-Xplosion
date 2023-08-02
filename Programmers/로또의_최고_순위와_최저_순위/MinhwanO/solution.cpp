#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int winCount = 0;
    int zeroCount = 0;
    for (int i = 0; i < 6; i++){
        if (find(win_nums.begin(), win_nums.end(), lottos[i]) != win_nums.end()){
            winCount++;
        }
        if (lottos[i] == 0)
            zeroCount++;
    }

    answer.push_back(winCount+zeroCount != 0 ? 7 - winCount - zeroCount : 6);
    answer.push_back(winCount != 0 ? 7 - winCount : 6);
    
    
    return answer;
}