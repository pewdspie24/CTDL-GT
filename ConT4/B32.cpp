
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

ll tmp[10000000];
vll a;

ll mergesort(ll low, ll high) {
   if(low>=high) return 0;
   ll mid= (low+high)/ 2 , left=0,right=0;
   left=mergesort(low,mid);
   right=mergesort(mid+1,high); // d&c mảng
   ll res=0;
   int i=low , j=mid+1,k=low;
   while(i<=mid and j<=high) { //merge, swap 2 pt cho nhau
        if( a[i]<=a[j] ) tmp[k++]=a[i++];
        else{
            tmp[k++]=a[j++];
            res+=abs(mid+1-i);
        }
   }
   while(i<=mid)   tmp[k++]=a[i++];
   while(j<=high)  tmp[k++]=a[j++];
   for(int i=low ; i<=high ;i++) a[i]=tmp[i];
   return res+left+right;
}

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        ll n,temp,i=0;
        cin>>n;
        ll ntmp=n;
        while(n--){
            cin>>temp;
            a.pb(temp);
            tmp[i]=0;
            i++;
        }
        cout<<mergesort(0,ntmp-1)<<endl;
        a.clear();
   }
    return 0;
}
//Code by QT