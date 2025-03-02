#include <iostream>
using namespace std;
int mult(int a, int b) {
     int c = a * b;
         cout << " two int mult: " << c << endl;

}
int mult(int a, int b, int c) {
    int d= a * b * c;
        cout << " three int mult : " << d << endl;

}
float mult(float a, float b) {
    float c= a * b;
         cout << " two float mult: " << c << endl;

}

int main() {
    int m1 = mult(3, 7);
    int m2 = mult(0, 2, 9);
    float m3 = mult(8.1f, 6.2f);

    return 0;
}
