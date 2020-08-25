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

void preCompute(int n2){
    queue<string> q;
    q.push("44");
    q.push("55");
    int dem = 2;
    while(res.size() < n2){
        string tmp = q.front(); q.pop();
        res.pb(tmp);
        string tmp1 = "4"+tmp+"4";
        string tmp2 = "5"+tmp+"5";
        q.push(tmp1);
        q.push(tmp2);
    }
    sort(res.begin(), res.end(), comp);
}

int main ()
{
    ONLY_CPP
    int T;
    cin>>T;
    while(T--){
        int n1;
        cin>>n1;
        preCompute(n1);
        for(int i = 0; i < n1; i++){
            cout<<res[i]<<" ";
        }
        res.clear();
        cout<<endl;
   }
    return 0;
}
//Code by QT