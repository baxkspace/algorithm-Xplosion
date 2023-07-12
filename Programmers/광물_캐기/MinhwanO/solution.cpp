#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct piros{
    int piroD = 0;
    int piroI = 0;
    int piroS = 0;
};

bool desc(piros a, piros b){
    return a.piroS > b.piroS;
}

int solution(vector<int> picks, vector<string> minerals) {
    int answer = 0;
    int piroD = 0, piroI = 0, piroS = 0;
    int vidx = 0;
    int cap = picks[0] + picks[1] + picks[2];
    int capCount = 0;
    vector<piros> v;

    
    for (int i = 0; i < minerals.size(); i++){
        if (minerals[i].compare("diamond") == 0){
            piroD += 1;
            piroI += 5;
            piroS += 25;
        }
        else if (minerals[i].compare("iron") == 0){
            piroD += 1;
            piroI += 1;
            piroS += 5;
        }
        else{
            piroD += 1;
            piroI += 1;
            piroS += 1;
        }
        if ((i % 5 == 4) && capCount < cap){
            capCount++;
            piros p;
            p.piroD = piroD;
            p.piroI = piroI;
            p.piroS = piroS;
            v.push_back(p);
            piroD = 0, piroI = 0, piroS = 0;
        }
    }
    if (capCount < cap){
        piros p;
        p.piroD = piroD;
        p.piroI = piroI;
        p.piroS = piroS;
        v.push_back(p);
    }
    
    sort(v.begin(), v.end(), desc);
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < picks[i]; j++){
            if (vidx >= v.size())
                break;
            if (i == 0){
                answer += v[vidx].piroD;
            }
            else if (i == 1){
                answer += v[vidx].piroI;
            }
            else{
                answer += v[vidx].piroS;
            }
            vidx++;
        }
    }
    
    return answer;
}