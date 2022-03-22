#include <stdio.h>
#include <math.h>

int main() {

    int num,digit1,digit2,digit3;
    scanf("%d",&num);
    if (num>=100 && num<1000){
        digit1 = num/100;
        digit2 = num/10%10;
        digit3 = num%10;
        if (pow(digit1,3)+pow(digit2,3)+pow(digit3,3) == num){
            printf("yes");
        } else printf("no");
    } else{
        printf("error");
    }

    return 0;
}
