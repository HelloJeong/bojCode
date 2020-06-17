#include <bits/stdc++.h>

using namespace std;

int bingo[7][7] = { 0 };
int bingoCount = 0;

bool check(int x, int y) {
    int i;
    bool chk = false;
    if(x == y) { // 같다면 \ 방향
        for(i = 1; i <= 5; i++) {
            if(bingo[i][i] != -1) 
                break;
        }
        if(i == 6) {
            bingoCount++;
            chk = true;
        }
    }
    if(x + y == 6) { // 같다면 / 방향
        for(i = 1; i <= 5; i++) {
            if(bingo[i][6-i] != -1)
                break;
        }
        if(i == 6) {
            bingoCount++;
            chk = true;
        }
    }
    // 가로 방향 체크
    for(i = 1; i <= 5; i++) {
        if(bingo[x][i] != -1)
            break;
    }
    if(i == 6) {
        bingoCount++;
        chk = true;
    }
    // 세로 방향 체크
    for(i = 1; i <= 5; i++) {
        if(bingo[i][y] != -1)
            break;
    }
    if(i == 6) {
        bingoCount++;
        chk = true;
    }
    return chk;
}

bool find(int x) {
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 5; j++) {
            if(bingo[i][j] == x) {
                bingo[i][j] = -1;
                return check(i, j);
            }
        }
    }
    return false;
}

int main() {
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 5; j++) { 
            cin >> bingo[i][j];
        }
    }

    for(int i = 1; i <= 25; i++) {
        int x;
        cin >> x;
        bool chk = find(x);
        if(chk) {
            if(bingoCount >= 3) {
                cout << i << endl;
                break;
            }
        } 
    }

    return 0;
}
