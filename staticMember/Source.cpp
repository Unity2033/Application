#include <iostream> // c++ ����� ��� <iostream> 

using namespace std;

class Monster
{
public:
    int health;
    static int count;

    // this ������ 
    // �ڱ� �ڽ��� ����Ű�� �������Դϴ�.
    Monster(int health)
    {
        // this �����ʹ� ȣ��� ��ü�� �ּҸ� ����Ű�� ������
        // ��� �������Դϴ�.
        this->health = health;
    }

    void Tracking()
    {
        cout << this << " : ȣ���߽��ϴ�." << endl;
        cout << "���� ����" << endl;
    }

    ~Monster()
    {
        count++;
        cout << "���͸� óġ�� �� : " << count << endl;
    }
};

// static ��� ������ ��� ��ü���� �����ؾ� �ϹǷ�
// ���α׷� ���ۺ��� ������ �����Ǿ�� �ϱ� ������
// ���� ���������� ������ �� �ֽ��ϴ�.
int Monster::count = 0;

// ���� ����̶�?
// �ϳ��� ���� Ŭ������ �������� ���� Ŭ������
// ��ӹ޴� ���Դϴ�.

class KeyBoard
{
public:
    bool power;

    void Typing()
    {
        cout << "Ű���� �Է�" << endl;
    }
};

class Mouse
{
public:
    bool power;

    void Drag()
    {
        cout << "���콺 �巡��" << endl;
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
    // ���� ����
    /*
    Monster * m1 = new Monster;
    m1->health = 100;

    delete m1;

    Monster* m2 = new Monster;
    m2->health = 100;

    delete m2;
    */

    // this ������
    /*
    Monster m1(100);
    Monster m2(125);
    Monster m3(175);

    m1.Tracking();
    m2.Tracking();
    m3.Tracking();
    */

    // ���� ���
    Computer computer;
    computer.Use();

    // ���� ����� ���� ���� ���� Ŭ������ �ߺ��Ǵ�
    // �Ӽ��� ������ �� �ֱ� ������ ���� ���� 
    // �����ڸ� ���ؼ� ���� Ŭ������ �̸��� �����ϰ�
    // �Ӽ��� ����ؾ� �մϴ�.

    computer.KeyBoard::power = true;

    return 0;
}

