#include<bits/stdc++.h>

using namespace std;
int kt[100][100];
vector< int > ke[100];
int maps[100][100];
int Max  = -1;
int n,m;
int tmp [103][103];
typedef pair<int,int> pa;
vector< pa > dinh;
void dfs(int u,int cnt)
{
	for(int v =0 ; v < n ; v++)
	{
		if(kt[u][v] == 1)
		{
			cnt++;
			Max = max(cnt,Max);
			kt[u][v] = 0;
			kt[v][u] = 0;
			
			dfs(v,cnt);
			cnt--;
			kt[u][v] = 1;
			kt[v][u] = 1;
		}
	}
}

void solve()
{
	scanf("%d%d",&n,&m);
	Max = 0;
	for(int i =0 ; i < n; i++)
	{
		for(int j = 0 ; j < n ; j++)
		{
			kt[i][j] = 0;
		}
	}
	dinh.clear();
	for(int i =0 ; i < m ;i++)
	{
		int u,v;
//		cin >> u >> v;
		scanf("%d%d",&u,&v);
		dinh.push_back(pa(u,v));
		kt[u][v] = 1;
		kt[v][u] = 1;
		tmp[u][v] = 1;
		tmp	[v][u] = 1;
	}
	for(int i = 0 ; i < n; i++)
	{
		dfs(i,0);
		for(int j = 0; j < m ; j++)
		{
			kt[dinh[j].first][dinh[j].second] = 1;
			kt[dinh[j].second][dinh[j].first] = 1;
		}
	}
	printf("%d\n",Max);

}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		solve();
	}
}

