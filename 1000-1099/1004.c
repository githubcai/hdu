#include <stdio.h>
#include <string.h>
#define SIZE 1000

struct color{
    char cl[16];
    int count;
};

struct color c[SIZE];

int main(){
    int ntest, temp, len;
    char tchar[16];
    while(1){
        len = 0;
        scanf("%d", &ntest);
        if(ntest==0){
            break;
        }
        
        for(temp=0;temp<ntest;temp++){
            scanf("%s", tchar);

            if(strcmp(tchar, ))
        }

    }
    return 0;
}   
