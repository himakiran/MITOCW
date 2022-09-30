#include <stdio.h>

int main(int argc ,char **argv) {
int i = 0;
for (i=0; i< argc ; i++){
printf("The %d argument is %s \n",i, argv[i]);
}
int a = 10;
int b = 20;

printf(" a: %d \n",a); printf(" b: %d \n",b); printf(" a+b : %d \n",a+b);

char greeting[]="hello" ;
char name[]="human";

printf(" %s %s !!! \n",greeting, name);





return 0;
}  
