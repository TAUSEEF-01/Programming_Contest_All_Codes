#include <stdio.h>
#include <stdbool.h>

// Function to calculate the cross product of vectors (p0 - p1) and (p2 - p1)
double crossProduct(double x0, double y0, double x1, double y1, double x2, double y2) {
    return (x1 - x0) * (y2 - y0) - (x2 - x0) * (y1 - y0);
}

// Function to check if the given points form a convex polygon
bool isConvexPolygon(double x_coords[], double y_coords[], int numPoints) {
    if (numPoints < 3) {
        // A polygon must have at least 3 points
        return false;
    }

    bool isClockwise = false;
    bool isCounterclockwise = false;

    for (int i = 0; i < numPoints; ++i) {
        double orientation = crossProduct(x_coords[i], y_coords[i], x_coords[(i + 1) % numPoints], y_coords[(i + 1) % numPoints], x_coords[(i + 2) % numPoints], y_coords[(i + 2) % numPoints]);

        if (orientation > 0) {
            isCounterclockwise = true;
        } else if (orientation < 0) {
            isClockwise = true;
        }

        if (isClockwise && isCounterclockwise) {
            // Both clockwise and counterclockwise orientations found, not convex
            return false;
        }
    }

    // If only one orientation is found, the polygon is convex
    return true;
}

int main() {
    int numPoints;
    printf("Enter the number of points: ");
    scanf("%d", &numPoints);

    double x_coords[numPoints];
    double y_coords[numPoints];

    // printf("Enter the points (x y):\n");
    for (int i = 0; i < numPoints; ++i) {
        scanf("%lf %lf", &x_coords[i], &y_coords[i]);
    }

    if (isConvexPolygon(x_coords, y_coords, numPoints)) {
        printf("Convex polygon exists\n");
    } else {
        printf("No convex polygon possible\n");
    }

    return 0;
}
