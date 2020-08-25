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

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int n, tmp;
        cin>>n;
        int s0=0, s1=0, s2=0;
        for(int i = 0; i < n; i++){
            cin>>tmp;
            if(tmp == 0) s0++;
            else if(tmp == 1) s1++;
            else s2++;
        }
        for(int i = 0; i < s0; i++) cout<<"0 ";
        for(int i = 0; i < s1; i++) cout<<"1 ";
        for(int i = 0; i < s2; i++) cout<<"2 ";
        cout<<endl;
   }
    return 0;
}
//Code by QT