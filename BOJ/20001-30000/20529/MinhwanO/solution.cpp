#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    int N, n;
    int min;
    vector<string> s;
    map<string, int> m;

    cin >> N;
    while(N--){
        min = 10000;
        int done = 0;
        cin >> n;
        s.erase(s.begin(), s.end());
        m.clear();
        m.insert(make_pair("ISTJ", 0));
        m.insert(make_pair("ISFJ", 0));
        m.insert(make_pair("INFJ", 0));
        m.insert(make_pair("INTJ", 0));
        m.insert(make_pair("ISTP", 0));
        m.insert(make_pair("ISFP", 0));
        m.insert(make_pair("INFP", 0));
        m.insert(make_pair("INTP", 0));
        m.insert(make_pair("ESTP", 0));
        m.insert(make_pair("ESFP", 0));
        m.insert(make_pair("ENFP", 0));
        m.insert(make_pair("ENTP", 0));
        m.insert(make_pair("ESTJ", 0));
        m.insert(make_pair("ESFJ", 0));
        m.insert(make_pair("ENFJ", 0));
        m.insert(make_pair("ENTJ", 0));
        //ISTJ, ISFJ, INFJ, INTJ, ISTP, ISFP, INFP, INTP, ESTP, ESFP, ENFP, ENTP, ESTJ, ESFJ, ENFJ, ENTJ
        while(n--){
            string a;
            cin >> a;
            m[a]++;
            if (m[a] == 3)
                done = 1;
            s.push_back(a);
        }
        if (done == 1){
            cout << 0 << "\n";
            continue;
        }
        for (int i = 0; i < s.size() - 2; i++){
            int s0 = 0;
            for (int j = i+1; j < s.size() -1; j++){
                int s1 = 0;
                if (s[i][0] != s[j][0])
                    s1++;
                if (s[i][1] != s[j][1])
                    s1++;
                if (s[i][2] != s[j][2])
                    s1++;
                if (s[i][3] != s[j][3])
                    s1++;
                for (int k = j+1; k < s.size(); k++){
                    int s2 = 0;
                    s0 = 0;
                    if (s[j][0] != s[k][0])
                        s2++;
                    if (s[j][1] != s[k][1])
                        s2++;
                    if (s[j][2] != s[k][2])
                        s2++;
                    if (s[j][3] != s[k][3])
                        s2++;
                    if (s[i][0] != s[k][0])
                        s0++;
                    if (s[i][1] != s[k][1])
                        s0++;
                    if (s[i][2] != s[k][2])
                        s0++;
                    if (s[i][3] != s[k][3])
                        s0++;

                    if (s0 + s1 + s2 < min)
                        min = s0 + s1 + s2;
                }
            }
        }
        cout << min << "\n";
    }

    return 0;
}
