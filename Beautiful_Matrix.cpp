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

using namespace std;
typedef long long int ll;
#define endl "\n"
#define fast_IO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define all(v) v.begin(), v.end()
#define readfile freopen("input.txt", "r", stdin)
#define debug(x) cout << #x << " is " << x << endl
const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, 1, 0, -1};
const int N = 1e5+100;

void solve() {
	int arr[5][5];
	int x, y;
	for(int i = 0; i < 5; ++i) {
		for(int j = 0; j < 5; ++j) {
			cin >> arr[i][j];
			if(arr[i][j] == 1)
				x = i, y = j;
		}
	}
	cout << abs(2 - x) + abs(2 - y) << endl;

}

int main () {

    fast_IO;
    int t=1;
    // cin >> t;
    while(t--)
        solve();
    return 0;
}