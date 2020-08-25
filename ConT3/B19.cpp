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

ll mauChung(ll a, ll b){
    ll temp = __gcd(a,b);
    return a*b/temp;
}

void sol(ll tuSo, ll mauSo){
    if(tuSo >= mauSo){
        if(tuSo%mauSo == 0){
            cout<<tuSo/mauSo;
            return;
        }
        else{
            int tmp = tuSo/mauSo;
            cout<<tmp<<" + ";
            tuSo -= mauSo*tmp;
        }
    }
    if(mauSo%tuSo == 0){
        cout<<"1/"<<mauSo/tuSo;
        return;
    }
    ll tmp = mauSo/tuSo +1;
    cout<<"1/"<<tmp<<" ";
    ll msc = mauChung(tmp,mauSo);
    ll tstemp = msc/tmp;
    ll tuSotemp = tuSo;
    tuSotemp *= msc/mauSo;
    tuSotemp -= tstemp;
    // cout<<tuSotemp<<"/"<<msc<<endl;
    if(tuSotemp==0 || mauSo == 0) return;
    // ll rutgon = __gcd(tuSotemp,msc);
    // tuSotemp /= rutgon;
    // msc /= rutgon;
    cout<<"+ ";
    return sol(tuSotemp,msc);
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        ll p,q;
        cin>>p>>q;
        sol(p,q);
        cout<<endl;
   }
    return 0;
}
//Code by QT