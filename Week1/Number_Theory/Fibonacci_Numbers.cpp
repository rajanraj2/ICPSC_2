// https://cses.fi/problemset/task/1722

#include <bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
#define w(x) int x; cin>>x; while(x--)
#define pb push_back

int mod = 1e9 + 7;

pair<int, int> fib(int n) {
    if (n == 0) return {0, 1};
    auto p = fib(n >> 1);
    int c = (p.first * (2 * p.second % mod - p.first + mod) % mod) % mod;
    int d = (p.first * p.first % mod + p.second * p.second % mod) % mod;
    if (n & 1) return {d, c + d};
    else return {c, d};
}


int32_t main() {
    fio;
    int n;
    cin >> n;

    auto ans = fib(n);
    cout << ans.first % mod<< "\n";

    return 0;
}