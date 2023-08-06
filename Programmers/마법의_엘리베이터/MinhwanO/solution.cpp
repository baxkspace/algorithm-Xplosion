#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int storey) {
    int answer = 0;
    int jarisu;
    int i = 10;
    
    for (jarisu = 1; storey % jarisu != storey; jarisu*=10);
    jarisu /= 10;
    
    for (; storey != 0;){
        if (storey%i < 10 - storey%i){
            answer += storey%i;
        }
        else if(storey % i == 5){
            if ((storey - (storey % i))%(i*10)  >= 50){
                answer += 10 - storey %i;
                storey += i;
            }
            else
                answer += storey %i;
        }
        else{
            answer += 10 - storey%i;
            storey += i;
        }
        storey /= 10;
    }
    
    
    return answer;
}