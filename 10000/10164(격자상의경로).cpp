#include <cstdio>
#include <memory.h>

using namespace std;

int dp[16][16];
int n, m, k;
int r, c;
int result;

int main() {

	scanf("%d %d %d", &n, &m, &k);

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			dp[i][j] = 1;
		}
	}

	for(int i = 2; i <= n; i++) {
		for(int j = 2; j <= m; j++) {
			dp[i][j] = dp[i-1][j] + dp[i][j-1];
		}
	}

	if(k == 0) {
		printf("%d\n", dp[n][m]);
	}
	else {
		r = (k-1) / m + 1;
		c = (k-1) % m + 1;
		result = dp[r][c] * dp[n-r+1][m-c+1];

		printf("%d\n", result);
	}
	
	return 0;
}