#include <stdio.h>
#define SIZE 100000

int seq[SIZE];

int main(){
    int ntest, ttemp, ntemp, ntemp1, num, msum, tsum, mstart, mend;
    char c;
    scanf("%d", &ntest);
    for(ttemp=1;ttemp<=ntest;ttemp++){
        scanf("%d", &num);
        for(ntemp=0;ntemp<num;ntemp++){
            fscanf("%d", &seq[ntemp]);
        }
        for(ntemp=0;ntemp<num;ntemp++){
            tsum = 0;
            for(ntemp1=ntemp;ntemp1<num;ntemp1++){
                tsum += seq[ntemp1];
                if(msum<tsum){
                    mstart = ntemp + 1;
                    mend = ntemp1 + 1;
                    msum = tsum;
                }
            }
        }
        printf("Case %d:\n", ttemp);
        printf("%d %d %d\n", msum, mstart, mend);
        if(ttemp!=ntest){
            printf("\n");
        }
    }

    return 0;
}
