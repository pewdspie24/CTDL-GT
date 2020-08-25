#include<bits/stdc++.h>

using namespace std;
int a[1000];
vector < int> ans;
vector < vector<int> > r;
map<vector<int > , int > check;
int n,k;
void init()
{
	scanf("%d%d",&n,&k);
	ans.clear();
	r.clear();
	check.clear();
	for(int i = 0 ; i< n; i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
}
void solve(int i,int res)
{
	if(res == 0)
	{
		{
			r.push_back(ans);
		}
		
	}
	else
	{
		for(int j = i; j < n ; j++)
		{
			if(res >= a[j])
			{
				ans.push_back(a[j]);
				res = res- a[j];
				solve(j+1,res);
				res+=a[j];
				ans.pop_back();
				
			}
		}
		
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		init();
		solve(0,k);
		if(r.size() == 0) printf("-1");
		else
		{
			sort(r.begin(),r.end());
			for(int i = 0 ; i < r.size();i++)
			{
				printf("[");
				for(int j = 0 ; j < r[i].size() ; j++)
				{
					printf("%d", r[i][j]);
					if(j!=r[i].size()-1) printf(" ");
					else printf("]");
				}
			}
		}
		printf("\n");
	}

}

