#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

void push(int x);
int pop();
int size();
int empty();
int top();

vector<int> v;

int main(){
    int N;
    string s;
    cin >> N;
    cin.ignore();
    for (int i = 0; i < N; i++){
        string buffer;
        stringstream ss;
        vector<string> vec;
        getline(cin, s);
        ss.str(s);
        while(getline(ss, buffer, ' ')){
            vec.push_back(buffer);
        }

        if (vec.front().compare("push") == 0){
            push(stoi(vec.back()));
        }
        else if (vec.front().compare("pop") == 0){
            cout << pop() << endl;
        }
        else if (vec.front().compare("size") == 0){
            cout << size() << endl;
        }
        else if (vec.front().compare("empty") == 0){
            cout << empty() << endl;
        }
        else if (vec.front().compare("top") == 0){
            cout << top() << endl;
        }
    }
    return 0;
}

void push(int x){
    v.push_back(x);
}
int pop(){
    if (v.empty() == 1)
        return -1;
    int i = v.back();
    v.pop_back();
    return i;
}
int size(){
    return v.size();
}
int empty(){
    return v.empty();
}
int top(){
    if (v.empty() == 1)
        return -1;
    return v.back();
}