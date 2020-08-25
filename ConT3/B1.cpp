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

int dem;
int n;

void sol(int k){
    if(n>=k){
        dem+=n/k;
        int tmp = n/k;
        n -= k*tmp;
    }
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        cin>>n;
        dem = 0;
        sol(1000);sol(500);sol(200);sol(100);sol(50);sol(20);sol(10);sol(5);sol(2);sol(1);
        cout<<dem<<endl;
   }
    return 0;
}
//Code by QT