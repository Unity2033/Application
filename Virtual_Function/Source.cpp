#include <iostream> // c++ ����� ��� <iostream> 

using namespace std;

class Weapon
{
public:
    // ���� �Լ� ����
    virtual void Attack()
    {
        cout << "����" << endl;
    }

    void Information()
    {
        cout << "������ ����" << endl;
    }
};

class Sword : public Weapon
{
public:
    void Attack()
    {
        cout << "������ ����" << endl;
    }

    void Information()
    {
        cout << "���� ����" << endl;
    }
};

class Gun : public Weapon
{
public:
    void Attack()
    {
        cout << "������ �߻�" << endl;
    }

    void Information()
    {
        cout << "���� ����" << endl;
    }
};

// ĸ��ȭ
/*
// ��ü�� �Ӽ��� �Լ��� �ϳ��� ��� ���� ���� ������ �Ϻθ�
// ���ο� �����Ͽ� ���ߴ� �۾��Դϴ�.
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


// OOP ��ü ���� ���α׷���
// 4�� Ư¡
// 1. ���
// 2. ������
// 3. ĸ��ȭ
// 4. �߻�ȭ

class Object
{
public:
    // ���� ���� �Լ��� �ϳ��� ������ �Ǿ� �ִٸ�
    // �߻� Ŭ������� ���ǵ˴ϴ�.
    virtual void A() = 0;
};

class NPC : public Object
{
public:
    void A()
    {
        cout << "NPC �Դϴ�." << endl;
    }
};


int main()
{
    // ���� �Լ���?
    /*
    // ����ϴ� Ŭ���� ������ ���� ������ �Լ��� �����ǵ� �� �ִ� �Լ��Դϴ�.
    Weapon * weapon = new Weapon();

    cout << "Weapon Ŭ������ ũ�� : " << sizeof(Weapon) << endl;

    weapon->Attack();

    Gun * gun = new Gun();

    weapon = gun;

    weapon->Attack();
    */

    // ���� ���� �Լ���?
    // �������̽��� ���� Ŭ�������� �����ϱ� ���� ����ϴ� �Լ��Դϴ�.

    // ���� ���� �Լ��� ���ǵ��� ���� �Լ��� �����Ƿ�, ������ �� �����ϴ�.
    // Object object;

    Object* obj = new NPC;

    NPC npc;
    npc.A();

    // ĸ��ȭ
    /*
    Car car;

    int damage = 0;

    car.SetPedal(damage);

    cout << car.GetSpeed() << endl;
    */



    return 0;
}

