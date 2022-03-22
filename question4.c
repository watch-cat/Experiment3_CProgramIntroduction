//
// Created by matebook x pro on 2022/3/21.
//
#include <stdio.h>
#include <math.h>

int main() {

    double num,ans;
    scanf("%lf",&num);

    if (num>10){
        ans = log(num+3);
    } else if (num>-3 && num<=10){
        ans = exp(num);
    } else{
        ans = sin(num)/(cos(num)+4);
    }

    printf("%.2f",ans);

    return 0;
}

