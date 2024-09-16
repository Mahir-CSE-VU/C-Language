#include <stdio.h>

int main() {
    float fahrenheit, celsius;


    printf("Enter temperature in Fahrenheit:\n ");
    scanf("%f", &fahrenheit);


    celsius = (fahrenheit - 32) * 5 / 9;


    printf("Celsius=%.2f ",  celsius);

    return 0;
}

