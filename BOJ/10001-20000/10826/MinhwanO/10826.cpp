#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string add(string A, string B){
    string C;
    int sum = 0;
    int up = 0;
    
    while(!A.empty() || !B.empty()){
        int Ai = A.empty() ? 0 : A.back()-'0';
        int Bi = B.empty() ? 0 : B.back()-'0';
        sum = Ai + Bi;

        if (up != 0){
            sum += up;
            up = 0;
        }
        if (sum >= 10){
            up = 1;
            sum -= 10;
        }
        C.push_back(sum+'0');

        if (!A.empty()) A.pop_back();
        if (!B.empty()) B.pop_back();
    }
    if (up != 0)
        C.push_back('1');
    reverse(C.begin(), C.end());
    return C;
}

string fibo(vector<string> &vec, int i){
    if (i < 2){
        vec[i] = i+'0';
        return vec[i];
    }
    else{
        if (!vec[i].empty())
            return vec[i];
        vec[i].append(add(fibo(vec, i-1), fibo(vec, i-2)));
        return vec[i];
    }
}

int main(){
    int N;
    vector<string> v(10000);

    cin >> N;
    fibo(v, N);
    cout << v[N];

    return 0;
}