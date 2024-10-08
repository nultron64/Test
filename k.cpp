#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define nl "\n"
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " " << x << nl;
#else
#define debug(x)
#endif
#define sp " "
#define rep(var, start, end) for(int var=start; var<end; var++)

typedef unsigned int uint;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vint;

void read_vint(vint& v, int size=0){if (size==0){size=v.size();} for(int i=0; i<size; i++){cin >> v[i];}}
void show_vint(vint& v, int size=0){if (size==0){size=v.size();} for(int i=0; i<size; i++){cout << v[i] << " ";}}

void solve() {
    int n, a; cin >> n >> a; 
    int kf; cin >> kf;
    int v[n][a];
    int temp;


    vint vi(n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<a; j++) {
            cin >> vi[i];
            cin >> v[i][j];
            cin >> temp;
        }
    }

    sort(v, v+n+a);

    for(int i=0; i<n; i++) {
        for(int j=0; j<a; j++) {
            cout << temp;
            cout << v[i][j] << " . ";
        }
        cout << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif

    solve();

    return 0;
}