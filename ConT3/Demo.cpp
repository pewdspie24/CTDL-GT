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



int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    priority_queue< int,vector<int>,greater<int> > que; //hàng đợi ưu tiên - nối dây
    vector <II> sol;
    int a[100];
    int b[100];
    //nhập 2 mảng, sau đó duyệt
    for(int i = 0; i < n; i++){
        sol.pb(mp(a[i],b[i]));
    }
    sort(sol.begin(), sol.end());
    return 0;
}
//Code by QT