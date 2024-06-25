/*
 * main.c
 *
 *  Created on: ??‏/??‏/????
 *      Author: Mohamed
 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>	
#include <math.h>
static void pyramidExample(void );
static void printAsterisks(int numAsterisks);
static void printSpaces(int numSpaces) ;
static void SecondorderSwitch(void);
static void SecondorderEquation(void);
void main(void )
{
    system("cls");
    /******************************** Pyramid example******************/
    // pyramidExample();
    /******************************** 2nd order Equation**************/
    SecondorderEquation();
    //SecondorderSwitch();
    return;
}
void pyramidExample(void )
{
    int height = 4; 
    for (int i = 0; i < height; i++)
    {
        printSpaces(height - i - 1);
        printAsterisks(2 * i + 1);
        printf("\n");
    }
}
void printSpaces(int numSpaces) 
{
    for (int i = 0; i < numSpaces; i++) {
        printf(" ");
    }
}
void printAsterisks(int numAsterisks) 
{
    for (int i = 0; i < numAsterisks; i++) {
        printf("*");
    }
}

void SecondorderEquation(void)
{

    // ax^2+bx+c
    double a, b, c, discriminant, x1, x2;

    // Input coefficients from the user
    printf("Enter the coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Check different cases using if-else statements
    if (discriminant > 0)
    {
        // Two real and distinct roots
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two real and distinct roots: x1 = %.2lf, x2 = %.2lf\n", x1, x2);
    } 
    else if (discriminant == 0) 
    {
        // One real root (repeated)
        x1 = -b / (2 * a);
        printf("One real root (repeated): x1 = x2 = %.2lf\n", x1);
    } 
    else
    {
        // Imaginary roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Imaginary roots: x1 = %.2lf + %.2lfi, x2 = %.2lf - %.2lfi\n",
            realPart, imaginaryPart, realPart, imaginaryPart);
    }
}

void SecondorderSwitch(void)
{
    double a, b, c;
    double discriminant, x1, x2;

    // Input coefficients from the user
    printf("Enter the coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Convert the discriminant to an integer representation for switch-case
    int discriminantCase = (discriminant > 0) ? 1 : (discriminant == 0) ? 0 : -1;

    // Switch-case statement to handle different cases
    switch (discriminantCase)
    {
        case 1: // Two real and distinct roots
            x1 = (-b + sqrt(discriminant)) / (2 * a);
            x2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Two real and distinct roots: x1 = %.2lf, x2 = %.2lf\n", x1, x2);
            break;
        case 0: // One real root (repeated)
            x1 = -b / (2 * a);
            printf("One real root (repeated): x1 = x2 = %.2lf\n", x1);
            break;
        default: // Imaginary roots
            double realPart = -b / (2 * a);
            double imaginaryPart = sqrt(-discriminant) / (2 * a);
            printf("Imaginary roots: x1 = %.2lf + %.2lfi, x2 = %.2lf - %.2lfi\n",
                   realPart, imaginaryPart, realPart, imaginaryPart);
            break;
    }
}