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

vector<string> cont;

void try1(string s, int n){
    if (s.length() == n){
        cont.pb(s);
    }
    else{
        try1(s+"0",n);
        try1(s+"1",n);
    }
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string s;
    cin>>s;
    stack<int> a;
    vector<II> b;
    vector<string> res;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(') a.push(i);
        else if(s[i] == ')'){
            b.pb(mp(a.top(),i)); 
            a.pop();
        } 
    }
    reverse(b.begin(), b.end());
    string s1;
    vector<vector<II> > vect;
    try1(s1,b.size());
    for(int i = 1; i < cont.size(); i++){
        vector<II> tmp;
        for(int j = 0; j < cont[i].size(); j++){
            if(cont[i][j] == '1'){
                tmp.pb(mp(b[j].fi,b[j].se));
            }
        }
        vect.pb(tmp);
    }
    vector<string> smth;
    for(int i = 0; i < vect.size(); i++){
        string ss="";
        for(int j = 0; j < s.size(); j++){
            int kt = 0;
            for(int k = 0; k < vect[i].size(); k++){
                if(j == vect[i][k].fi || j == vect[i][k].se){
                    kt = 1;
                    break;
                }
            }
            if(kt == 0) ss+=s[j];
        }
        smth.pb(ss);
        ss.clear();
    }
    sort( smth.begin(), smth.end() );
    smth.erase( unique( smth.begin(), smth.end() ), smth.end() );
    for(int i = 0; i < smth.size(); i++) cout<<smth[i]<<endl;
    return 0;
}
//Code by QT