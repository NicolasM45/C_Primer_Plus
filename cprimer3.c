#include<stdio.h>
#include<limits.h>
#include<float.h>

int main ()
{

 /* Write a program that asks you to enter an ASCII code value and then 
    prints the correspondant character */
    
    int ask;
    printf("Enter an ASCII code, please! : ");
    scanf("%d", &ask);
    printf("\nThe character is: %c\n", ask);
    
    /*write an a program that soud an alert and prints the following text*/
    
    printf("\aStartled by the sudden sound, Sally shouted, \"By the Great Pumkin, what was that!\"\n");
    /* Find out what your system does with integer/float underflow/overflow */
    printf("The minimum value of INT = %d\n", INT_MIN-1);
    printf("The maximum value of INT = %d\n", INT_MAX+1);

    printf("The minimum value of float = %e\n", FLT_MIN*100);
    printf("The maximum value of float = %e\n", FLT_MAX*100000);

    /* write a program that reads a float and print it in first decimal-point notation, then in exponential, and then in p notation */

    float value = 0.0;
    printf("Enter a floating point value: ");
    scanf("%f", &value);
    printf("fixed-point notation: %f\n", value);
    printf("exponential notation: %e\n", value);
    printf("p notation: %a\n", value);

    /* There are approximately 3.156*10^7 seconds in a year. Write a program that requests your age in years and then displays the equivalent number in seconds*/

    int years = 0;
    printf("Enter your age in years: ");
    scanf("%d", &years);
    int coeff = 3.156e7;
    printf("The equivalent number of seconds is: %d\n", coeff*years);
    
    return 0;
}
