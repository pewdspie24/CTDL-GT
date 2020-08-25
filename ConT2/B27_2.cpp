#include <bits/stdc++.h>
#include <string.h>
#include <string>

#define pb push_back
#define FOR(i,n) for(i = 0; i < n; i++)
#define mp make_pair
#define fi first
#define se second

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

bool sol(int arr[], int subsetSum[], bool taken[], 
                   int subset, int K, int N, int curIdx, int limitIdx) 
{ 
    if (subsetSum[curIdx] == subset) 
    { 
        if (curIdx == K - 2) 
            return true; 
        return sol(arr, subsetSum, taken, subset, 
                                            K, N, curIdx + 1, N - 1); 
    } 
    for (int i = limitIdx; i >= 0; i--) 
    { 
        if (taken[i]) 
            continue; 
        int tmp = subsetSum[curIdx] + arr[i]; 
        if (tmp <= subset) 
        { 
            taken[i] = true; 
            subsetSum[curIdx] += arr[i]; 
            bool nxt = sol(arr, subsetSum, taken, 
                                            subset, K, N, curIdx, i - 1); 
            taken[i] = false; 
            subsetSum[curIdx] -= arr[i]; 
            if (nxt) 
                return true; 
        } 
    } 
    return false; 
} 
bool solve(int arr[], int N, int K) 
{ 
    if (K == 1) 
        return true; 
    if (N < K) 
        return false; 
    int sum = 0; 
    for (int i = 0; i < N; i++) 
        sum += arr[i]; 
    if (sum % K != 0) 
        return false; 
    int subset = sum / K; 
    int subsetSum[K]; 
    bool taken[N]; 
    for (int i = 0; i < K; i++) 
        subsetSum[i] = 0; 
    for (int i = 0; i < N; i++) 
        taken[i] = false; 
    subsetSum[0] = arr[N - 1]; 
    taken[N - 1] = true; 
    return sol(arr, subsetSum, taken, 
                                     subset, K, N, 0, N - 1); 
}

int main ()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int N;
        int K; 
        cin>>N>>K;
        int arr[N];
        for(int i = 0; i < N; i++) cin>>arr[i]; 
        if (solve(arr, N, K)) 
            cout << "1" <<endl; 
        else
            cout << "0" <<endl; 
    }
    return 0;
}
//Code by QT