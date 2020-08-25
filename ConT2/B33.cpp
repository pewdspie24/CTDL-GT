#include <bits/stdc++.h>
#include <string.h>
#include <string>

#define pb push_back
#define FOR(i,n) for(i = 0; i < n; i++)
#define mp make_pair
#define fi first
#define se second

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

int n,sol=0,a[100],b[100],c[100];

void solve(int i){
	if (i==n+1) {
		sol++;
		return ;
	}
	for (int j=1; j<=n; j++){
		if (a[j]==0 && b[i-j+n]==0 && c[i+j]==0){
			a[j] = 1;
			b[i-j+n] = 1;
			c[i+j] =1;
			solve(i+1);
			a[j] = 0;
			b[i-j+n] = 0;
			c[i+j] =0;	
		}
	}
}

int main ()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    cin>>n;
    solve(1);
    cout<<sol;
    return 0;
}
//Code by QT