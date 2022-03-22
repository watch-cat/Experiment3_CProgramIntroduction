//
// Created by matebook x pro on 2022/3/21.
//
#include <stdio.h>

int main() {

    int year;
    scanf("%d",&year);
    if (year%4 == 0 && year%100 != 0){
        printf("yes");
    } else if (year%400 == 0){
        printf("yes");
    } else{
        printf("no");
    }

    return 0;
}

