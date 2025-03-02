#include<iostream>
using namespace std;

class shape {
    int length, area;
    double lengths, width;
    float radius, areas;


public:
    shape(int length) {
        area = length * length;
        cout << "Area: " << area << endl;
    }

    shape(double len, double wid) {
        lengths = len;
        width = wid;
        cout << "Length: " << lengths << ", Width: " << width << endl;
    }

    shape(float radius) {
        areas = 3.14 * radius * radius;
        cout << "Area: " << areas << endl;
    }
};

int main() {
    shape s1(12);
    shape s2(10.123568, 11.034568);
    shape s3(9.0f);
    return 0;
}
