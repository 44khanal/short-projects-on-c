#include <stdio.h>


// Function to calculate the surface area of a sphere
float areaOfSphere(float radius) {
    float area;
    area = 4 * 3.14 * radius * radius;  // Formula: 4 * pi * r^2
    return area;
}

int main() {
    float radius, area;

    // Ask the user to input the radius of the sphere
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    // Call the user-defined function to calculate the area
    area = areaOfSphere(radius);

    // Output the calculated area
    printf("The surface area of the sphere is: %.2f\n", area);

    return 0;
}
