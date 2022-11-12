#include <stdio.h>

int main(){
    
    char operator;
    printf("Select operator ['+','-','*','/']:");
    scanf("%c", &operator);
    
    double a, b;
    printf("Enter First number: ");
    scanf("%lf",&a);
    
    printf("Enter Second number: ");
    scanf("%lf", &b);
    
    double answer;
    
    switch (operator){
        case '+':
        answer = a+b;
        break;
        
        case '-':
        answer = a-b;
        break;
        
        case '*':
        answer = a*b;
        break;
        
        case '/':
        answer = a/b;
        break;
        
        default:
        printf("Invalid");
    }
    printf("%.3lf\n", answer);
return 0;
}
