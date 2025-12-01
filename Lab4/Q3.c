#include<stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3,collinear;
    printf("Enter the value of x1 : ");
    scanf("%d",&x1);
     printf("Enter the value of x2 : ");
    scanf("%d",&x2);
     printf("Enter the value of x3 : ");
    scanf("%d",&x3);
     printf("Enter the value of y1 : ");
    scanf("%d",&y1);
     printf("Enter the value of y2 : ");
    scanf("%d",&y2);
     printf("Enter the value of y3 : ");
    scanf("%d",&y3);
 
    collinear = (0.5*(x1*(y2-y3) + x2*(y1-y3) + x3*(y2-y1)));

    if (collinear==0){
        printf("The points are collinear");
    }else{
        printf("The points are not collinear");
    }
    return 0;
    
}