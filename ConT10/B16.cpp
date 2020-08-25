#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
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
const int N = 1e5+5;
const ll M = 1e9+7;

struct edge{
    int u,v; 
    double w; 
};

int n;
vector < pair<double,double> > a;
vector <edge> b;

struct dsu{
    vector <int> parent,rank;
    int n;
    dsu(int m){
        n = m; parent.resize(n + 1); rank.assign(n + 1, 0);
    }
    void in(){
        for(int i = 0 ; i <= n ; i++){
            parent[i] = i;
        }
    }
    int findSet(int i){
        return(parent[i] == i) ? i : parent[i] = findSet(parent[i]);
    }
    bool unionSet(int i,int j){
        int x = findSet(i);
        int y = findSet(j);
        if (x == y) return false;
        if(rank[x] == rank[y]) rank[x]++;
        if(rank[x] > rank[y]) parent[y] = x;
        else parent[x] = y;
        return true;
    }
};

double range(pair<double,double> a, pair<double,double> b){
    double x = a.first - b.first;
    double y = a.second - b.second;
    return sqrt(x*x + y*y);
}

dsu DSU = dsu(0);

void solve(){
    for(int i = 0 ; i < n - 1 ; i ++){
        for(int j = i + 1 ; j < n ; j++){
            edge tmp;
            tmp.u = i + 1; tmp.v = j + 1;
            tmp.w = range(a[i],a[j]);
            b.push_back(tmp);
        }
    }
    auto cmp = [](edge a,edge b){return a.w < b.w;};
    sort(all(b),cmp);
    double res = 0;
    for(auto z : b){
        if(DSU.unionSet(z.u,z.v))
            res += z.w;
    }
    printf("%.6lf\n",res);
}

int main ()
{
    ONLY_CPP
    int T;
    cin>>T;
    while(T--){
        cin >> n;
        a.resize(n);
        DSU = dsu(n); DSU.in();b.clear();
        for(auto &x : a)
            cin >> x.first >> x.second;
        solve();
   }
    return 0;
}
//Code by QT