#include <stdio.h>
#include <string.h>
#define SIZE 1002
char a[SIZE], b[SIZE], result[SIZE];

int main(int argc, char* args[]){
    int num, temp, rtemp, alen, blen, rlen, div;
    char c;
    scanf("%d", &num);
    while((c = getchar()) != '\n' && c != EOF); //清空缓冲区
    for(temp=1;temp<=num;temp++){
        scanf("%s %s", a, b);
        alen = strlen(a);
        blen = strlen(b);
        div = 0;
        for(rlen=0,alen--,blen--;alen>=0||blen>=0;alen--,blen--,rlen++){
            if(alen>=0&&blen>=0){
                result[rlen] = a[alen] - '0' + b[blen] + div;
            }
            if(alen>=0&&blen<0){
                result[rlen] = a[alen] + div;
            }
            if(alen<0&&blen>=0){
                result[rlen] = b[blen] + div;
            }
            div = 0;
            if(result[rlen]>'9'){
                result[rlen] -= 10;
                div = 1;
            }
        }
        
        if(temp!=1){
            printf("\n");
        }
        printf("Case %d:\n", temp);
        printf("%s + %s = ", a, b);
        if(div > 0){
            printf("%d", div);
        }
        for(rtemp=rlen-1;rtemp>=0;rtemp--){
            printf("%c", result[rtemp]);
        }
        printf("\n");
    }
    return 0;
}
