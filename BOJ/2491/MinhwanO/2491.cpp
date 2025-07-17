#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void func(vector<int> &v, vector<int> &v2, int N){
    int flag = 1;
    int count = 0;
    int largest = 1;
    for (int i = 0; i < N; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    for (int i = 0, j = 1; j < N; j++){
        if (v[j-1] < v[j]){
            if (flag == 0){
                i = j-1;
                flag = 1;
                if (count > 0)
                    i -= count;
            }
            count = 0;
        }
        else if (v[j-1] > v[j]){
            if (flag == 1){
                i = j-1;
                flag = 0;
                if (count > 0)
                    i -= count;
            }
            count = 0;
        }
        else if (v[j-1] == v[j])
            count++;
        v2[j] += j-i;
    }
    for (int i = 0; i < N; i++){
        largest = max(largest, v2[i]);
    }
    cout << largest;
}

int main(){
    int N;
    cin >> N;
    cin.ignore();
    vector<int> v;
    vector<int> v2(N, 1);
    
    func(v, v2, N);
    
    return 0;
}