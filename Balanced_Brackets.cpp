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
#include <unordered_map>
//#include <iomanip>

using namespace std;
typedef long long int ll;
#define endl '\n'
#define fast_IO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define mem(x, n) memset(x, n, sizeof(x))
#define all(v) v.begin(), v.end()
#define readfile freopen("input.txt", "r", stdin)
#define debug(x) cout << #x << " is " << x << endl
const int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
const int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};
const int N = 1e5+100;


unordered_map <char, int> br = {{'(', -1}, {'{', -2}, {'[', -3}, {')', 1}, {'}', 2}, {']', 3}};

string isBalenced(string s) {
	stack <char> st;
	for(auto x : s) {
		if(br[x] < 0) {
			st.push(x);
		} else {
			if(st.empty()) return "NO";
			char top = st.top();
			st.pop();
			if(br[top] + br[x] != 0) return "NO";
		}
	}
	if(st.empty()) return "YES";
	return "NO";
}

void solve() {
    string s;
    cin >> s;
    cout << isBalenced(s) << endl;
}

int main () {

    fast_IO;
    int t = 1;
    cin >> t;
    while(t--)
        solve();
    return 0;
}