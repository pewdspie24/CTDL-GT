#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ONLY_CPP ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define QT NN

using namespace std;

typedef double ld;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> II;

const ld pi=2*acos(0);
const int im = INT_MAX;
const int in = INT_MIN;
const int limit = 1e5+5;
const ll M = 1e9+7;

int n,m,r1,c1,r2,c2;
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
char a[505][505];
int f[505][505];

bool move(){
    memset(f, -1, sizeof(f));
    queue< II > q;
    auto enqueue = [&](int i, int j, int e) {
        if (f[i][j] == -1) {
        f[i][j] = e;
        q.push({i, j});
        }
    };
    enqueue(r1, c1, 0);
    while (!q.empty()) {
        auto u = q.front(); q.pop();
        int r = u.first, c = u.second;
        if (f[r][c] > 3) return false;
        if (r == r2 && c == c2) return true;
        int e = f[r][c] + 1;
        for (int i = r; i <= n && a[i][c] != '*'; i++) enqueue(i, c, e);
        for (int i = r; i >= 1 && a[i][c] != '*'; i--) enqueue(i, c, e);
        for (int j = c; j <= m && a[r][j] != '*'; j++) enqueue(r, j, e);
        for (int j = c; j >= 1 && a[r][j] != '*'; j--) enqueue(r, j, e);
    }
    return false;
}

int main ()
{
    ONLY_CPP
    int T;
    cin>>T;
    while(T--){
        cin >> n >> m; 
        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= m ; j ++){
                cin >> a[i][j];
                if ( a[i][j] == 'S') r1 = i , c1 = j;
                if ( a[i][j] == 'T') r2 = i , c2 = j;
            }
        }
        if(move()) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
   }
    return 0;
}
//Code by QT