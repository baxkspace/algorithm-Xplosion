#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int N, M, c;
    int one = 0, two = 0, ox1 = 0, count = 1, count2 = 1;
    int n1;
    int minus1 = 0;
    cin >> N;
    cin >> M;
    n1 = N;
    vector<int> channel(10, 0);
    vector<int> prev, prev2, prevn1, prevn2;

    for (int i = 0; i < M; i++){
        cin >> c;
        channel[c] = 1;
    }
    int i;
    for (i = 1; n1 % i < n1; i *= 10);
    if (i != 1)
        i /= 10;
    int k;
    for (int l = i; l >= 1;){
        if (ox1 == 0){
            for (k = n1/l - minus1; k >= 0 && channel[k] != 0; k--);
            if (n1/l - k != 0)
                ox1 = 1;
        }
        else
            for (k = 9; k >= 0 && channel[k] != 0; k--);

        if (k < 0){
            ox1 = 0;
            minus1++;
            if (prev.empty()){
                if (l == 1){
                    one = 100;
                    break;
                }
                else{
                    ox1 = 1;
                    l /= 10;
                    continue;
                }
            }
            one = prev.back();
            prev.pop_back();
            
            n1 = prevn1.back();
            prevn1.pop_back();
            
            l *= 10;
            continue;
        }
        if (k == 0 && prev.empty()){
            ox1 = 1;
        }
        minus1 = 0;
        prev.push_back(one);
        one *= 10;
        one += k;

        prevn1.push_back(n1);
        n1 -= (n1/l) * l;
        l /= 10;
    }
    ox1 = 0;
    n1 = N;
    minus1 = 0;
    int pl= 0;
    for (int l = i; l >= 1;){
        if (ox1 == 0){
            for (k = n1/l + minus1; k <= 9 && channel[k] != 0; k++);
            if (k - n1/l != 0)
                ox1 = 1;
        }
        else
            for (k = pl; k <= 9 && channel[k] != 0; k++);   
        pl = 0;

        if (k > 9){
            ox1 = 0;
            minus1++;
            if (prev2.empty()){
                if (l * 10 >= 1000000){
                    two = 100;
                    break;
                }
                else{
                    ox1 = 1;
                    l *= 10;
                    pl = 1;
                    continue;
                }
            }
            two = prev2.back();
            prev2.pop_back();
            
            n1 = prevn2.back();
            prevn2.pop_back();
            
            l *= 10;
            continue;
        }

        minus1 = 0;
        prev2.push_back(two);
        two *= 10;
        two += k;

        prevn2.push_back(n1);
        n1 -= (n1/l) * l;
        l /= 10;
    }

    if (two >= 1000000)
        two = 100;
    
    for (i = 10; one % i < one; i *= 10, count++);

    for (i = 10; two % i < two; i *= 10, count2++);
    // cout << one << ", " << count << "\n";
    // cout << two << ", " << count2 << "\n";
    // cout << N - one << "\n";
    // cout << two - N << "\n";

    cout << min(abs(N-100), min(count + abs(N - one), count2 + abs(two - N)));

    return 0;
}