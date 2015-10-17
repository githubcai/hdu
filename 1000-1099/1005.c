#include <stdio.h>

//最大循环周期是49
#define SIZE 200
int a, b, record[SIZE];

int f(int n){
    int temp, result, cnt=0;
    record[0] = record[1] = 1;
    for(temp=2;temp<SIZE;temp++){
        record[temp] = (record[temp-1] * a + record[temp-2] * b) % 7;
        if(record[temp]==1&&record[temp-1]==1){
            break;
        }
        if(record[temp]==0&&record[temp-1]==0){
            cnt = 1;
            break;
        }
    }
    if(cnt==1){
        result = 0;
    }else{
        temp -= 1;
        if(temp>n){
            result = record[n-1];
        }else{
            result = record[(n-1)%temp];
        }
    }
    return result;
}

int main(){
    int n, result;
    while(1){
        scanf("%d%d%d", &a, &b, &n);
        if(!a&&!b&&!n){
            break;
        }
        result = f(n);
        printf("%d\n", result);

    }
    return 0;
}

