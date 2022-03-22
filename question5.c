//
// Created by matebook x pro on 2022/3/21.
//
#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a,const void* b){
    return(*(int*)a - *(int*)b);
}

int main() {

    int num[3];
    scanf("%d%d%d",&num[0],&num[1],&num[2]);
    qsort(num,3, sizeof(num[0]),&cmp);
    printf("%d,%d,%d",num[0],num[1],num[2]);

    return 0;
}

