#include <bits/stdc++.h>

using namespace std;

typedef struct Info {
    int idx;
    int score;
} Info;

bool compare(const Info &a, const Info &b) {
    if(a.score > b.score) {
        return true;
    }
    else {
        return false;
    }
}

bool num[9];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Info info[8];
    for(int i = 0; i < 8; i++) {
        int score;
        cin >> score;
        info[i].idx = i + 1;
        info[i].score = score;
    }

    sort(info, info + 8, compare);
    
    int sum = 0;
    for(int i = 0; i < 5; i++) {
         sum += info[i].score;
         num[info[i].idx] = true;
    }

    cout << sum << "\n";

    for(int i = 1; i <= 8; i++) {
        if(num[i]) {
            cout << i << " ";
        }
    }
    cout << "\n";

    return 0;
}
