//컴퓨터공학과 2학년
//C011168 이종훈

#define PI 3.14
#include <iostream>
using namespace std;

class CCircle {
protected:
        int x, y;       //중심
        double Radius;  //반지름

public:
        CCircle(int a, int b, double r) : x(a), y(b), Radius(r) {
                cout << "CCircle 생성자" << endl; }
        ~CCircle() { cout << "CCircle 소멸자" << endl; }
        double GetArea() { return (PI * Radius * Radius); }
};

class CSphere : public CCircle {
private:
        int z;

public:
        CSphere(int a, int b, int c, double r) : CCircle(a, b, r), z(c) {
                cout << "CSphere 생성자" << endl; }
        ~CSphere() { cout << "CSphere 소멸자" << endl; }
        double GetVolume() { return ((4.0 / 3.0) * PI * Radius * Radius); }
        double GetArea() { return (4.0 * PI * Radius * Radius); }
};

int main(void)
{
        CSphere Sph(1, 1, 1, 1.0);
        cout << "단면적=" << Sph.CCircle::GetArea() << endl;    //단면적
        cout << "표면적=" << Sph.GetArea() << endl;     //표면적
        cout << "부피=" << Sph.GetVolume() << endl;     //부피
}