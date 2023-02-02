#include <iostream> // c++ 입출력 헤더 <iostream> 

using namespace std;

#pragma pack(1)
// 바이트 패딩을 하지 않고 1 byte로 계산해서 사용하는 전치리기입니다.
class Unit
{
public:
    char grade;
    short mp;
    int health;
    int attack;

    Unit()
    {
        cout << "Unit 객체 생성" << endl;
    }

    void Skill(string skillName)
    {
        cout << skillName << endl;
    }

    ~Unit()
    {
        cout << "Unit 객체 파괴" << endl;
    }


};

// protected 상속
// 상속받은 클래스가 protected보다 접근 범위가 넓은
// 접근 지정자(public)를 모두 protected으로 
// 설정하는 상속입니다.

class Ghost : protected Unit
{
public:
    int defense;
    Ghost()
    {
        defense = 10;
        health = 100;
        attack = 25;

        // Skill("Lock Down");
        cout << "Ghost 객체 생성" << endl;
    }

    ~Ghost()
    {
        cout << "Ghost 객체 파괴" << endl;
    }
};

// private 상속
// 상속받은 클래스가 private보다 접근 범위가 넓은
// 접근 지정자(public, protected)를 모두 private으로 
// 설정하는 상속입니다.

class Duran : private Ghost
{
public:
    Duran()
    {
        health = 300;
        attack = 30;

        // Skill("Clocking");

        cout << "Duran 객체 생성" << endl;
    }

    ~Duran()
    {
        cout << "Duran 객체 파괴" << endl;
    }
};

int main()
{
    // 상속이란?
    /*
    // 상위 클래스의 속성을 하위 클래스가 사용 할 수 있도록
    // 설정해주는 기능입니다.

    //Unit unit;
    //cout << "unit의 크기 : " << sizeof(unit) << endl;

    // Ghost ghost;
    // cout << "ghost의 크기 : " << sizeof(ghost) << endl;

    Duran duran;
    cout << "duran의 크기 : " << sizeof(duran) << endl;
    */


#pragma region 클래스의 바이트 패딩

    Unit unit;

    cout << "unit의 크기 : " << sizeof(unit) << endl;
#pragma endregion


    return 0;
}

