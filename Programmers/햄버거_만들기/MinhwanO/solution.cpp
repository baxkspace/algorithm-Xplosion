#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    vector<int> stack;
    int answer = 0;
    int begin = 0;
    int end = 0;
     
    for (int i = 0; i < ingredient.size(); i++){
        if ((i + 3 < ingredient.size()) && ingredient[i] == 1 && ingredient[i+1] == 2 && ingredient[i+2] == 3 && ingredient[i+3] == 1){
            ingredient.erase(ingredient.begin()+i, ingredient.begin()+(i+4));
            answer++;
            if (stack.size() != 0){
                i = stack.back() - 1;
                stack.pop_back();
            }
            else
                i--;
        }
        else if (ingredient[i] == 1)
            stack.push_back(i);
    }
    return answer;
}