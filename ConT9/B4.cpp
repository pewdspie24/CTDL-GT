#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fi first
#define se second
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

int a[1005][1005]={0};

int main ()
{
    ONLY_CPP
    int T=1;
    // cin>>T;
    while(T--){
        int n;
        cin>>n;
        cin.ignore();
        for(int i = 1; i <= n; i++){
            string s;
            getline(cin,s);
            stringstream ss;
            ss<<s;
            while(ss>>s){
                int tmp = stoi(s);
                a[i][tmp] = 1;
                a[tmp][i] = 1;
            }
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++) cout<<a[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
//Code by QT