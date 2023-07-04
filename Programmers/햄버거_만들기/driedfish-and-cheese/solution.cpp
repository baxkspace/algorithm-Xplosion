#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    int i=0;
    vector<int> arr;
    while(i+3<ingredient.size()){
        if(ingredient[i]==1){
            if(ingredient[i+1]==2&&ingredient[i+2]==3&&ingredient[i+3]==1){
                answer++;
                ingredient.erase(ingredient.begin()+i,ingredient.begin()+i+4);
                if(arr.size() != 0){
                    i=arr.back();
                    arr.pop_back();
                }
                else
                    continue;
            }
            else{
                arr.push_back(i);
                i++;
            }
        }
        else{
            i++;
        }
    }
    return answer;
}