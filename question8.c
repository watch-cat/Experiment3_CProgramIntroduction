//
// Created by matebook x pro on 2022/3/21.
//
#include <stdio.h>

int main() {

    double weight,height,bmi;
    scanf("%lf%lf",&weight,&height);
    bmi = weight/(height*height);
    printf("%.1lf\n",bmi);
    if (bmi>25) printf("PANG");
    else printf("Hai Xing");

    return 0;
}
