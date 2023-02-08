#include <iostream> // c++ 입출력 헤더 <iostream> 

using namespace std;

class Person
{
public:
    virtual void Talk()
    {
        cout << "말하기" << endl;
    }
};

class Student : public Person
{
public:
    void Study()
    {
        cout << "학습 중~" << endl;
    }

    // final이란?
    // 특정한 상속 영역까지만 상속하겠다고 제한하는 키워드입니다.
    void Talk() final
    {
        cout << "학생이 질문한다." << endl;
    }
};

class ModelStudent : public Student 
{
public :
    void HighGrades()
    {

    }

    /*  
    void Talk()
    {

    }
    */
};

class A
{
public :
    virtual void Attack()
    {
        cout << "공격" << endl;
    }

    virtual void Move()
    {
        cout << "이동" << endl;
    }
};

class B : public A
{
public :
    void Attack()
    {
        cout << "칼 들고 공격" << endl;
    }

    void Move()
    {
        cout << "칼 들고 이동" << endl;
    }
};

int main()
{
    // 상위 클래스 <- 하위 클래스 
    // 업캐스팅이란?
    /*
    // 하위 클래스의 정보를 담을 수 있는 객체에
    // 상위 클래스의 자료형을 부여해서 상위클래스처럼 
    // 사용하는 캐스팅입니다.

    A * aptr;

    B * bptr = new B();

    aptr = bptr;

    aptr->AClass();
    */

    // 다운캐스팅
    // 하위 클래스 <- 상위 클래스 

    // int a;
    // char c;

    // 1 byte       4 byte
    //   c     =    a;

    int select = 0;
    cin >> select;

    A * aptr = nullptr;

    switch (select)
    {
    case 1:
        aptr = new B();
        break;

    // case 2:
    //    aptr = new C();
    //    break;
    }

    aptr->Attack();

    return 0;
}

