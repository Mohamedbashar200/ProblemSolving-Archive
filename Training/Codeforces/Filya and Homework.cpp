#include <bits/stdc++.h>
using namespace std;
/**************BASHAR*****************/
struct node {
	int u, v, c;
	node(int u, int v, int c) :
			u(u), v(v), c(c) {
	}
	bool operator <(const node &e) const {
		return c > e.c;
	}
};
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;
#define rep( i, n ) for (int i = 0; i < (n); i++)
#define scan(n) scanf("%d",&n)
#define mem(a,b) memset(a,b,sizeof(a))
#define ll long long
#define oo 1e9
int di[] = { 1, -1, 0, 0 };
int dj[] = { 0, 0, 1, -1 };
void file() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	//	freopen("out.txt", "w", stdout);
#else
	// online submission
	//freopen("interesting.in", "r", stdin);
#endif
}
/**************BASHAR*****************/
int x, cnt;
set<int> s;
long long arr[100001];
int main() {
	file();
	scan(x);
	rep(i,x)
	{
		scan(cnt);
		s.insert(cnt);
	}
	if (s.size() < 3) {
		printf("%s", "YES");
		return 0;
	} else if (s.size() == 3) {
		for (int i = 0; i < 3; i++) {
			arr[i] = *s.begin();
			s.erase(arr[i]);

		}
		if (2 * arr[1] == arr[0] + arr[2]) {
			printf("%s", "YES");
			return 0;
		}
	}
	printf("%s", "NO");
}
