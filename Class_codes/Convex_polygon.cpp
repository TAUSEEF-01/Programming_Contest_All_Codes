#include <iostream>
#include <vector>

// Function to calculate the cross product of vectors (p0 - p1) and (p2 - p1)
double crossProduct(double x0, double y0, double x1, double y1, double x2, double y2) {
    return (x1 - x0) * (y2 - y0) - (x2 - x0) * (y1 - y0);
}

// Function to check if the given points form a convex polygon
bool isConvexPolygon(const std::vector<double>& x_coords, const std::vector<double>& y_coords) {
    int numPoints = x_coords.size();

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
    // std::cout << "Enter the number of points: ";
    int numPoints;
    std::cin >> numPoints;

    std::vector<double> x_coords(numPoints);
    std::vector<double> y_coords(numPoints);

    // std::cout << "Enter the points (x y):" << std::endl;
    for (int i = 0; i < numPoints; ++i) {
        std::cin >> x_coords[i] >> y_coords[i];
    }

    if (isConvexPolygon(x_coords, y_coords)) {
        std::cout << "Convex polygon exists" << std::endl;
    } else {
        std::cout << "No convex polygon possible" << std::endl;        
    }

    return 0;
}




















// #include <iostream>
// #include <vector>

// struct Point {
//     double x, y;
// };

// // Cross product of two vectors (p1 - p0) and (p2 - p0)
// double crossProduct(const Point& p0, const Point& p1, const Point& p2) {
//     return (p1.x - p0.x) * (p2.y - p0.y) - (p2.x - p0.x) * (p1.y - p0.y);
// }

// // Check if the given points form a convex polygon
// bool isConvexPolygon(const std::vector<Point>& points) {
//     int numPoints = points.size();

//     if (numPoints < 3) {
//         // A polygon must have at least 3 points
//         return false;
//     }

//     bool isClockwise = false;
//     bool isCounterclockwise = false;

//     for (int i = 0; i < numPoints; ++i) {
//         double orientation = crossProduct(points[i], points[(i + 1) % numPoints], points[(i + 2) % numPoints]);

//         if (orientation > 0) {
//             isCounterclockwise = true;
//         } else if (orientation < 0) {
//             isClockwise = true;
//         }

//         if (isClockwise && isCounterclockwise) {
//             // Both clockwise and counterclockwise orientations found, not convex
//             return false;
//         }
//     }

//     // If only one orientation is found, the polygon is convex
//     return true;
// }

// int main() {
//     // int n;
//     // cin>>n;
    
//     std::vector<Point> points = {{0.0, 0.0}, {2.0, 0.0}, {2.0, 2.0}, {0.0, 2.0}};

//     // for(int i=0; i<n; i++)
//     // {
//     //     cin>> 
//     // }

//     if (isConvexPolygon(points)) {
//         std::cout << "The given points form a convex polygon." << std::endl;
//     } else {
//         std::cout << "The given points do not form a convex polygon." << std::endl;
//     }

//     return 0;
// }
