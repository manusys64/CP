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
	int n;
	cin >> n;
	vector<int> v(n);

	for (int &i : v) {
		cin >> i;
	}

	print(*max_element(v.begin(), v.end()));
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

