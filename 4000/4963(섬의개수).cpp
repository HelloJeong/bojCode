#include <bits/stdc++.h>

using namespace std;

int m[50][50];
int w, h;
int dx[] = { 0, 0, 1, -1, -1, -1, 1, 1 };
int dy[] = { 1, -1, 0, 0, -1, 1, -1, 1 };

void dfs(int x, int y) {
	m[x][y] = 0;
	for(int k = 0; k < 8; k++) {
		int nx = x + dx[k];
		int ny = y + dy[k];

		if (0 <= nx && nx < h && 0 <= ny && ny < w) {
			if (m[nx][ny] == 1) {
                dfs(nx, ny);
            }
		}
	}
}

int main() {

	while(1) {
		scanf("%d %d", &w, &h);
        
		if(w == 0 && h == 0) break;

		for(int i = 0; i < h; i++) {
			for(int j = 0; j < w; j++) {
				scanf("%d", &m[i][j]);
			}
		}

		int cnt = 0;
		for(int i = 0; i < h; i++) {
			for(int j = 0; j < w; j++) {
				if(m[i][j] == 1) {
                    cnt++;
					dfs(i, j);
				}
			}
		}
		printf("%d\n", cnt);
	}

	return 0;
}