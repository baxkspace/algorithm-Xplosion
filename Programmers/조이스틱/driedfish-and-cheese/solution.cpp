#include <string>
#include <algorithm>

using namespace std;

int solution(string name) {
    int answer = 0;
    int n = name.length();
    int turn = n-1;
    for(int i=0;i<n;i++){
        if(name[i]-'A'<14)
            answer += name[i]-'A';
        else
            answer += 'Z'-name[i]+1;
        int index = i+1;
        while(index<n&&name[index] == 'A')
            index++;
        turn = min(turn, i + n -index + min(i,n-index));
    }
    answer += turn;
    return answer;
}