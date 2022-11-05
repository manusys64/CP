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

	int arr[n];

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	if (n == 2) {
		if (arr[0] < arr[1]) {
			print("Bob");
			return;
		}
		else if (arr[0] == arr[1]) {
			print("Bob");
			return;
		}
		else {
			print("Alice");
			return;
		}
	}
	
	if (arr[0] == 0) {
		print("Bob");
		return;
	}
	else {
		if (*min_element(arr, arr + n) == 0) {
			print("Alice");
			return;
		}
		arr[0]--;
	}

	sort(arr + 1, arr + n);

	int fst = arr[1];
	int sec = min(arr[0], arr[2]);
	int moves;

	if (fst > sec) {
		print("Bob");
	}
	else {
		print("Alice");
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

