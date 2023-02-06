#include <iostream> // c++ ����� ��� <iostream> 
#include <deque>

using namespace std;

void PointerSwap(int ** x, int ** y)
{
    int * temp = *x;

    *x = *y;

    *y = temp;
}

int main()
{
    // ��ũ
    /*
    deque<int> deque;

    deque.push_back(10);
    deque.push_back(20);
    deque.push_back(30);
    deque.push_back(40);

    // [0] [1] [2] [3]
    // 10  20  30  40
    cout << "deque�� size : " << deque.size() << endl;

    // [0] [1] [2]
    // 20  30  40
    deque.pop_front();

    for (int i = 0; i < deque.size(); i++)
    {
        cout << deque[i] << endl;
    }
    */

    // ���� ������
    /*
    int a = 10;
    int * ptr = &a;
    int ** dptr = &ptr;

    cout << "a�� ���� �ּ� : " << &a << endl;
    cout << "*dptr�� �� : " << *dptr << endl;
    cout << "**dptr�� �� : " << **dptr << endl;
    */

    int a = 10;
    int b = 20;

    int * aptr = &a;
    int * bptr = &b;

    cout << "aptr�� ����Ű�� �� : " << *aptr << endl;
    cout << "bptr�� ����Ű�� �� : " << *bptr << endl;

    PointerSwap(&aptr, &bptr);

    cout << "aptr�� ����Ű�� �� : " << *aptr << endl;
    cout << "bptr�� ����Ű�� �� : " << *bptr << endl;

    return 0;
}

