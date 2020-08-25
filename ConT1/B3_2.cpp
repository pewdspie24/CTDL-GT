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
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++) cin>>a[i];
        next_permutation(a,a+n);
        for(int i = 0; i < n; i++) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}
//Code by QT