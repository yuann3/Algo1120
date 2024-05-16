// Lab3b
// Filename: main.cpp
// Student name: Yiyuan Li (C3434681)
// Date: 15 March

#include <iostream>
#include <cmath>

using namespace std;

class Point {
private:
    double x;
    double y;
public:
    // Constructor with default parameters
    Point(double x = 0.0, double y = 0.0) : x(x), y(y) {}

    // Setter functions
    void set_x(double x) {
        x = x;
    }
    void set_y(double y) {
        y = y;
    }

    // Getter functions
    double get_x() const {
        return x;
    }
    double get_y() const {
        return y;
    }

    // Overloaded << operator for output
    friend ostream& operator<<(ostream& os, const Point& p) {
        os << '(' << p.x << ", " << p.y << ')';
        return os;
    }
};

// Function to calculate distance between two points
double length(const Point& p1, const Point& p2) {
    return sqrt(pow(p1.get_x() - p2.get_x(), 2) + pow(p1.get_y() - p2.get_y(), 2));
}

int main() {
    Point p1; // Default point
    Point p2(5.3, 3.8); // custom coordinates

    // Printing initial points
    cout << "Point p1: " << p1 << endl; // (0, 0)
    cout << "Point p2: " << p2 << endl; // (5.3, 3.8)

    // Updating p1's coordinates
    p1.set_x(3.4);
    p1.set_y(2.3);
    cout << "Updated Point p1: " << p1 << endl;

    // Calculating and displaying the distance between p1 and p2
    double dist = length(p1, p2);
    cout << "Distance between p1 and p2: " << dist << endl; // Calculate and display the distance

    return 0;
}
