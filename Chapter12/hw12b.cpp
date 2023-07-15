//컴퓨터공학과 2학년
//C011168 이종훈

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class CPoint {
private:
        int x, y;

public:
        CPoint(int a = 0, int b = 0) : x(a), y(b) {}
        friend ostream &operator<<(ostream &out, CPoint &Po);
        friend bool Compare(const CPoint &Po1, const CPoint &Po2);
};

ostream &operator<<(ostream &out, CPoint &Po)
{
        out << "(" << Po.x << ", " << Po.y << ")";
        return out;
}

bool Compare(const CPoint &Po1, const CPoint &Po2)      //x, y의 합이 작은 객체가 낲에 위치
{
        if (Po1.y < Po2.y)
                return true;
        else if (Po1.y == Po2.y)
                if (Po1.x < Po2.x)
                        return true;
                else
                        return false;
        else
                return false;
}

void PrintVector(vector<CPoint> intV, char *name)
{
        vector<CPoint>::iterator iter;

        cout << ">> " << name << " : ";
        for (iter = intV.begin(); iter != intV.end(); iter++)
                cout << *iter << " ";
        cout << endl;
}

int main(void)
{
        vector<CPoint> intV(5);

        intV[0] = CPoint(5, 3);
        intV[1] = CPoint(2, 9);
        intV[2] = CPoint(1, 1);
        intV[3] = CPoint(2, 5);
        intV[4] = CPoint(3, 7);
        PrintVector(intV, "정렬 전");

        sort(intV.begin(), intV.end(), Compare);        //Compare 기준 모든 원소 정렬
        PrintVector(intV, "정렬 후");

        return 0;
}