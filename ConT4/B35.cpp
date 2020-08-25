#include <bits/stdc++.h>
#include <string.h>
#include <string>

#define pb push_back
#define FOR(i,n) for(i = 0; i < n; i++)
#define mp make_pair
#define fi first
#define se second
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

using namespace std;

typedef double ld;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> II;

const ld pi=2*acos(0);
const ll inf  = LLONG_MAX;
const ll ninf = LLONG_MIN;
const int oo = INT_MAX;
const int noo = INT_MIN;
const int limit = 1e5+5;
const int N = 1000000;

int n,k;

//void init(){
//	cin>>n>>k;
//	for(int i=1;i<=n;i++){
//		cin>>a[i];
//	}
//}

long long sol(long long a[], long long size) 
{ 
	long long maxall = INT_MIN, maxnow = 0; 

	for (long long i = 0; i < size; i++) 
	{ 
		maxnow = maxnow + a[i]; 
		if (maxall < maxnow) 
			maxall = maxnow; 

		if (maxnow < 0) 
			maxnow = 0; 
	} 
	if(maxall  < 0) return 0;
	else return maxall; 
} 

long long a[N];

int main() 
{ 
	int T;
	cin>>T;
	while(T--){
		long long t,n;
		for(int i = 0; i <= 100; i++) a[i] = 0;
		cin>>t;
		int dem = 0;
		for(long long i = 0; i < t; i++){
			cin>>a[i];
			if(a[i]<0) dem++;
		}
		if(dem == t){
			sort(a,a+t);
			cout<<a[t-1]<<endl;
		}
		else{
			long long max_sum = sol(a, t);
			cout << max_sum<<endl;
		}
	} 
	return 0; 
} 

// code by QT

