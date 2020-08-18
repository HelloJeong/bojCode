#include <bit/stdc++.h>

// 회문 0, 유사회문 1, 그 외 2
// t개의 문자열

using namespace std;

int go(string str) {
	int length = str.length();
	int i;
	for(i = 0; i < length / 2; i++) {
		if(str[i] != str[length-i-1]) {	
			int j;
			for(j = i; j < length / 2; j++) {
				if(str[j+1] != str[length-j-1]) {
					break;
				}
			}
			if(j == length / 2) {
				return 1;
			}
			for(j = i; j < length / 2; j++) {
				if(str[j] != str[length-j-2]) {
					break;
				}
			}
			if(j == length / 2) {
				return 1;
			}
			else {
				return 2;
			}
		}
	}
	if(i == length / 2) {
		return 0;
	}
	else {
		return 2;
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--) {
		string str;
		cin >> str;
		cout << go(str) << '\n';
	}

	return 0;
}