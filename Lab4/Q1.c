#include<stdio.h>
int main(){
    int a,b,c;
    
    printf("Enter first side : ");
    scanf("%d",&a);
    printf("Enter second side : ");
    scanf("%d",&b);
    printf("Enter third side : ");
    scanf("%d",&c);

    if(a+b>c && b+c>a && a+c>b){
        printf("The triangle is valid\n");
    }
    else{
        printf("The triangle is not valid\n");
    }
        if(a==b && b==c && c==a){
            printf("The triangle is Equilateral\n");
        }
        else if(a==b || b==c || c==a){
            printf("The triangle is isosceles\n");
        }
        else{
            printf("The triangle is scalene\n");
        }

        if ((a * a == b * b + c * c) || 
            (b * b == a * a + c * c) || 
            (c * c == a * a + b * b)) {
            printf("The triangle is also Right-angled.\n");
        }
        
        return 0;

}