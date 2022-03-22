//
// Created by matebook x pro on 2022/3/21.
//
#include <stdio.h>

int main() {
    
    int score;
    scanf("%d",&score);
    if (score>=90) printf("A");
    if (score<90 && score>=80) printf("B");
    if (score<80 && score>=70) printf("C");
    if (score<70 && score>=60) printf("D");
    if (score<60) printf("E");
    
    return 0;
}

