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

int a[limit];
int n;

int sol(){
    int left[limit];
    int right[limit];
    int maxx = 0;
    for(int i = 0; i < n; i++){
        left[i] = a[i];
        right[i] = a[i];
    }
    for(int i = 1; i < n; i++)
    for(int j = 0; j < i; j++)
    if(a[j] < a[i] && left[i] < left[j] + a[i]) left[i] = left[j] + a[i];
    for(int i = n-2; i >= 0; i--)
    for(int j = n-1; j > i; j--)
    if(a[j] < a[i] && right[i] < right[j] + a[i]) right[i] = right[j] + a[i];
    for(int i = 0; i < n; i++){
        maxx = max(maxx,(left[i]+right[i]-a[i]));
    }
    return maxx;
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        cin>>n;
        for(int i = 0; i < n; i++) cin>>a[i];
        cout<<sol()<<endl;
   }
    return 0;
}
//Code by QT