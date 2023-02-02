#include <iostream> // c++ 입출력 헤더 <iostream> 

using namespace std;

class Weapon
{
public:
    // 가상 함수 선언
    virtual void Attack()
    {
        cout << "공격" << endl;
    }

    void Information()
    {
        cout << "무기의 정보" << endl;
    }
};

class Sword : public Weapon
{
public:
    void Attack()
    {
        cout << "검으로 베기" << endl;
    }

    void Information()
    {
        cout << "검의 정보" << endl;
    }
};

class Gun : public Weapon
{
public:
    void Attack()
    {
        cout << "총으로 발사" << endl;
    }

    void Information()
    {
        cout << "총의 정보" << endl;
    }
};

// 캡슐화
/*
// 객체의 속성과 함수를 하나로 묶어서 실제 구현 내용의 일부를
// 내부에 은닉하여 감추는 작업입니다.
class Car
{
private :
    int speed;
public :
    void SetPedal(int speed)
    {
        if (speed >= 180)
        {
            speed = 180;
        }

        this->speed = speed;
    }

    int GetSpeed()
    {
        return speed;
    }
};
*/


// OOP 객체 지향 프로그래밍
// 4대 특징
// 1. 상속
// 2. 다형성
// 3. 캡슐화
// 4. 추상화

class Object
{
public:
    // 순수 가상 함수가 하나라도 포함이 되어 있다면
    // 추상 클래스라고 정의됩니다.
    virtual void A() = 0;
};

class NPC : public Object
{
public:
    void A()
    {
        cout << "NPC 입니다." << endl;
    }
};


int main()
{
    // 가상 함수란?
    /*
    // 상속하는 클래스 내에서 같은 형태의 함수로 재정의될 수 있는 함수입니다.
    Weapon * weapon = new Weapon();

    cout << "Weapon 클래스의 크기 : " << sizeof(Weapon) << endl;

    weapon->Attack();

    Gun * gun = new Gun();

    weapon = gun;

    weapon->Attack();
    */

    // 순수 가상 함수란?
    // 인터페이스를 하위 클래스에게 전달하기 위해 사용하는 함수입니다.

    // 순수 가상 함수는 정의되지 않은 함수가 있으므로, 생성할 수 없습니다.
    // Object object;

    Object* obj = new NPC;

    NPC npc;
    npc.A();

    // 캡슐화
    /*
    Car car;

    int damage = 0;

    car.SetPedal(damage);

    cout << car.GetSpeed() << endl;
    */



    return 0;
}

