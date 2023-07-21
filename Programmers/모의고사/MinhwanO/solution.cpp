#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> first = {1,2,3,4,5};
    vector<int> second = {2,1,2,3,2,4,2,5};
    vector<int> third = {3,3,1,1,2,2,4,4,5,5};
    int count1 = 0, count2 = 0, count3 = 0;
    int maximum;
    
    for (int i = 0, j = 0; i < answers.size(); i++, j++){
        if (answers[i] == first[j])
            count1++;
        if (j+1 == first.size())
            j = -1;
    }
    for (int i = 0, j = 0; i < answers.size(); i++, j++){
        if (answers[i] == second[j])
            count2++;
        if (j+1 == second.size())
            j = -1;
    }
    for (int i = 0, j = 0; i < answers.size(); i++, j++){
        if (answers[i] == third[j])
            count3++;
        if (j+1 == third.size())
            j = -1;
    }
    maximum = max(max(count1, count2), count3);
    if (maximum == count1)
        answer.push_back(1);
    if (maximum == count2)
        answer.push_back(2);
    if (maximum == count3)
        answer.push_back(3);
    sort(answer.begin(), answer.end());
    
    return answer;
}