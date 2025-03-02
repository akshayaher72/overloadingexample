#include<iostream>
using namespace std;

class rectangle {
    int height, width;
    
public:
    rectangle() {
        height = 1;
        width = 1;
     cout << "Height: " << height << ", Width: " << width << endl;

    }

    rectangle(int val) {
        height = val;
        width = val;
    cout << "Height: " << height << ", Width: " << width << endl;

    }

    rectangle(int h, int w) {
        height = h;
        width = w;
                cout << "Height: " << height << ", Width: " << width << endl;

    }

   
};

int main() {
    rectangle R1;
    rectangle R2(3);
    rectangle R3(2, 4);

    
    return 0;
}
