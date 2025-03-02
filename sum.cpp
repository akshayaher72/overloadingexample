#include <iostream>
using namespace std;
int sum(int a, int b) {
     int c = a + b;
         cout << " two int: " << c << endl;

}
int sum(int a, int b, int c) {
    int d= a + b + c;
        cout << " three int: " << d << endl;

}
float sum(float a, float b) {
    float c= a + b;
         cout << " two float: " << c << endl;

}

int main() {
    int s1 = sum(5, 7);
    int s2 = sum(1, 2, 3);
    float s3 = sum(3.5f, 4.2f);

    return 0;
}
