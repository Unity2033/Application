#include <iostream> // c++ ����� ��� <iostream> 

using namespace std;

#pragma pack(1)
// ����Ʈ �е��� ���� �ʰ� 1 byte�� ����ؼ� ����ϴ� ��ġ�����Դϴ�.
class Unit
{
public:
    char grade;
    short mp;
    int health;
    int attack;

    Unit()
    {
        cout << "Unit ��ü ����" << endl;
    }

    void Skill(string skillName)
    {
        cout << skillName << endl;
    }

    ~Unit()
    {
        cout << "Unit ��ü �ı�" << endl;
    }


};

// protected ���
// ��ӹ��� Ŭ������ protected���� ���� ������ ����
// ���� ������(public)�� ��� protected���� 
// �����ϴ� ����Դϴ�.

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
        cout << "Ghost ��ü ����" << endl;
    }

    ~Ghost()
    {
        cout << "Ghost ��ü �ı�" << endl;
    }
};

// private ���
// ��ӹ��� Ŭ������ private���� ���� ������ ����
// ���� ������(public, protected)�� ��� private���� 
// �����ϴ� ����Դϴ�.

class Duran : private Ghost
{
public:
    Duran()
    {
        health = 300;
        attack = 30;

        // Skill("Clocking");

        cout << "Duran ��ü ����" << endl;
    }

    ~Duran()
    {
        cout << "Duran ��ü �ı�" << endl;
    }
};

int main()
{
    // ����̶�?
    /*
    // ���� Ŭ������ �Ӽ��� ���� Ŭ������ ��� �� �� �ֵ���
    // �������ִ� ����Դϴ�.

    //Unit unit;
    //cout << "unit�� ũ�� : " << sizeof(unit) << endl;

    // Ghost ghost;
    // cout << "ghost�� ũ�� : " << sizeof(ghost) << endl;

    Duran duran;
    cout << "duran�� ũ�� : " << sizeof(duran) << endl;
    */


#pragma region Ŭ������ ����Ʈ �е�

    Unit unit;

    cout << "unit�� ũ�� : " << sizeof(unit) << endl;
#pragma endregion


    return 0;
}

