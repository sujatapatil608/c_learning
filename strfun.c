#include<stdio.h>
#include<string.h>
void main(){
char str[50];
printf("Enter Your String:");
//gets(str);//unsafe
fgets(str,sizeof(str),stdin);//safe
displaystring(str);
}
void displaystring(char str[]){
	printf("Enter String=%s",str);
	puts(str);
}
