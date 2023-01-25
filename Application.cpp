#include <iostream> // c++ 입출력 헤더 <iostream> 

using namespace std;

class IPhone
{
public :
    int * version;

    IPhone()
    {
        version = new int;
        cout << "기본 생성자 호출" << endl;
    }

    // 복사 생성자
    IPhone(const IPhone & copyIPhone)
    {
        // 깊은 복사란?
        // 객체를 복사할 때, 참조 값이 아닌 인스턴스 자체를 새로 
        // 복사하여 서로 다른 메모리를 생성하는 복사입니다.
        version = new int;
        *version = *copyIPhone.version;

        cout << "복사 생성자 호출" << endl;
        cout << "version : " << *version << endl;
    }

    ~IPhone()
    {
        delete version;
    }
};

int main()
{
    // 복사 생성자란?
    /*
    // 같은 객체를 복사하여 생성시킬 때 호출되는 생성자입니다.  
    IPhone se1;

    se1.price = 100000;
    se1.size = 5;

    // se2(se1)
    IPhone se2 = se1;
    */

    // 얕은 복사
    // 객체를 복사할 때 주솟값을 복사하여 같은 메모리를 가리키는
    // 복사입니다.

    IPhone se1;

    *se1.version = 10;

    // se2(se1)
    IPhone se2 = se1;

    *se2.version = 20;

    cout << "*se1.version의 값 : " << *se1.version << endl;
    cout << "*se2.version의 값 : " << *se2.version << endl;

    return 0;
}

