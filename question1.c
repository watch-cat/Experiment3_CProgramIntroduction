//
// Created by matebook x pro on 2022/3/21.
//

#include <stdio.h>
int main(){

    double x,ans;
    scanf("%lf",&x);
    if (x != 0){
        ans = 1/x;
    } else{
        ans = 0;
    }

    printf("%.2lf",ans);

    return 0;
}
