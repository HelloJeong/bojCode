#include <bits/stdc++.h>

using namespace std;

bool visit[10];
int pattern[9];
int n;

bool corner(int a) {
	if (a == 1 || a == 3 || a == 7 || a == 9) {
		return true;
	}
	return false;
}

bool check(int a, int b) {
	if(visit[b]) {
		return false;
	}
	visit[b] = true;

	if(a+b == 10 && visit[5] == false) {
		return false;
	}

	if(corner(a) && corner(b) && visit[(a+b) / 2] == false) {
		return false;
	}

	return true;

}

int main()
{
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &pattern[i]);
	}

	visit[pattern[0]] = true;
	for(int i = 0; i < n - 1; i++) {
		if(check(pattern[i] , pattern[i+1]) == false) {
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}