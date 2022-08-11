#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
#define endl "\n"
#define fast_IO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define all(v) v.begin(), v.end()
#define readfile freopen("input.txt", "r", stdin)
#define debug(x) cout << #x << " is " << x << endl
const int N = 1e5 + 100;
vector <int> graph[N];
bool visited[N];
bool track[N];
int cs = 0, n, u, v;

ll bfs(int x) {
	visited[x] = 1;
	ll l = 1, v = 0;
	track[x] = 1;
	queue <int> q;
	q.push(x);
	while(!q.empty()) {
		int t = q.front();
		q.pop();
		// mx = max(l, v);
		for(int i = 0; i < graph[t].size(); ++i) {
			int adj = graph[t][i];
			if(!visited[adj]) {
				visited[adj] = 1;
				q.push(adj);
				if(track[t]) {
					v++;
					track[adj] = 0;
				} else {
					l++;
					track[adj] = 1;
				}
			}
		}
	}
	ll mx = max(l, v);
	return mx;
}

void graphClear() {
	for(int i = 0; i < N; ++i) {
		graph[i].clear();
		// weight[i].clear();
	}
}

void mxSum() {
	ll ans = 0;
	for(int64_t i = 0; i < N; ++i) {
		if(!visited[i]) {
			if(!graph[i].empty()) {
				ans = ans + bfs(i);
			}
		}
	}

	cout << "Case " << ++cs << ": " << ans << endl;
}

int main() {
	fast_IO;
	int t;
	cin >> t;
	while(t--) {
		memset(visited, 0, sizeof(visited));
		memset(track, 0, sizeof(track));
		graphClear();
		cin >> n;
		for(int i = 0; i < n; ++i) {
			cin >> u >> v;
			graph[u].push_back(v);
			graph[v].push_back(u);
		}
		mxSum();

	}
}