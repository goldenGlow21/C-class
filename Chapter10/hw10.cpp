//컴퓨터공학과 2학년
//C011168 이종훈

#include "shape.h"
#include <iostream>
using namespace std;
int main(void)
{
        CShape *sptr = new CCircle(2, 3, 1);    //base class의 pointer가
        CShape *sptr2 = new CRect(2, 3, 4, 5);  //아들 class의 object를 가리킴
        sptr->Move(10, 10); sptr->Print();
        sptr2->Move(100, 100); sptr2->Print();
}