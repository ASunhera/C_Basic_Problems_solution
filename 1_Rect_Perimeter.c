#include<stdio.h>
int main(){
    int a,b,c;
     /*
     the formula of perimeter of rectangle
     */
    printf("Enter length of rectangle = ");
    scanf("%d",&a);   
    printf("Enter breadth of rectangle = ");
    scanf("%d",&b);
    c=2*(a+b);
    printf("the perimeter of rectangle is = %d\n",c);
    return 0;
}
