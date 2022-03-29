//
// Created by matebook x pro on 2022/3/21.
//
#include <stdio.h>

int main() {

    int a,b,c,t;
    scanf("%d%d%d",&a,&b,&c);
    if (a > b || a > c){
        t = a;
        a = b;
        b = c;
        c = t;
    }
    if (a > b || a > c){
        t = a;
        a = b;
        b = c;
        c = t;
    }
    if (b > c){
        t = b;
        b = c;
        c = t;
    }

    printf("%d,%d,%d",a,b,c);

    return 0;
}

