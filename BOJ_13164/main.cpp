#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	auto ps = vi(n);
	for (auto&& x : ps) {
		cin >> x;
	}

	auto df = vi(n - 1);
	for (auto i = 0; i < n - 1; ++i) {
		df[i] = ps[i + 1] - ps[i];
	}

	sort(df.begin(), df.end());

	auto ans = ll{ 0 };
	for (auto i = 0; i < n - k; ++i) {
		ans += df[i];
	}

	cout << ans;

	return 0;
}