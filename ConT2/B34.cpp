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

int a[30],maxx=0;
int b[100][100];
int place(int pos) {
	int i;
	for (i=1;i<pos;i++) {
		if((a[i]==a[pos])||((abs(a[i]-a[pos])==abs(i-pos))))
		 return 0;
	}
	return 1;
}
void print_sol(int n) {
	int i,j;
	int tong=0;
//	printf("\n");
	for (i=1;i<=n;i++) {
		for (j=1;j<=n;j++) {
			if(a[i]==j)
			 tong+=b[i][j];
		}
	}
	if(tong > maxx) maxx=tong;
}
void queen(int n) {
	int k=1;
	a[k]=0;
	while(k!=0) {
		a[k]=a[k]+1;
		while((a[k]<=n)&&!place(k))
		 a[k]++;
		if(a[k]<=n) {
			if(k==n)
			 print_sol(n); else {
				k++;
				a[k]=0;
			}
		} else
		 k--;
	}
}

int main ()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int T;
	cin>>T;
	while(T--){
		int i,n,j;
		for(int i = 1; i <= 8; i++)
		for(int j = 1; j <= 8; j++) cin>>b[i][j];
		queen(8);
		printf("%d\n", maxx);
		maxx=0;
	}
    return 0;
}
//Code by QT