#include <iostream> // c++ 입출력 헤더 <iostream> 
#include <list>

using namespace std;

// 가상 소멸자
/*
class classA
{
public:
    classA()
    {
        cout << "class A 생성" << endl;
    }

    virtual ~classA()
    {
        cout << "class A 소멸" << endl;
    }
};

class classB : public classA
{
public:
    classB()
    {
        cout << "class B 생성" << endl;
    }

    void Hello()
    {
        cout << "classB Hello" << endl;
    }

    ~classB()
    {
        cout << "class B 소멸" << endl;
    }
};
*/

int main()
{
    // 가상 소멸자
    /*
    // 객체가 소멸될 때 현재 참조하고 있는 객체와 상관없이
    // 모두 호출되는 소멸자입니다.
    classB * pb = new classB();
    pb->Hello();

    classA * pa = pb;

    delete pa;
    */

    // STL (Standard Template Library)
    list<int> intList;

    intList.push_back(10);
    intList.push_back(20);
    intList.push_back(30); 
    intList.push_back(40);

    cout << "intList의 사이즈 : " << intList.size() << endl;

    // intList.empty() : 리스트에 데이터 비어있다면 true 반환하는 함수
    while (intList.empty() != true)
    {
        // intList.front() : 리스트에 가장 앞에 있는 데이터를 출력해주는 함수
        cout << intList.front() << endl;
        // intList.pop_front() : 리스트에 가장 앞에 있는 데이터를 제거하는 함수
        intList.pop_front();
    }

    return 0;
}

