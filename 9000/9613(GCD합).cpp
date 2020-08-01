#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll gcd(ll a, ll b) {
	return b == 0 ? a : gcd(b, a % b);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;

	while(t--) {
		int n;
		ll a[101];
		ll s = 0;
		cin >> n;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for(int i = 0; i < n-1; i++) {
			for(int j = i+1; j < n; j++) {
				s += gcd(a[i], a[j]);
			}
		}
		cout << s << '\n';
	}

	return 0;
}