#include <stdio.h>
int main()
{
    /*FORMUA
    Celsius = (Fahrenheit - 32) / 1.8
    */
    /*my first algorithm*/
    double fahr, celsius;
    int lower, upper;
    lower =0;
    upper = 100;
    

    for (fahr = 0; fahr <= upper; fahr++)
    {
        celsius = (fahr - 32) / 1.8;
        printf("fahr = %3f  is celsius = %6.3f\n", fahr, celsius);
    }


}