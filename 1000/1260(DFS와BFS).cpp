#include <bits/stdc++.h>

using namespace std;

int n, m, v;
int arr[1001][1001];
bool visit[1001];

void dfs(int v) {
	visit[v] = true;
	cout << v << ' ';
	for(int i = 1; i <= n; i++) {
		if(arr[v][i] == 1 && visit[i] == false) {
			dfs(i);
		}
	}
}

void bfs(int v) {
	queue<int> q;
	visit[v] = true;
	q.push(v);
	while(!q.empty()) {
		int x = q.front(); q.pop();
		cout << x << ' ';
		for(int i = 1; i <= n; i++) {
			if(arr[x][i] == 1 && visit[i] == false) {
				q.push(i);
				visit[i] = true;
			}
		}
	}

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> n >> m >> v;

	for(int i = 1; i <= m; i++) {
		int a, b;
		cin >> a >> b;
		arr[a][b] = 1;
		arr[b][a] = 1;
	}

	dfs(v);
	cout << '\n';

	for(int i = 1; i <= n; i++) {
		visit[i] = false;
	}

	bfs(v);
	cout << '\n';

	return 0;
}