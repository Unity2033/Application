#include <iostream> // c++ 입출력 헤더 <iostream> 

using namespace std;

class Monster
{
public:
    int health;
    static int count;

    // this 포인터 
    // 자기 자신을 가리키는 포인터입니다.
    Monster(int health)
    {
        // this 포인터는 호출된 객체의 주소를 가리키기 때문에
        // 상수 포인터입니다.
        this->health = health;
    }

    void Tracking()
    {
        cout << this << " : 호출했습니다." << endl;
        cout << "몬스터 추적" << endl;
    }

    ~Monster()
    {
        count++;
        cout << "몬스터를 처치한 수 : " << count << endl;
    }
};

// static 멤버 변수는 모든 객체들이 접근해야 하므로
// 프로그램 시작부터 끝까지 유지되어야 하기 때문에
// 전역 범위에서만 정의할 수 있습니다.
int Monster::count = 0;

// 다중 상속이란?
// 하나의 하위 클래스가 여러개의 상위 클래스를
// 상속받는 것입니다.

class KeyBoard
{
public:
    bool power;

    void Typing()
    {
        cout << "키보드 입력" << endl;
    }
};

class Mouse
{
public:
    bool power;

    void Drag()
    {
        cout << "마우스 드래그" << endl;
    }
};

class Computer : public KeyBoard, public Mouse
{
public:
    void Use()
    {
        Mouse::power = true;

        Typing();
        Drag();
    }
};


int main()
{
    // 정적 변수
    /*
    Monster * m1 = new Monster;
    m1->health = 100;

    delete m1;

    Monster* m2 = new Monster;
    m2->health = 100;

    delete m2;
    */

    // this 포인터
    /*
    Monster m1(100);
    Monster m2(125);
    Monster m3(175);

    m1.Tracking();
    m2.Tracking();
    m3.Tracking();
    */

    // 다중 상속
    Computer computer;
    computer.Use();

    // 다중 상속은 여러 개의 상위 클래스에 중복되는
    // 속성이 존재할 수 있기 때문에 범위 지정 
    // 연산자를 통해서 상위 클래스의 이름을 선언하고
    // 속성을 사용해야 합니다.

    computer.KeyBoard::power = true;

    return 0;
}

