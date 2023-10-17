#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

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

	int t1, e1, f1;
	cin >> t1 >> e1 >> f1;
	const auto tmax = 3 * t1 + 20 * e1 + 120 * f1;

	int t2, e2, f2;
	cin >> t2 >> e2 >> f2;
	const auto tmel = 3 * t2 + 20 * e2 + 120 * f2;

	if (tmel < tmax) {
		cout << "Max";
	}
	else if (tmax < tmel) {
		cout << "Mel";
	}
	else {
		cout << "Draw";
	}

	return 0;
}