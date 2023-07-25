#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    string answer = "";
    
    for (int i = 0; i < new_id.length(); i++){
        new_id[i] = tolower(new_id[i]);

        if (!(new_id[i] >= 97 && new_id[i] <= 122) && !(new_id[i] >= 48 && new_id[i] <= 57) && new_id[i] != '-' && new_id[i] != '_' && new_id[i] != '.'){
            new_id.erase(new_id.begin() + i);
            i--;
        }
    }
    int tf = 0;

    for (int i = 0; i < new_id.length(); i++){
        if (new_id[i] == '.'){
            if (tf == 0)
                tf = 1;
            else{
                new_id.erase(new_id.begin() + i);
                i--;
            }
        }
        else{
            tf = 0;
        }
    }
   
    if (new_id[0] == '.')
        new_id.erase(new_id.begin());
    if (new_id[new_id.length()-1] == '.'){
        new_id.erase(new_id.end()-1);
    }
    
    if (new_id.length() == 0){
        new_id = "a";
    }
    else if (new_id.length() >= 16){
        new_id.erase(new_id.begin() + 15, new_id.end());
        while(new_id[new_id.length()-1] == '.'){
            new_id.erase(new_id.end()-1);
        }
    }
    for (; new_id.length() <= 2; ){
        new_id += new_id[new_id.length()-1];
    }
    answer = new_id;
    
    return answer;
}