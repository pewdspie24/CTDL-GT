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

ll fibo[100];
// map <ll,ll> mymap;

void generate(){
    fibo[1] = 1;
    fibo[2] = 1;
    for(int i = 3; i <= 92; i++) fibo[i] = fibo[i-2]+fibo[i-1];
}
char sol(ll i, ll n){
    if (n==1) return 'A';
    if (n==2) return 'B';
    if (i>fibo[n-2]) return sol(i-fibo[n-2], n-1);
    return sol(i, n-2);
}
int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    generate();
    while(T--){
        ll n,i;
        cin>>n>>i;
        cout<<sol(i,n)<<endl;;
   }
    return 0;
}
//Code by QT