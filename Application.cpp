#include <iostream> // c++ 입출력 헤더 <iostream> 
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
    // 데크
    /*
    deque<int> deque;

    deque.push_back(10);
    deque.push_back(20);
    deque.push_back(30);
    deque.push_back(40);

    // [0] [1] [2] [3]
    // 10  20  30  40
    cout << "deque의 size : " << deque.size() << endl;

    // [0] [1] [2]
    // 20  30  40
    deque.pop_front();

    for (int i = 0; i < deque.size(); i++)
    {
        cout << deque[i] << endl;
    }
    */

    // 이중 포인터
    /*
    int a = 10;
    int * ptr = &a;
    int ** dptr = &ptr;

    cout << "a의 시작 주소 : " << &a << endl;
    cout << "*dptr의 값 : " << *dptr << endl;
    cout << "**dptr의 값 : " << **dptr << endl;
    */

    int a = 10;
    int b = 20;

    int * aptr = &a;
    int * bptr = &b;

    cout << "aptr이 가리키는 값 : " << *aptr << endl;
    cout << "bptr이 가리키는 값 : " << *bptr << endl;

    PointerSwap(&aptr, &bptr);

    cout << "aptr이 가리키는 값 : " << *aptr << endl;
    cout << "bptr이 가리키는 값 : " << *bptr << endl;

    return 0;
}

