#include <bits/stdc++.h>

using namespace std;

char changeChar(int ch, bool charCase) {
    ch += 13;
    if(charCase) {
        if(ch > 'z') {
            ch -= 'z'-'a' + 1;
        }
    }
    else {
        if(ch > 'Z') {
            ch -= 'Z'-'A' + 1;
        }
    }
    return (char)ch;
}

string rot(string &str) {
    string cypher = "";
    int len = str.length();
    for(int i = 0; i < len; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            cypher += changeChar(str[i], true);
        }
        else if(str[i] >= 'A' && str[i] <= 'Z') {
            cypher += changeChar(str[i], false);
        }
        else {
            cypher += str[i];
        }
    }
    return cypher;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;

    getline(cin, str);
    
    cout << rot(str) << "\n";
    return 0;
}
