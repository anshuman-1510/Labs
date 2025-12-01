#include<stdio.h>

int main() {
    float Bmi,Weight,Height;
    printf("Enter your weight (kgs) :");
    scanf("%f",&Weight);
    printf("Enter your height (mts) :");
    scanf("%f",&Height);
    Bmi=Weight/(Height*Height);
    printf(" Your Bmi is : %f\n",Bmi);

     if(Bmi>=15.1 && Bmi<=17.5)
    {
        printf("You are Anorexic \n");
    }
    else if(Bmi>=18.5 && Bmi<=24.9)
    {
        printf("You have a ideal weight \n");
    }
    else if(Bmi>=25 && Bmi<=25.9)
    {
        printf("You are overweight \n");
    }
    else if(Bmi>=30 && Bmi<=39.9)
    {
        printf("You are obese \n");
    }
    else if(Bmi>40)
    {
        printf("You are morbidly obese \n");
    }
    return 0;
}