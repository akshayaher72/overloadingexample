#include<iostream>
using namespace std;

class Disp {
public:
    Disp(int a) {
        cout << "Integer: " << a << endl;
    }

    Disp(double b) {
        cout << "Double: " << b << endl;
    }

    Disp(string c) {
        cout << "String: " << c << endl;
    }
};

int main(){
    Disp d1(3);
    Disp d2(12.321546877);
    Disp d3("Akshay");

    return 0;
}
