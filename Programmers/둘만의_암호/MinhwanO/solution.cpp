#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    char a;
    for (int i = 0; i < s.length(); i++){
        for (int j = 0, k = 1; j < index; j++, k++){
            a = s[i] + k;
            
            if (s[i]+k > 122){
                a = 96 + s[i]+k - 122;
                k = 0;
                s[i] = a;
            }

            if (skip.find(a) != string::npos){
                j--;
                continue;
            }
        }
        s[i] = a;
    }
    answer = s;
    return answer;
}