#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define bep(smth) (smth).begin(), (smth).end()
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

int main ()
{
    ONLY_CPP
    int n,x,y;
    cin>>n;
    int a[100]={0};
    for(int i = 0; i < n; i++){
        cin>>x>>y;
        a[x] = 1;
        a[y] = 1;
    }
    for(int i = 1; i < n; i++){
        for(int j = i+1; j <= n; j++){
            if(a[j]) cout<<i<<" "<<j<<endl;
        }
    }
    return 0;
}
//Code by QT