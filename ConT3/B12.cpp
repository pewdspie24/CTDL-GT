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
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        int a[255]={0};
        for(int i = 0; i < s.size(); i++){
            a[s[i]]++;
        }
        sort(a,a+255,greater<int>());
        int maxx = a[0];
        // cout<<a[0]<<endl;
        if(maxx <= s.size() - maxx + 1) cout<<"1"<<endl;
        else cout<<"-1"<<endl;
   }
    return 0;
}
//Code by QT