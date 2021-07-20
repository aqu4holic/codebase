// author: BlackWhite
#include <bits/stdc++.h>
using namespace std;



#define int long long
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define FORD(i, a, b) for (int i = a; i >= b; --i)
#define FORC(v, a) for(auto v : a)
mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
#define rand rd
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const int oo = INT_MAX;
const string yes = "YES";
const string no = "NO";
const ld PI = acos(-1.0);
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef pair<ii,ii> iv;
typedef vector <vector<int>> vdp;
#define all(x) x.begin(), x.end()
#define f first
#define s second
#define pb push_back
#define ins insert
#define el '\n'

#define Fast ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
#define TEN " "
#define Fio freopen (TEN".inp","r",stdin); freopen (TEN".out","w",stdout);
#define Ro freopen (TEN".inp","r",stdin);
#define Wo freopen (TEN".out","w",stdout);
#define clrscr system("cls");

const int NTEST = ;

ll Rand(ll l, ll h) {
    assert(l <= h);
    return l + rd() * 1LL * rd() % (h - l + 1);
}

signed main()
{
	Fast
	// Fio
	// Ro
	// Wo
	//
	// auto begin = std::chrono::high_resolution_clock::now();

	srand(time(NULL));

	for (int iTest = 1; iTest <= NTEST; iTest++){
		ofstream inp((TEN + ".inp")).c_str();
		// testgen code here

		inp.close();

		system((TEN + ".exe")).c_str();
		system((TEN + "_trau.exe")).c_str();

		/*
			viết 2 phần mềm, 1 phần mềm là thuật đúng, 1 phần mềm là thuật trâu
		*/

		if (system(("fc" + TEN + ".out" + TEN + ".ans")).c_str() != 0){
			cout << "Test " << iTest << ": WRONG!\n";
			continue;
		}

		cout << "Test " << iTest << ": CORRECT!\n";
	}
	

	// auto end = std::chrono::high_resolution_clock::now();
	// cout << setprecision(5) << fixed << "Execution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds" << endl;
	return 0;
}