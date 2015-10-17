#include <stdio.h>
#include <string.h>
#define SIZE 1000

struct color{
    char cl[16];
    int count;
};

struct color c[SIZE];

int main(){
    int ntest, temp, ncl, ncltemp, mindex;
    char tchar[16];
    while(1){
        ncl = 0;
        memset(c, 0, SIZE*sizeof(struct color));
        scanf("%d", &ntest);
        if(ntest==0){
            break;
        }
        
        for(temp=0;temp<ntest;temp++){
            scanf("%s", tchar);
            for(ncltemp=0;ncltemp<ncl;ncltemp++){
                if(strcmp(tchar, c[ncltemp].cl)==0){
                    c[ncltemp].count++;
                    break;
                }
            }
            if(ncltemp==ncl){
                strcpy(c[ncl].cl, tchar);
                c[ncl].count = 1;
                ncl++;
            }
        }
/*
        for(ncltemp=0;ncltemp<ncl;ncltemp++){
            printf("color = %s; count = %d\n", c[ncltemp].cl, c[ncltemp].count);
        }
*/
        temp = c[0].count;
        mindex = 0;
        for(ncltemp=1;ncltemp<ncl;ncltemp++){
            if(c[ncltemp].count>temp){
                temp = c[ncltemp].count;
                mindex = ncltemp;
            }
        }
        printf("%s\n", c[mindex].cl);
    }
    return 0;
}   
