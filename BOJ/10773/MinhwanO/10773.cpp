#include <iostream>
#include <vector>
using namespace std;

void func(vector<int> &vect, int i){
    if (i == 0 && !vect.empty())
        vect.pop_back();
    else {
        vect.push_back(i);
    }
}
int add(vector<int> &vect){
    int result = 0;
    while(!vect.empty()){
        result += vect.back();
        vect.pop_back();
    }
    return result;
}

int main(){
    int K, result;
    vector<int> v;
    cin >> K;
    cin.ignore();
    
    for (int i = 0; i < K; i++){
        int j;
        cin >> j;
        func(v, j);
    }
    result = add(v);
    cout << result;
    return 0;
}