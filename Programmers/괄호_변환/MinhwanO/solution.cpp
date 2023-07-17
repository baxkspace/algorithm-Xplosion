#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<char> s;

string makeStr(string w){
    string u = "", v = "";
    int count1 = 0, count2 = 0;
    int tf = 1;
    
    if (w.length() == 0)
        return "";
    
    for (int i = 0; i < w.length(); i++){
        if (w[i] == '(')
            count1++;
        else
            count2++;
        if (count1 == count2){
            u.append(w, 0, i+1);
            v.append(w, i+1, w.length()-i);
            break;
        }
    }
    for (int i = 0; i < u.length(); i++){
        if (s.empty() && u[i] == ')'){
            tf = 0;
            break;
        }
        if (u[i] == '(')
            s.push_back('(');
        else
            s.pop_back();
    }
    if (!s.empty())
        tf = 0;
    switch (tf){
        case 1:
            return u + makeStr(v);
        case 0:
            string a = "";
            a += "(";
            a += makeStr(v);
            a += ")";
            u.erase(0, 1);
            u.erase(u.length()-1, 1);
            for (int i = 0; i < u.length(); i++){
                if (u[i] == '(')
                    u[i] = ')';
                else
                    u[i] = '(';
            }
            a += u;
            return a;
    }
}

string solution(string p) {
    string answer = "";
    answer = makeStr(p);
    return answer;
}