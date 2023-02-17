// author: BlackWhite
// ◂Ⓘ▸
#include "bits/stdc++.h"
using namespace std;

#define int long long
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll oo = 1e18;
const ld eps = 1e-9;
const string yes = "YES";
const string no = "NO";
const ld PI = acos(-1.0);
typedef pair<int,int> ii;
typedef vector <int> vi;
typedef vector <ii> vp;
#define all(x) begin(x), end(x)
#define sz(x) ((int) x.size())
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define pf push_front
#define ins insert
#define pob pop_back
#define pof pop_front
#define el '\n'

#define NAME ""
inline void io(int x){
	if (!x){
		freopen(NAME".inp", "r", stdin);
		return;
	}
	if (x == 1){
		freopen(NAME".inp", "r", stdin);
		freopen(NAME".out", "w", stdout);
		return;
	}
	if (x == 2){
		freopen(NAME".inp", "r", stdin);
		freopen(NAME".ans", "w", stdout);
		return;
	}
	freopen(NAME".out", "w", stdout);
}



inline void solve(){

}

signed main(){
	cin.tie(nullptr) -> ios_base::sync_with_stdio(false);
	
	#ifdef BlackWhite
	// io(0);
	#endif

	int test_case = 1;
	// cin >> test_case;
	for (int tt = 1; tt <= test_case; tt++){
		// cout << "Case #" << tt << ": ";

		solve();
	}

	return 0;
}