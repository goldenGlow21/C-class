#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void PrintVector(vector<int> intV, char *name)
{
        vector<int>::iterator iter;

        cout << ">> " << name << " : ";
        for(iter = intV.begin(); iter != intV.end(); iter++)
                cout << *iter << " ";
        cout << endl;
}

bool IntCompare(int a, int b)
{
        return (a > b) ? true : false;
}

int main(void)
{
        int i;
        vector<int> intV(5);

        cout << "5개의 정수 입력: ";
        for (i = 0; i < 5; i++)
                cin >> intV[i];
        PrintVector(intV, "정렬 전");

        sort(intV.begin(), intV.end(), IntCompare);     //모든 원소들에 대해 정렬 수행
        PrintVector(intV, "정렬 후");

        return 0;
}