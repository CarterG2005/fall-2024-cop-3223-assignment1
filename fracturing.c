#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function prototypes
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();

int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}

// Function to calculate the distance between two points
double calculateDistance() {
    double x1, y1, x2, y2;
    printf("Enter coordinates for Point #1 (x1 y1): ");
    x1 = askForUserInput();
    y1 = askForUserInput();
    printf("Enter coordinates for Point #2 (x2 y2): ");
    x2 = askForUserInput();
    y2 = askForUserInput();
    
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);
    
    return distance;
}

// Function to calculate the perimeter of a circle
double calculatePerimeter() {
    double diameter = calculateDistance();
    double perimeter = PI * diameter;
    
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
    
    return 1.0; // Assume difficulty as 1.0 for simplicity
}

// Function to calculate the area of a circle
double calculateArea() {
    double diameter = calculateDistance();
    double radius = diameter / 2;
    double area = PI * pow(radius, 2);
    
    printf("The area of the city encompassed by your request is %.2f\n", area);
    
    return 1.0; // Assume difficulty as 1.0 for simplicity
}

// Function to calculate the width of a circle
double calculateWidth() {
    double diameter = calculateDistance();
    
    printf("The width of the city encompassed by your request is %.2f\n", diameter);
    
    return 1.0; // Assume difficulty as 1.0 for simplicity
}

// Function to calculate the height of a circle
double calculateHeight() {
    double diameter = calculateDistance();
    
    printf("The height of the city encompassed by your request is %.2f\n", diameter);
    
    return 1.0; // Assume difficulty as 1.0 for simplicity
}

// Function to ask for user input
double askForUserInput() {
    double value;
    scanf("%lf", &value);
    return value;
}