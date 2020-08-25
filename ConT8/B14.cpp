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

vector<string> res;

bool comp(const string &left, const string &right) 
{ 
    if (left.size() == right.size()) 
        return left < right; 
    else
        return left.size() < right.size(); 
}

void try1(string s, int n){
    if (s.length() == n){
        queue<char> q;
        int i = 1;
        string s2 = s;
        string s3 = s;
        reverse(s3.begin(), s3.end());
        s2+=s3;
        res.pb(s2);
    }
    else{
        try1(s+"4",n);
        try1(s+"5",n);
    }
}

void preCompute(){
    int scs = 1;
    while(res.size() <= 10000){
        string s1;
        try1(s1,scs);
        scs++;
    }
    sort(res.begin(), res.end(), comp);
}

int main ()
{
    ONLY_CPP
    int T;
    cin>>T;
    preCompute();
    while(T--){
        int n1;
        cin>>n1;
        for(int i = 0; i < n1; i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;
   }
    return 0;
}
//Code by QT