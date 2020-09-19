#include <bits/stdc++.h>

using namespace std;

int main() {
	deque<int> deq;
	int n, m, result = 0;
	scanf("%d %d", &n, &m);
	for(int i = 1; i <= n; i++)
		deq.push_back(i);

	for(int i = 0; i < m; i++) {
		int k;
		scanf("%d", &k);
		int left = 0, right = 0;

		while(deq[left] != k) left++;
		while(deq[deq.size() - right - 1] != k) right++;
		right++;

		if(left < right) {
			for(int j = 0; j < left; j++) {
				deq.push_back(deq.front());
				deq.pop_front();
			}
			
			result += left;
		}
		else {
			for(int j = 0; j < right; j++) {
				deq.push_front(deq.back());
				deq.pop_back();
			}
			
			result += right;
		}
		deq.pop_front();
	}
	printf("%d\n", result);

	return 0;
}