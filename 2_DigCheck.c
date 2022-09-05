#include<stdio.h>
int main(){
int ch;
printf("Enter a Number = \n");
scanf("%d",&ch);
if(ch>=0 && ch<=9){
    printf("This is a digit \n");
}
else{
    printf("This is not a digit\n");
}
}