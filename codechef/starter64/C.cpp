#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define sz(a) (int)a.size()

const long double PI = 3.141592653589793238;
const int MOD = 1e9+7;

#define debug(ans) cout << '[' << ans << ']' << " ";

void print(){
	cout << "\n";
}
template<typename T, typename...types>
void print(const T& first, const types&...args) {
	cout << first << " ";
	print(args...);
}

int _pow(int a, ll b){
	int ans = 1;
	while(b>0){
		if(b&1){
			ans = (ans * 1LL * a)%MOD;
		}
		a = (a*1LL*a)%MOD;
		b>>=1;
	}
	return ans;
}

int lcm(int a, int b){
	return (a*b)/__gcd(a, b);
}

int _log(int a, int b){
	return log2(a)/log2(b);
}

void solve(){
	ll n;
	cin >> n;
	vector<ll> v(n);
	for (ll &i : v) cin >> i;
	unordered_map<ll, ll> f;
	for (ll i : v){
		f[i]++;
	}
	ll mn = *min_element(v.begin(), v.end());
	ll gcd = v[0];
	for (ll i = 1; i < n; i++) {
		gcd = __gcd(gcd, v[i]);
	}
	if (mn == 1) {
		ll freq = f[1];
		print(n - freq);
	}
	else {
		if (gcd == 1){
			print(n);
		}
		else print(n - f[gcd]);
	}

}
int main() { 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t, i = 1;
	cin>> t;
 	while(t--) {
		//cout << "Case #" << i++ << ": ";
		solve();
	}

	return 0;
}

