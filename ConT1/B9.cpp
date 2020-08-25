#include <stdio.h>

int main()
{
    int T;
    scanf("%d",&T);
    while(T--){
        char out[17]={};
        char num[]="00000000000000000";
        int count[]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536};
        bool thuan[17];
        int n, i, m, j;
        for(i=0; i<17; i++) thuan[i] = true;
        scanf("%d", &n);
        m = 1<<n;
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                out[n-1-j] = num[j];
                count[j]--;
                if(count[j]==0)
                {
                    count[j] = 1<<j;

                    if(thuan[j])
                    {
                        if(num[j]=='0')
                            num[j] = '1';
                        else
                            thuan[j] = false;
                    }
                    else
                    {
                        if(num[j]=='1')
                            num[j]='0';
                        else
                            thuan[j] = true;
                    }
                }
            }
            for(int i = 0; i < n; i++){
                printf("%c", out[i]);
            }
            printf(" ");
        }
        printf("\n");
    }
}
