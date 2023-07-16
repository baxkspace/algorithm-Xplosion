#include <iostream>

using namespace std;

int N, K;

int main(){
    cin >> N;
    cin >> K;
    
    int i = 1;
    int prev = 0;

    while(N >= 2){
        if (N >> i == 1){
            N -= (1<<i);
            prev = 1<<i;
            if (--K == 0)
                break;
            i = 0;
        }
        i++;
    }
    if (K == 0){
        if (N == 0){
            cout << 0;
        }
        else{
            cout << prev - N;
        }
    }
    else{
        cout << 0;
    }

    return 0;
}

// 13 2
// 1,1 1,1 1,1 1,1 1,1 1,1 1
// 2 2 2 2 2 2 1
// 4 4 4 1
// 8 4 1 -> 3개 더 필요함.

// 9 1
// 8 1 -> 7개 더 필요함

// 13 1
// 5

// 2 2 2 2 2 2 2
// 4 4 4 2
// 8 4 2