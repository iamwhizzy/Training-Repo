#include <stdio.h>

int main() {
    int num;
    printf("Key in your number: \n");
    scanf("%d",&num);
    
    int count = 1;
    while (count<=12){
        int mul = num * count;
        printf("%d*%d = %d\n",num, count, mul);
    
        count = count + 1;
    }
    return 0;
}
