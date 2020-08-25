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

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
       int n;
       cin>>n;
       int a[n];
       int dem1 = 0;
       for(int i = 0; i < n; i++){
           cin>>a[i];
        //    if(a[i] != 0) dem1++;
       }
       if(n%2 == 1){
           a[n] = 0;
           n+=1;
       }
       sort(a,a+n);
    //    cout<<digits<<endl;
       ll s1=0,s2=0;
       int dem=0;
       for(int i = 0; i < n; i++){
            s1=s1*10+a[i];
            i++;
            s2=s2*10+a[i];
       }
    //    cout<<s1<<" "<<s2<<endl;
       cout<<s1+s2<<endl;
   }
    return 0;
}
//Code by QT