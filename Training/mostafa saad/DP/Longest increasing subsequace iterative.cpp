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
int n, arr[100001], num[100001];
int main() {
	file();
	int mx = -1;
	scanf("%d", &n);
	fill_n(num, n, 1);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	for (int i = 1; i < n; i++) {
		for(int j=0;j<1;j++){
		if (arr[j] < arr[i] && num[j] + 1 > num[i])
			num[i] = num[j] + 1;
		}

	}
	for (int i = 0; i < n; i++)
		if (mx < num[i])
			mx = num[i];
	printf("%d", mx);
}
