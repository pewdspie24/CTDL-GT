#include <stdio.h>
int main ()
{
    // ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    scanf("%d", &T);
    while(T--){
        int n, tmp = 0;
        scanf("%d",&n);
        int a[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
            if(a[i] == 0) tmp++;
        }
        printf("%d\n", tmp);
   }
    return 0;
}
//Code by QT