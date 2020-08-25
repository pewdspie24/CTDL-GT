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

string last = " 1238004765", init = " ";
queue < pair <string, int > > q;
map <string, int > ma, id;
int l[10] = {2, 6, 3, 1, 5, 9, 7, 4, 8, 10};
int r[10] = {1, 3, 7, 4, 2, 6, 10, 8, 5, 9};
int ll1[10] = {4, 1, 3, 8, 5, 2, 7, 9, 6, 10};
int rr[10] = {1, 5, 2, 4, 9, 6, 3, 8, 10, 7};

string xoay(int a[], string s) {
	string ss = s;
	for(int i = 0; i <= 9; i++) {
		ss[a[i]] = s[i+1];
	}
	return ss;
}

void check(string ss, string s1, int xx) {
    if(!ma[s1]) {
        ma[s1] = ma[ss] + 1;
        id[s1] = xx;
        q.push(mp(s1, xx));
    } else if(id[s1] != xx) {
        cout << ma[s1] + ma[ss] - 1;
        exit(0);
    }
}

int main ()
{
    ONLY_CPP
    for(int i = 1; i <= 10; i++){
        char c;
        cin>>c;
        init += c;
    }
    if(init == last) {
        cout << 0;
        return 0;
    }
    ma[init] = ma[last] = 1;
    id[init] = 1, id[last] = 2;
    q.push(mp(init, 1));
    q.push(mp(last, 2));
    while(!q.empty()) {
        string ss = q.front().fi;
        int xx = q.front().se;
        q.pop();
        if(xx == 1) {
            string s1 = xoay(l, ss);
            check(ss, s1, xx);
            s1 = xoay(r, ss);
            check(ss, s1, xx);
        } else {
            string s1 = xoay(ll1, ss);
            check(ss, s1, xx);
            s1 = xoay(rr, ss);
            check(ss, s1, xx);
        }
    }
    return 0;
}
//Code by QT