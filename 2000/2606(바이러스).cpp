#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

vector<int> v[101];
int n, m;
bool visit[101];
int cnt;

int main() {
	scanf("%d %d", &n, &m);

	for(int i = 0; i < m; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		v[a].push_back(b);
		v[b].push_back(a);
	}

	queue<int> q;
	visit[1] = true;
	q.push(1);
	while(!q.empty()) {
		int x = q.front();
		q.pop();
		for(int i = 0; i < v[x].size(); i++) {
			int y = v[x][i];
			if(visit[y] == false) {
				visit[y] = true;
				q.push(y);
				cnt++;
			}
		}
	}

	printf("%d\n", cnt);
	
	return 0;
}