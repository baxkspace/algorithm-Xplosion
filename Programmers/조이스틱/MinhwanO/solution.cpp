#include <iostream>
#include <string>
#include <vector>

using namespace std;

int moving(string a, string name, int start, vector<int> notA){
    int count = 0;
    
    while(true){
        if (a == name)
            break;
        if (name[start]-'A' < 'Z'-name[start]+1)
            count += name[start]-'A';
        else
            count += 'Z'-name[start]+1;
        a[start] = name[start];

        if (notA.empty())
            break;
        if (start < notA.front()){
            if (notA.front() - start < name.length() - notA.back() + start){
                count += notA.front() -start;
                start = notA.front();
                notA.erase(notA.begin());
            }
            else{
                count += name.length() - notA.back() + start;
                start = notA.back();
                notA.erase(notA.end()-1);
            }
        }
        else{
            if (start - notA.back() < notA.front() + name.length() - start){
                count += start - notA.back();
                start = notA.back();
                notA.erase(notA.end()-1);
            }
            else{
                count += notA.front() + name.length() - start;
                start = notA.front();
                notA.erase(notA.begin());
            }
        }
    }
    return count;
}

int solution(string name) {
    int answer = 0;
    int start = 0;
    int count = 0;
    int count2 = 0;
    
    vector<int> notA;
    vector<int> notA2;
    string a;

    
    for (int i = 0; i < name.length(); i++){
        if (i != 0 && name[i] != 'A'){
            notA.push_back(i);
            notA2.push_back(i);
        }
        a += 'A';
    }
    if (notA.empty())
        return answer;
    if (name[start]-'A' < 'Z'-name[start]+1){
        count += name[start]-'A';
        count2 += name[start]-'A';
    }
    else{
        count += 'Z'-name[start]+1;
        count2 += 'Z'-name[start]+1;
    }
    a[start] = name[start];
    
    
    
    start = notA.front();
    count += notA.front();
    notA.erase(notA.begin());
    count += moving(a, name, start, notA);
    
    start = notA2.back();
    count2 += name.length()-notA2.back();
    notA2.erase(notA2.end()-1);
    count2 += moving(a, name, start, notA2);
    
    answer = (count < count2) ? count : count2;
    
    return answer;
}