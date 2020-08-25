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
const ll eeee = 1e18;

vector<string> preCompute;

void generate(){
    ll tmp = 1;
    // string temp;
    for(ll i = 1; i <= 1e5; i++){
        tmp = i*i*i;
        // temp = to_string(tmp);
        // preCompute.pb(temp);
        preCompute.pb(to_string(tmp));
        // n++;
    }
    return;
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    // generate();
    cin>>T;
    generate();
    reverse(preCompute.begin(), preCompute.end());
    // cout<<preCompute.size()<<endl;
    while(T--){
        ll n;
        cin>>n;
        string stringN = to_string(n);
        // vector<ll>::iterator index = lower_bound(preCompute.begin(),preCompute.end(),n);
        // cout<<index-preCompute.begin();
        int checkall = 0;
        for(int i = 0/*index-preCompute.begin()*/; i < preCompute.size(); i++){
            if(preCompute[i].size() > stringN.size()) continue;
            int kt = 0;
            int check = 0;
            string checkS = preCompute[i];
            for(int j = 0; j < stringN.size(); j++){
                if(stringN[j] == checkS[check]){
                    check++;
                }
                if(check == checkS.size()) kt = 1;
            }
            if(kt == 1){
                cout<<checkS<<endl;
                checkall=1;
                break; 
            }
        }
        if(checkall == 0) cout<<"-1"<<endl;
        // preCompute.clear();     
   }
    return 0;
}
//Code by QT