#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    int count;
    double root;
    
    for (int i = 1; i <= number; i++){
        count = 0;
        root = sqrt(i);
        
        for (int j = 1; j <= root; j++){
            if (i % j == 0){
                if (j == root){
                    count++;
                }
                else
                    count+=2;
            }
            if (count > limit){
                count = power;
                break;
            }
        }
        answer += count;
    }
    
    return answer;
}

/*
1 -> 1
2 -> 2
3 -> 2
4 -> 3
5 -> 2
6 -> 4
7 -> 2
8 -> 4
9 -> 3
10 -> 4
*/