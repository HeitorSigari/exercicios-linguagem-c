#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
    float Height;
    float Width;
    float Lenght;
    float Volume;
    printf("\n\n\tThis program calculates the volume of any prism, in cubic centimeters, using the formula:Height.Widht.Length");
    printf("\n\n\tEnter the value of the Height (cm): ");
    scanf("%f",&Height);
    printf("\n\n\tEnter the value of the widht (cm): ");
    scanf("%f",&Width);
    printf("\n\n\tEnter the value of the lenght (cm): ");
    scanf("%f",&Lenght);
    Volume = Height*Width*Lenght;
    printf("\n\n\tThe volume of the prism whose dimensions are %fcm,%fcm e %fcm is equal to: %fcm^3 ",Height,Width,Lenght,Volume);
    printf("\n\n");
    system("pause");
    return 0;
}
