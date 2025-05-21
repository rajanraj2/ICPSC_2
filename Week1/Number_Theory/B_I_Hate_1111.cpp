#include <bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define vi vector<int>
#define vs vector<string>
#define ivec(arr) for (int i = 0; i < arr.size(); i++) cin >> arr[i];
#define w(x) int x; cin>>x; while(x--)
#define pb push_back


bool can[1100];

void solve2() {
    for (int a = 0; a * 11 <= 1099; a++) {
        for (int b = 0; a * 11 + b * 111 <= 1099; b++) {
            can[a * 11 + b * 111] = true;
        }
    }

    int x;
    cin >> x;
    if (x > 1099 || can[x]) cout << "YES\n";
    else cout << "NO\n";

    return;
}

void solve() {
    int x;
    cin >> x;
    string result = "NO";
    
    for (int i = 0; i <= 10; i++) {
        if (x - 111 * i >= 0 && (x - 111 * i) % 11 == 0) {
            result = "YES";
            break;
        }
    }
    cout << result << "\n";

    return;
}

int32_t main() {
    fio;
    w(t) {
        solve();
        // solve2();
    }    
    return 0;
}