#include <bits/stdc++.h>

using namespace std;

int main()
{
	int arr[100001] = { 0 };
	int n, m;
	int cnt;

	cin >> n;

	for(int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	cnt = 1;
	m = arr[n];
	for(int i = n-1; i > 0; i--) {
		if(m < arr[i]) {
			cnt++;
			m = arr[i];
		}
	}

	printf("%d\n", cnt);	
	return 0;
}