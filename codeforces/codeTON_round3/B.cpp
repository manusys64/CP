#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define sz(a) (int)a.size()

const long double PI = 3.141592653589793238;
const int MOD = 1e9+7;

#define dbg(ans) cout << '[' << ans << ']' << " ";

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
	string s;
	cin >> s;

	ll count_one = 0;

	for (char i : s) 
		if (i == '1')
			count_one++;

	ll count_zero = n - count_one;

	ll zmax = 0;
	ll omax = 0;
	ll cnt1 = 0;
	ll cnt2 = 0;
	for (ll i = 0; i < n; ++i) {
		if (s[i] == '1') {
			cnt1++;
		}
		else {
			omax = max(omax, cnt1);
			cnt1 = 0;
		}

		if (s[i] == '0') {
			cnt2++;
		}
		else {
			zmax = max(zmax, cnt2);
			cnt2 = 0;
		}
		if (i == n-1) {
			omax = max(omax, cnt1);
			zmax = max(zmax, cnt2);
		}
	}

	print(max(count_one * count_zero, max(omax * omax, zmax * zmax)));
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

