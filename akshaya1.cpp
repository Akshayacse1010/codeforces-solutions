#include<bits/stdc++.h>

using namespace std;
// using namespace __gnu_pbds;


typedef long long ll;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<string> vs;
typedef set<int> si;
typedef unordered_map<char, int> mci;
typedef pair<int, int> pii;

#define ull unsigned long long
#define ld long double
#define seea(a,x,y) for(int i=x;i<y;i++){cin>>a[i];}
#define seev(v,n) for(int i=0;i<n;i++){int x; cin>>x; v.push_back(x);}
#define sees(s,n) for(int i=0;i<n;i++){int x; cin>>x; s.insert(x);}
// #define f first
// #define s second
// #define endl '\n'
// #define sp <<" "<<
// #define pb push_back
// #define MOD 1000000007
// #define gcd(a,b) __gcd(a,b)
#define rep(i,a,b)  for(int i=a;i<b;i++)
// #define lcm(a,b) (a*(b/gcd(a,b)))
// #define all(a) (a).begin(),(a).end()
// #define rall(a) (a).rbegin(),(a).rend()
#define test ll tc; cin>>tc; while(tc--)

// #define printm(a) {for(auto u:a) cout<<u.f sp u.s<<endl;}
// #define printv(a) {for(auto u:a) cout<<u<<" "; cout<<endl;}
#define abid() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);


// ///**************************** C o n s t ****************************///
// const double eps = 1e-9;
// const int inf = 2000000000;

///************************ Template End Here ************************///
void init() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
}





int main() {
	init();

	test{
		ll x, y; cin >> x >> y;
		ll a, b; cin >> a >> b;
		ll sum = 0;
		// if (x == 0 && y == 0) {
		// 	cout << 0 << '\n';
		// 	return 1;
		// }
		if (2 * a < b) {
			sum += (x + y) * a;

		}
		else{
			if (y > x) {
				sum += (y - x) * a;
				sum += b * x;
			}
			else{
				swap(x, y);
				sum += (y - x) * a;
				sum += b * x;
			}
		}
		cout << sum << '\n';
	}

}


