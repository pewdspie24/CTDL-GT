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

int main ()
{
    ONLY_CPP
    string s;
    getline(cin,s);
    string s1;
    cin>>s1;
    stringstream ss;
    ss<<s;
    bool kt = true;
    while(ss>>s){
        if(s != s1 && kt){
            cout<<s;
            kt=false;
        }
        else if(s != s1) cout<<" "<<s;
    }
    return 0;
}
//Code by QT