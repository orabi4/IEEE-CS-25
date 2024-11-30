#include <bits/stdc++.h>
#define dolaflash \
ios::sync_with_stdio(0); \
cin.tie(0); \
cout.tie(0);
#define ll long long
// cout << fixed << setprecision(6);
// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define MOD 998244353
// sort(arr2,arr2+n,greater<int>());
using namespace std;
// v.erase(unique(v.begin(), v.end()), v.end());  remove duplicate from sorted array
/*
sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.second == b.second) {
            return a.first < b.first;
        }
        return a.second < b.second;
    });
/*
bool prime(ll n) {   // check if the number is prime or not
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}*/

/*
bool pldrom(vector<char>& v) {
    for (int i = 0, j = v.size() - 1; i < j; i++, j--) {
        if (v[i] != v[j]) return false;
    }
    return true;
}
*/
/*
void primefacotrization(int n) {
    set<int> s;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            s.insert(i);
            if (i * i != n) s.insert(n / i);
        }
    }
    for (auto it : s) cout << it << " ";
}
*/
/*
void MaxSubArray() {
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (i > 0) {
            v[i] += v[i - 1];
        }
    }
    ll mine = LLONG_MAX;
    ll ans = LLONG_MIN;
    for (int i = 0; i < n; i++) {
        mine = min(v[i], mine);
        ans = max({ans, v[i], (v[i] - mine)});
    }
    cout << ans;
}
*/

void solve() {
    char n;
    cin>>n;
    string s1;
    cin>>s1;
    string s="qwertyuiopasdfghjkl;zxcvbnm,./";
    if(n=='R'){
        for(int i=0;i<s1.size();i++){
            cout<<s[s.find(s1[i])-1];
        }
    }
    else {
        for(int i=0;i<s1.size();i++){
            cout<<s[s.find(s1[i])+1];
        }

    }
}

int main() {
    dolaflash;
    int test_case = 1;
   // cin >> test_case;
    for (int TC = 1; TC <= test_case; TC++) {
        solve();
    }
    return 0;

}
