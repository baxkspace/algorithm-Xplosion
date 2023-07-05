#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer(id_list.size(), 0);
    string cmd1, cmd2;
    int a = id_list.size();
    vector<int> count(a);
    sort(report.begin(), report.end());
    report.erase(unique(report.begin(), report.end()), report.end());
    for (int i = 0; i < report.size(); i++) {
        cmd1 = report[i].substr(0, report[i].find(" "));
        cmd2 = report[i].substr(report[i].find(" ") + 1, report[i].length());
        auto it = find(id_list.begin(), id_list.end(), cmd2);
        if (it != id_list.end()) {
            count[distance(id_list.begin(), it)]++;
        }
    }
    for (int i = 0; i < report.size(); i++) {
        cmd1 = report[i].substr(0, report[i].find(" "));
        cmd2 = report[i].substr(report[i].find(" ") + 1, report[i].length());
        auto it_1 = find(id_list.begin(), id_list.end(), cmd1);
        auto it_2 = find(id_list.begin(), id_list.end(), cmd2);
        if (count[distance(id_list.begin(), it_2)]>=k) {
            answer[distance(id_list.begin(), it_1)]++;
        }
    }
    return answer;
}
