
#include <stdio.h>

int main() {
    float h, w, BMI;
    printf("Enter your weight in kg: ");
    scanf("%f", &w);
    printf("Enter your height in cm: ");
    scanf("%f", &h);
    
    BMI = w / (h*h) ; 

    if (BMI >= 30) {
        printf("Obese");
    } else if (BMI >= 25 && BMI < 30) {
        printf("Overweight");
    } else if (BMI >= 20 && BMI < 25) {
        printf("Normal");
    } else {
        printf("Underweight");
    }
    return 0;
}
