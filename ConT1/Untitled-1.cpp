#include <bits/stdc++.h>
using namespace std;
void mang(int A[]){
    A[1] = A[0];
}
int main(){
    int A[2];
    cin>>A[0]>>A[1];
    mang(A);
    cout<<A[0]<<A[1];
}