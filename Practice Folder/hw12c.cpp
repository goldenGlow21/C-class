#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class CPoint {
private:
        int x, y;

public:
        CPoint(int a = 0, int b = 0) : x(a), y(b) {}
        friend ostream &operator<<(ostream &out, const CPoint &Po);
        friend bool operator<(const CPoint &Po1, const CPoint &Po2);
};

ostream &operator<<(ostream &out, const CPoint &Po)
{
        out << "(" << Po.x << ", " << Po.y << ")";
        return out;
}

ostream &operator<<(ostream &out, vector<CPoint>& intV)
{
        vector <CPoint>::const_iterator iter;
        for(iter = intV.begin(); iter != intV.end(); iter++)
                out << *iter << " ";
        out << endl;
        return out;
}

bool operator<(const CPoint &Po1, const CPoint &Po2)      //x, y의 합이 작은 객체가 낲에 위치
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

int main(void)
{
        vector<CPoint> intV(5);

        intV[0] = CPoint(5, 3);
        intV[1] = CPoint(2, 9);
        intV[2] = CPoint(1, 1);
        intV[3] = CPoint(2, 5);
        intV[4] = CPoint(3, 7);
        cout << ">> 정렬 전: " << intV;

        sort(intV.begin(), intV.end());        //Compare 기준 모든 원소 정렬
        cout << ">> 정렬 후: " << intV;
        return 0;
}