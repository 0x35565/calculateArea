// Simple program to calculate the area of a shape.

#include <stdio.h>

void calculateArea() {
    // Variable declarations. 
    int x;
    int y;
    
    // User input statements and instructions. 
    printf("Enter length of shape: \n"); 
    scanf("%d", &x);
    printf("Enter width of object: \n");
    scanf("%d", &y);    
    // Computation of length and width. 
    int calculation = x * y;

    // Final result: Area of the width and length of the shape. 
    printf("The area of the shape is: %d", calculation);
}

int main() {
    calculateArea();
}
