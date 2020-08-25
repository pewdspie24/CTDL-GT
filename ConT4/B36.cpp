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

ll binToDec(string num) 
{ 
    ll res = 0; 
    ll base = 1; 
    int len = num.length()-1;
    while (len>=0) { 
        int last_digit = num[len]-'0'; 
        len--;
        res += last_digit * base; 
        base = base * 2; 
    } 
    return res; 
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        string s1,s2;
        cin>>s1>>s2;
        ll a = binToDec(s1);
        ll b = binToDec(s2);
        cout<<a*b<<endl;
   }
    return 0;
}
//Code by QT