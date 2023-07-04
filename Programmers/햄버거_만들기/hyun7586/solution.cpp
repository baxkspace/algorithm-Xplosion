#include <string>
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    string line = "";
    for (auto item : ingredient)
    {
        line += to_string(item);
        int len = line.length();
        if (len >= 4)
        {
            int pos = line.find("1231", len - 4);
            if (pos != string::npos)
            {
                answer++;
                line.erase(pos, pos + 4);
            }
        }

    }

    return answer;
}