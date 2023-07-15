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

class CCylinder : public CCircle {
private:
        int z;
        double Height;

public:
        CCylinder(int a, int b, int c, double r, double h) : CCircle(a, b, r), z(c), Height(h) {
                cout << "CCylinder 생성자" << endl; }
        ~CCylinder() { cout << "CCylinder 소멸자" << endl; }
        double GetVolume() { return (Height * PI * Radius * Radius); }
        double GetArea() { return ((2.0 * PI * Radius * Radius) + ( 2.0 * PI * Radius * Height )); }
};

int main(void)
{
        CCylinder Cyl(1, 1, 1, 1.0, 10.0);
        //밑면의 중점 (1, 1, 1), 반지름 1.0, 높이 10.0인 실린더 Cyl의 선언
        cout << "밑면적=" << Cyl.CCircle::GetArea() << endl;    //밑면적
        cout << "표면적=" << Cyl.GetArea() << endl;     //실린더의 표면적
        cout << "부피=" << Cyl.GetVolume() << endl;     //실린더의 부피
}