#include <stdio.h>

int main()

{
    int n,temp,digit1,digit2,digit3,sum;
    scanf("%d",&n);
    temp = n;
    while(temp!=0){
        digit1 = temp%10;
        digit2 = (temp/10)%10;
        digit3 = (temp/100)%10;
        sum = digit1*digit1*digit1 + digit2*digit2*digit2 + digit3*digit3*digit3;
        temp = temp/10;
    }
if(n = sum){
    printf("Armstrong");
}
else{
    printf("Not Armstrong");
}
    return 0;
}
