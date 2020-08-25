#include <bits/stdc++.h>
#include <string.h>
#include <string>

#define pb push_back
#define FOR(i,n) for(i = 0; i < n; i++)
#define mp make_pair
#define fi first
#define se second

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

ll Check[100000000];
ll maxx = 1000000000000000000;
string s;
ll n;
int i;

void preCompute(){
    Check[0] = s.length();
    int j = 1;
    while(Check[j-1] <= maxx/2){
        Check[j] = 2*Check[j-1];
        j++;
    }
}

char sol(int j){
    if(j == 0) return s[n-1];
    ll tmp = Check[j]/2;
    if(n <= tmp) return sol(j-1);
    else{
        n-=tmp;
        n--;
        if(n==0) n = tmp;
        return sol(j-1);
    }
}

int main ()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    cin>>s;
    cin>>n;
    preCompute();
    int i = 0;
    while(n>Check[i]){
        i++;
    }
    // cout<<Check[i];
    cout<<sol(i);
    return 0;
}
//Code by QT