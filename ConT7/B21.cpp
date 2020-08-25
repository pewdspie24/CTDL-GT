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

vi a;
stack <int> b;
int res1[1000005]={0};
int res2[1000005]={0}; 


void sol1(int arr[]){
    while(!b.empty()) b.pop();
    for (int i = a.size()-1; i >= 0; i--){
        if(b.empty()){
            b.push(i);
            arr[i] = -1;
            continue;
        } 
        while(a[i] >= a[b.top()] && !b.empty()){
            // cout<<a[i]<<" ";
            b.pop();
            if(b.empty()) break;
        }
        if(!b.empty()){
            arr[i] = b.top();
        }
        else arr[i] = -1;
        b.push(i);
    }
}

void sol2(int arr[]){
    while(!b.empty()) b.pop();
    for(int i = a.size()-1; i >= 0; i--){
        if(b.empty()){
            b.push(i);
            arr[i] = -1;
            continue;
        } 
        while(a[i] <= a[b.top()] && !b.empty()){
            // cout<<a[i]<<" ";
            b.pop();
            if(b.empty()) break;
        }
        if(!b.empty()){
            arr[i] = b.top();
        }
        else arr[i] = -1;
        b.push(i);
    }
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int n, tmp;
        cin>>n;       
        for(int i = 0; i < n; i++){
            cin>>tmp;
            a.pb(tmp);
        }
        sol1(res1);
        sol2(res2);
        for(int i = 0; i < n; i++){
            if(res1[i] != -1 && res2[res1[i]] != -1) cout<<a[res2[res1[i]]]<<" ";
            else cout<<"-1"<<" ";
        }
        a.clear();
        cout<<endl;
   }
    return 0;
}
//Code by QT