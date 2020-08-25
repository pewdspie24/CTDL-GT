#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fi first
#define se second
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

int n,s,a[100],res=im;

void sol(int i, int s, int minn){
	if(s < 0) return;
	if(i == n && s == 0){
		if(minn < res ){
			res = minn;
			return;
		}
	}
	if(i == n) return;
	sol(i+1,s,minn); // thu tat ca cac to tien tung loai, quay lui
	sol(i+1,s-a[i],minn+1); // them 1 loai tien, quay lui
}

int main ()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	cin>>n>>s;
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	sol(0,s,0);
	if(res == im) res = -1;
	cout<<res;
	return 0;
}
//Code by QT