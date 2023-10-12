// author: blackwhite
#include "bits/stdc++.h"
using namespace std;

#define int long long
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll oo = 1e18;
const ld eps = 1e-9;
typedef pair<int,int> ii;
typedef vector <int> vi;
typedef vector <ii> vp;
#define all(x) begin(x), end(x)
#define sz(x) ((int) (x).size())
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define pf push_front
#define ins insert
#define pob pop_back
#define pof pop_front
#define el '\n'

inline void io(char *u, string filename){
	int x = u[0] - '0';
	if (x < 0 || x > 9){
		return;
	}
	if (!x){
		freopen((filename + ".inp").c_str(), "r", stdin);
		return;
	}
	if (x == 1){
		freopen((filename + ".inp").c_str(), "r", stdin);
		freopen((filename + ".out").c_str(), "w", stdout);
		return;
	}
	if (x == 2){
		freopen((filename + ".inp").c_str(), "r", stdin);
		freopen((filename + ".ans").c_str(), "w", stdout);
		return;
	}
	freopen((filename + ".out").c_str(), "w", stdout);
}



inline void solve(){

}

signed main(signed argv, char *args[]){
	cin.tie(nullptr) -> sync_with_stdio(false);

	#ifdef blackwhite
	assert(argv > 1);
	io(args[1], "test");
	#endif

	int test_case = 1;
	// cin >> test_case;
	for (int tt = 1; tt <= test_case; tt++){
		// cout << "Case #" << tt << ": ";

		solve();
	}

	return 0;
}