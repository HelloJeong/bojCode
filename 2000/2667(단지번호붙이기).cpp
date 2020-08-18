#include <iostream>
#include <algorithm>

using namespace std;

int map[30][30];
int d[30][30];
int n;
int dx[] = { 0, 0, 1, -1};
int dy[] = { 1, -1, 0, 0};
int ans[25*25];

void dfs(int x, int y, int cnt) {
	d[x][y] = cnt;
	for(int k = 0; k < 4; k++) {
		int nx = x + dx[k];
		int ny = y + dy[k];

		if (0 <= nx && nx < n && 0 <= ny && ny < n) {
			if (map[nx][ny] == 1 && d[nx][ny] == 0) {
        dfs(nx, ny, cnt);
      }
		}
	}
}

int main() {
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			scanf("%1d", &map[i][j]);
		}
	}

	int cnt = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(map[i][j] == 1 && d[i][j] == 0) {
				dfs(i, j, ++cnt);
			}
		}
	}

	printf("%d\n", cnt);
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			ans[d[i][j]]+=1;
		}
  }
  sort(ans+1, ans+cnt+1);
	for (int i=1; i<=cnt; i++) {
		printf("%d\n",ans[i]);
	}
	return 0;
}