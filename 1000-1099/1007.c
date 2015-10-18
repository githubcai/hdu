#include <stdio.h>

int main(){
    int t;
    double sm, sh, mh, tsm, tsh, tmh, ft1, ft2, ft3, et1, et2, et3;
    double degree, fsm, esm, fsh, esh, fmh, emh, max, min, sum;
    sm = 10./59.;
    sh = 120./719.;
    mh = 120./11.;
    tsm = 360*sm;
    tsh = 360*sh;
    tmh = 360*mh;
    while(1){
        scanf("%lf", &degree);
        if(degree<0){
            break;
        }
        sum = 0;
        fsm = sm*degree;
        fsh = sh*degree;
        fmh = mh*degree;
        esm = tsm - fsm;
        esh = tsh - fsh;
        emh = tmh - fmh;
        for(ft1=fmh,et1=emh;ft1<43200;ft1+=tmh,et1+=tmh){
            for(ft2=fsh,et2=esh;ft2<43200;t++,ft2+=tsh,et2+=tsh){
                if(ft2>et1){
                    break;
                }
                if(et2<ft1){
                    continue;
                }
                for(ft3=fsm,et3=esm;ft3<43200;ft3+=tsm,et3+=tsm){
                    if(ft3>et1 || ft3>et2){
                        break;
                    }
                    if(et3<ft1 || et3<ft2){
                        continue;
                    }
                    min = ft1;
                    if(min<ft2){
                        min = ft2;
                    }
                    if(min<ft3){
                        min = ft3;
                    }
                    max = et1;
                    if(max>et2){
                        max = et2;
                    }
                    if(max>et3){
                        max = et3;
                    }
                    sum += max - min;
                }
            } 
        }
        sum /= 432.;
        printf("%.3lf\n", sum);
    }

    return 0;
}
