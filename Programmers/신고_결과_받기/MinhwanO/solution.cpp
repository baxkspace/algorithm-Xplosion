#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    
    int id_size = id_list.size();
    int from = 0;
    int to = 0;
    int mid = 0;
    
    vector<int> answer;
    answer.assign(id_size, 0);
    
    vector<int> c(id_size, 0);
    vector<vector<int>> count(id_size, vector<int>(id_size,0));
    
    for (int i = 0; i < report.size(); i++){
        
        for (int j = 0; j < id_size; j++){
            mid = report[i].find(" ");
            if (report[i].substr(0,mid) == id_list[j])
                from = j;
            else if (report[i].substr(mid+1) == id_list[j])
                to = j;
        }
        
        if (count[to][from] == 0){
            count[to][from] = 1;
            c[to]++;
        }
        
    }
    
    for (int i = 0; i < id_size; i++){
        if(c[i] >= k){
            for (int j = 0; j < id_size; j++){
                if (count[i][j] == 1){
                    answer[j]++;
                }
            }
        }
    }
    
    return answer;
}