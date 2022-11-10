#include <stdio.h>

int main(){

int age;

printf("Enter Number");
scanf("%d", &age);

if (age >18){
	printf("Eligible");
}
else if (age <18){
	printf("Go Back");
}

else if (age >70){
	printf("Too Old");
}


return 0;
}
