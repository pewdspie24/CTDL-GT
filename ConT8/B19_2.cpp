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

char a[50][50][50];
bool check[50][50][50]; 
int dx[] = {0,0,0,0,1,-1};
int dy[] = {0,0,1,-1,0,0};
int dz[] = {1,-1,0,0,0,0};
int w[50][50][50];
void BFS(pair<int, pair<int, int> >st, pair<int, pair<int, int> >ed)
{
	queue<pair<int, pair<int,int> > > q;
	
	while(q.size()!=0) q.pop();
	q.push(st);
	check[st.fi][st.se.fi][st.se.se] = false;
	bool flag = false;
	while(q.size() != 0){
		pair<int, pair<int, int> > u = q.front();
		q.pop();
		if(u == ed){
			flag = true;
			cout<<w[ed.fi][ed.se.fi][ed.se.se]<<endl;
			break;
			
		}
		int x1 = u.fi ;
		int y1 = u.se.fi;
		int z1 = u.se.se ;
		for(int i = 0; i < 6; i++){
			int xx = u.fi + dx[i];
			int yy = u.se.fi + dy[i];
			int zz = u.se.se + dz[i];
			if(check[xx][yy][zz] == true){
				check[xx][yy][zz] = false;
				w[xx][yy][zz] = w[x1][y1][z1]+1;
				q.push(mp(xx,mp(yy,zz)));
			}
		}	
	}
	if(flag == false) cout << -1 << endl;
}

void solve(int x, int y, int z){
	pair<int, pair<int, int> > st,ed;
	for(int i = 1; i <= x; i++)
	{
		for(int j = 1; j <= y; j++)
		{
			for(int k = 1; k <= z; k++)
			{
				cin >> a[i][j][k];
				if(a[i][j][k] == 'S') st = mp(i,mp(j,k));
				else if(a[i][j][k] == 'E') ed = mp(i,mp(j,k));
				else if(a[i][j][k] == '.') check[i][j][k] = true;
				else check[i][j][k] = false;
			}
		}
	}
	check[ed.fi][ed.se.fi][ed.se.se] = true;
	
	BFS(st,ed);
	
}

void init(int x, int y, int z){
    for(int i = 0; i <= x+1; i ++){
        for(int j = 0; j <= y+1; j++){
            for(int k = 0; k <= z+1; k++){
                check[i][j][k] = false;
                w[i][j][k] = 0;
            }
        }
    }
}

int main ()
{
    ONLY_CPP
    int T;
    cin>>T;
    while(T--){
        int x,y,z;
        cin>>x>>y>>z;
        init(x,y,z);
        solve(x,y,z);
   }
    return 0;
}
//Code by QT