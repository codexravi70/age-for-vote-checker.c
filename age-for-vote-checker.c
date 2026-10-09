#include<stdio.h>
#include<stdlib.h>
/*
A simple C program that checks voting eligibility based on age using if-else statements. Beginner-friendly project to practice basic C programming.
*/
int main()
{
    int age;
    printf("Enter Your Age\n");
    scanf("%d" ,&age);
    if(age>=18)
    {
    printf("You Are Eligible To Vode\n");
    }
    else
    {
    printf("You Are Not Eligible To Vode\n");
    }
    return 0;
}