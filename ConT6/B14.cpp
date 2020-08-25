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
const ll M = 1e9+7;

int f[1000005];

void Era(){
    f[1] = 0;
    for(int i = 2; i < 1000000; i++){
		f[i] = 1;
	}
	for(int i = 2; i < sqrt(1000000); i++){
		if( f[i] == 1){
			for (int j = i*i; j < 1000000; j = j+i ){
				f[j] = 0;
			}
		}
	}
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    Era();
    while(T--){
        int n, l=0, r=0;
        cin>>n;
        for(int i = 2; i < n; i++){
            if(f[i] == 1 && f[n-i] == 1){
                l = i;
                r = n-i;
                break;
            }
        }
        if(l == 0) cout<<"-1"<<endl;
        else cout<<min(l,r)<<" "<<max(l,r)<<endl;
   }
    return 0;
}
//Code by QT