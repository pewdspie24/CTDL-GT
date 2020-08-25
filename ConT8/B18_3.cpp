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

int h,c;

bool check(int i, int j) 
{ 
	return (i >= 0 && j >= 0 && i < h && j < c); 
} 

bool kc(II temp) 
{ 
	return (temp.fi == -1 && temp.se == -1); 
} 

bool checkall(int a[][500]) 
{ 
	for (int i=0; i<h; i++) 
	for (int j=0; j<c; j++) 
		if (a[i][j] == 1) 
			return true; 
	return false; 
} 

int sol(int a[][500]) 
{ 
	queue<II> q; 
	II temp; 
	int ans = 0; 

	for (int i=0; i<h; i++) 
	{ 
	for (int j=0; j<c; j++) 
	{ 
			if (a[i][j] == 2) 
			{ 
				temp.fi = i; 
				temp.se = j; 
				q.push(temp); 
			} 
		} 
	} 

	temp.fi = -1; 
	temp.se = -1; 
	q.push(temp); 

	while (!q.empty()) 
	{ 

		bool dpTLE = false; 

		while (!kc(q.front())) 
		{ 
			temp = q.front(); 

			if (check(temp.fi+1, temp.se) && a[temp.fi+1][temp.se] == 1) 
			{ 

				if (!dpTLE) ans++, dpTLE = true; 

				a[temp.fi+1][temp.se] = 2; 

				temp.fi++; 
				q.push(temp); 

				temp.fi--; 
			} 

			if (check(temp.fi-1, temp.se) && a[temp.fi-1][temp.se] == 1) { 
				if (!dpTLE) ans++, dpTLE = true; 
				a[temp.fi-1][temp.se] = 2; 
				temp.fi--; 
				q.push(temp); 
				temp.fi++; 
			} 

			if (check(temp.fi, temp.se+1) && a[temp.fi][temp.se+1] == 1) { 
				if (!dpTLE) ans++, dpTLE = true; 
				a[temp.fi][temp.se+1] = 2; 
				temp.se++; 
				q.push(temp);
				temp.se--; 
			} 

			if (check(temp.fi, temp.se-1) && a[temp.fi][temp.se-1] == 1) { 
				if (!dpTLE) ans++, dpTLE = true; 
				a[temp.fi][temp.se-1] = 2; 
				temp.se--; 
				q.push(temp);
			} 

			q.pop(); 
		} 

		q.pop(); 

		if (!q.empty()) { 
			temp.fi = -1; 
			temp.se = -1; 
			q.push(temp); 
		} 
 
	} 

	return (checkall(a))? -1: ans; 
} 

int main ()
{
    ONLY_CPP
    cin>>h>>c;
    int a[500][500];
    for(int i = 0; i < h; i++){
        for(int j = 0; j < c; j++){
            cin>>a[i][j];
        }
    }
    cout<<sol(a)<<endl;
    return 0;
}
//Code by QT