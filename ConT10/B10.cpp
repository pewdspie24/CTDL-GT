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

struct s {
	int dau, cuoi;
	int ts;
};
int parent[1000],n,m;

int bt(int i) {
	if (parent[i]==-1) return i;
    return bt(parent[i]);
}

void Union(int x, int y) {
    int xset = bt(x);
    int yset = bt(y);
    if(xset != yset) parent[xset] = yset;
}

bool cycle (vector<s> a) {
    memset(parent, -1, sizeof(parent));
    for (int i = 0; i < a.size(); i++) {
        int d = bt(a[i].dau);
        int c = bt(a[i].cuoi);
        if (d == c) return true;
        Union(d, c);
    }
    return false;
}

bool cmp (s a, s b) {
	return a.ts < b.ts;
}

void Kruskal(s dsc[]) {
	vector <s> tree;
	sort(dsc, dsc+m, cmp);
	int i, kq = dsc[0].ts;
	tree.push_back(dsc[0]);
	for (i = 1; i < m; i++) {
		tree.push_back(dsc[i]);
		if (!cycle(tree)) kq += dsc[i].ts;
		else{
			tree.pop_back();
			continue;
		}
		if (tree.size()>n-1) break;
	}
    cout <<kq<<endl;
}

int main ()
{
    ONLY_CPP
    int T;
    cin>>T;
    while(T--){
        cin>>n>>m;
        s dsc[m];
		for (int i=0; i<m; i++)
			cin>>dsc[i].dau>>dsc[i].cuoi>>dsc[i].ts;
		Kruskal(dsc);
   }
    return 0;
}
//Code by QT