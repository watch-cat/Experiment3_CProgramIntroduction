//
// Created by matebook x pro on 2022/3/21.
//
#include <stdio.h>

int main() {

    //ascii A-65 a-97
    char inputChar;
    scanf("%c",&inputChar);
    if (inputChar<=90 && inputChar>=65) printf("%d",inputChar);
    if (inputChar>=97 && inputChar<=122) printf("%c",inputChar-32);


    return 0;
}

