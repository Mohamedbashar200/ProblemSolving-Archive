#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;
#define PI 3.1415926535897932384626433832795
#define ll long long
#define mem(a,b) memset(a,b,sizeof a)
#define oo 1e8
#define minn(a, b, c) min(min(a, b), c)
#define maxx(a, b, c) max(max(a, b), c)
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
	//freopen("interesting.in", "r", stdin);
#endif
}
//\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\//\/\/\/\/\/\/\/\/\/
int c, n, l;
int main() {
	file();
	string s[1001];
	while (scanf("%d%d%d", &n, &l, &c) != EOF) {
		for (int i = 0; i < n; i++) {
			cin >> s[i];
		}
		//el words fe el story bnfs el order :D mt3ml4 sort
		int ans = 1;
		for (int i = 0, cont = 0; i < n; ++i) {
			if (cont + s[i].length() + 1 <= c + 1)
				cont += s[i].length() + 1;
			else {
				cont = s[i].length() + 1;
				++ans;
			}
		}
		printf("%d\n", (ans + l - 1) / l);
	}
}
