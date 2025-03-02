#include <iostream>
using namespace std;

class mult{
    
    public:

     mult(int a, int b) {
     int c = a * b;
         cout << " two int mult: " << c << endl;

}
    mult(int a, int b, int c) {
    int d= a * b * c;
        cout << " three int mult : " << d << endl;

}
    mult(float a, float b) {
    float c= a * b;
         cout << " two float mult: " << c << endl;

}
};

int main() {
    mult m1(3, 7);
    mult m2(0, 2, 9);
    mult m3(8.1f, 6.2f);

    return 0;
}
