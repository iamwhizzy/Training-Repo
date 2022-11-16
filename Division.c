#include <stdio.h>

int main() {
    double num;
    printf("Key in your number: \n");
    scanf("%lf",&num);
    
    int count = 1;
    while (100>=count){
        double mul = num / count;
        printf("%.2lf/%d = %.4lf\n",num, count, mul);
    
        count = count + 1;
    }
    return 0;
}
