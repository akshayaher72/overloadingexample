#include <iostream>
using namespace std;
class sum{

public:

 int a,b,c,d;
 float e;


 sum(int a,int b){

    c= a+b;

    cout<< " sum of two int:" <<c << endl;

 }


  sum(int a,int b,int c){

    d= a+b+c;

    cout<< "sum of two int:" <<d<< endl;

 }

  sum(float a,float b){

     e= a+b;

    cout<< "sum of two int:" <<e << endl;

 }

};


int main() {
    sum s1(5, 7);
    sum s2(1, 2, 3);
    sum s3(3.5f, 4.2f);

    return 0;
}
