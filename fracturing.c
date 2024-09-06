// Carter Gerlach
// UCF ID: 5690287

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
    // Call functions as needed
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0; // required return type
}

// Calculate the distance between 2 points
double calculateDistance() {
    double x1, y1, x2, y2;
    
    printf("Enter the coordinates for point 1 (x1 y1): ");
    x1 = askForUserInput(); 
    y1 = askForUserInput();
    
    printf("Enter the coordinates for point 2 (x2 y2): ");
    x2 = askForUserInput();
    y2 = askForUserInput();
    
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The distance between the two points is %.2lf\n", distance);
    
    return distance; // required return type
}

// Calculate the perimeter (circumference) of the circle
double calculatePerimeter() {
    double diameter = calculateDistance();
    double radius = diameter / 2;
    double perimeter = 2 * PI * radius;
    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);
    
    return 2.0; // Return difficulty level 
}

// Function to calculate the area of the circle
double calculateArea() {
    double diameter = calculateDistance();
    double radius = diameter / 2;
    double area = PI * pow(radius, 2);
    printf("The area of the city encompassed by your request is %.2lf\n", area);
    
    return 3.0; // Return difficulty level 
}

// Function to calculate the width of the circle
double calculateWidth() {
    double diameter = calculateDistance();
    double width = diameter; // The width of the circle is its diameter
    printf("The width of the city encompassed by your request is %.2lf\n", width);
    
    return 2.0; // Return difficulty level 
}

// Function to calculate the height of the circle
double calculateHeight() {
    double diameter = calculateDistance();
    double height = diameter; // The height of the circle is its diameter
    printf("The height of the city encompassed by your request is %.2lf\n", height);
    
    return 2.0; // Return difficulty level 
}

// Function to ask for user input
double askForUserInput() {
    double input;
    printf(" ");
    scanf("%lf", &input);
    return input;
}
