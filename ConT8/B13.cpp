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

map<int,int> mymap;

void preCompute(){
    int i = 1;
    while(i < limit){
        int a[10]={0};
        int tmp = i;
        int kt = 0;
        while(tmp){
            int cs = tmp%10;
            tmp/=10;
            a[cs]++;
            if(a[cs] > 1){
                kt = 1;
                break;
            }
            if(cs > 5){
                kt = 1;
                break;
            }
        }
        if(!kt) mymap[i]++;
        i++;
    }
    
}

int main ()
{
    ONLY_CPP
    int T;
    cin>>T;
    preCompute();
    while(T--){
        int l,r;
        cin>>l>>r;
        int dem = 0;
        for(int i = l; i <= r; i++){
            if(mymap[i] == 1) dem++;
        }
        cout<<dem<<endl;
   }
    return 0;
}
//Code by QT