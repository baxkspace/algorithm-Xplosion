#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    int x1 = 50, y1 = 50;
    int x2 = 0, y2 = 0;
    for(int i = 0; i < wallpaper.size(); i++){
        for (int j = 0; j < wallpaper[0].length(); j++){
            if (wallpaper[i][j] == '#'){
                if (i < x1)
                    x1 = i;
                if (j < y1)
                    y1 = j;
                if (i+1 > x2)
                    x2 = i+1;
                if (j+1 > y2)
                    y2 = j+1;
            }
        }
    }
    answer.push_back(x1);
    answer.push_back(y1);
    answer.push_back(x2);
    answer.push_back(y2);
    return answer;
}