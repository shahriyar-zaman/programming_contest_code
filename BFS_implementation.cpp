#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
//#include <iomanip>

using namespace std;
typedef long long int ll;
#define endl '\n'
#define fast_IO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define mem(x, n) memset(x, n, sizeof(x))
#define all(v) v.begin(), v.end()
#define readfile freopen("input.txt", "r", stdin)
#define debug(x) cout << #x << " is " << x << endl

//Complexity of BFS --> O(V + E)
const int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
const int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};
const int N = 1e5+100;
vector <int> g[N];
int vis[N];
int level[N];

void bfs(int source) {
	queue <int> q;
	q.push(source);
	vis[source] = 1;
	while(!q.empty()) {
		int cur_v = q.front();
		cout << cur_v << " ";
		q.pop();
		for(int child: g[cur_v]) {
			if(!vis[child]) {
				q.push(child);
				vis[child] = 1;
				level[child] = level[cur_v] + 1;
			}
		}
	}
	cout << endl;
}

void solve() {
    int n;
    cin >> n;

    for(int i = 0; i < n - 1; ++i) {
    	int x, y;
    	cin >> x >> y;
    	g[x].push_back(y);
    	g[y].push_back(x);
    }

    bfs(1);

    for(int i = 1; i <= n; ++i) {
    	cout << i << " " << level[i] << endl;
    }
}

int main () {

    fast_IO;
    int t = 1;
    // cin >> t;
    while(t--)
        solve();
    return 0;
}