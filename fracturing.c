// Carter Gerlach
// UCF ID: 5690287

#include <stdio.h>
#include <math.h>
#define PI 3.14159

// Function prototypes
double calculateDistance(double x1, double y1, double x2, double y2);
double calculatePerimeter(double diameter);
double calculateArea(double diameter);
double calculateWidth(double diameter);
double calculateHeight(double diameter);
double askForUserInput(double *x1, double *y1, double *x2, double *y2);

int main(int argc, char **argv) {
    double x1, y1, x2, y2;
    
    // Ask for user input once
    askForUserInput(&x1, &y1, &x2, &y2);
    
    double diameter = calculateDistance(x1, y1, x2, y2);
    calculatePerimeter(diameter);
    calculateArea(diameter);
    calculateWidth(diameter);
    calculateHeight(diameter);
    
    return 0; // required return type
}

// Calculate the distance between 2 points
double calculateDistance(double x1, double y1, double x2, double y2) {
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The distance between the two points is %.2lf\n", distance);
    
    return distance; // required return type
}

// Calculate the perimeter (circumference) of the circle
double calculatePerimeter(double diameter) {
    double radius = diameter / 2;
    double perimeter = 2 * PI * radius; // Perimeter (cirumference) is equal to 2 * pi * radius
    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);
    
    return 2.0; // Return difficulty level 
}

// Function to calculate the area of the circle
double calculateArea(double diameter) {
    double radius = diameter / 2;
    double area = PI * pow(radius, 2); // area of circle is equal to pi * radius^2
    printf("The area of the city encompassed by your request is %.2lf\n", area);
    
    return 3.0; // Return difficulty level 
}

// Function to calculate the width of the circle
double calculateWidth(double diameter) {
    double width = diameter; // The width of the circle is its diameter
    printf("The width of the city encompassed by your request is %.2lf\n", width);
    
    return 2.0; // Return difficulty level 
}

// Function to calculate the height of the circle
double calculateHeight(double diameter) {
    double height = diameter; // The height of the circle is its diameter
    printf("The height of the city encompassed by your request is %.2lf\n", height);
    
    return 2.0; // Return difficulty level 
}

// Function to ask for user input
double askForUserInput(double *x1, double *y1, double *x2, double *y2) {
    printf("Enter the coordinates for point 1 (x1 y1): ");
    scanf("%lf %lf", x1, y1);
    
    printf("Enter the coordinates for point 2 (x2 y2): ");
    scanf("%lf %lf", x2, y2);
}
