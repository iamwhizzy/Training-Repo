#include <stdio.h>

int main(){

int age;

printf("Enter Number");
scanf("%d", &age);

if (age >18 || <= 70){
	printf("Eligible \n");
}
else if (age <18){
	printf("Go Back\n");
}

else (age >=70);
{
	printf("Too Old\n");
}


return 0;
}
