// author: BlackWhite
#include <bits/stdc++.h>
using namespace std;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

#define debugg(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define time__(d) \
	for ( \
		auto blockTime = make_pair(chrono::high_resolution_clock::now(), true); \
		blockTime.second; \
		debugg("%s: %d ms\n", d, (int)chrono::duration_cast<chrono::milliseconds>(chrono::high_resolution_clock::now() - blockTime.first).count()), blockTime.second = false \
	)

#define int long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
#define rand rd
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll oo = 1e18;
const ld eps = 1e-9;
const string yes = "YES";
const string no = "NO";
const ld PI = acos(-1.0);
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef pair<ii,ii> iv;
typedef vector <int> vi;
typedef vector <vi> vvi;
typedef vector <ii> vp;
#define all(x) begin(x), end(x)
#define sz(x) ((int) x.size())
#define clrscr system("cls");
#define ENDL printf("\n");
#define fi first
#define se second
#define pb push_back
#define pf push_front
#define ins insert
#define pob pop_back
#define pof pop_front
#define el '\n'

#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);
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
	freopen(NAME".out", "w", stdout);
}

const int NTEST = ;
const int N = ;

inline ll Rand(ll l, ll r) {
	if (l > r) swap(l, r);
	
	return l + rd() * 1LL * rd() % (r - l + 1);
}

signed main()
{
	Fast
	// io(0);

	srand(time(NULL));

	for (int iTest = 1; iTest <= NTEST; iTest++){
		ofstream inp((string(NAME) + ".inp").c_str());

		/*
			testgen code here
			
			ex:

			int n = Rand(1, N);

			inp << n << el;
		*/

		inp.close();

		system((string(NAME) + ".exe").c_str());
		system((string(NAME) + "_ans.exe").c_str());

		/*
			viết 2 phần mềm, 1 phần mềm là thuật đúng, 1 phần mềm là thuật trâu
		*/

		if (system(("fc " + string(NAME) + ".out " + string(NAME) + ".ans").c_str()) != 0){
			cout << "Test " << iTest << ": WRONG !\n";
		}
		else{
			cout << "Test " << iTest << ": CORRECT !\n";
		}
	}
	
	return 0;
}