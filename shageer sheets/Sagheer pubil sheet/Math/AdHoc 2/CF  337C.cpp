#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<pi> vpi;
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define mem(a,b) memset(a,b,sizeof a)
#define sz(v) ((int)((v).size()))
#define minn(a, b, c) min(min(a, b), c)
#define maxx(a, b, c) max(max(a,	 b), c)
int dx[] = { 1, 1, 0, -1, -1, -1, 0, 1 };
int dy[] = { 0, 1, 1, 1, 0, -1, -1, -1 };
int di[] = { 1, -1, 0, 0 };
int dj[] = { 0, 0, 1, -1 };
void file() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
#else
	// online submission
	//freopen("sets.in", "r", stdin);
#endif
}
//\/\/\/\/\/\/\/\/\/\/\/\/\/\//\/\/\/\//\/\/\/\/\/\/\/\/\/\/
const ll MOD = 1000000009;
long long n, m, k, x, ans;

long long POW(long long a, long long b) {
	long long res = 1;
	while (b) {
		if (b & 1)
			res = (res * a) % MOD;
		b >>= 1;
		a = (a * a) % MOD;
	}
	return res;
}
int main() {
	file();
	scanf("%lld%lld%lld", &n, &m, &k);
	x = max(0LL, m - (n - n % k) / k * (k - 1) - n % k);
	ans = POW(2, x + 1);
	ans -= 2;
	ans = (ans * k) % MOD;
	ans += m - x * k;
	ans %= MOD;
	ans = (ans + MOD) % MOD;
	printf("%lld\n", ans);

	return 0;
}
