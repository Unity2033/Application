#include <iostream> // c++ ����� ��� <iostream> 

using namespace std;

namespace A
{ 
    int value = 10;

    void Information()
    {
       cout << "A ������ ����" << endl;
    }
}  // <- �� ������ ����� �޸𸮿��� ������ϴ�.

namespace B
{
    int count = 20;
   

    void Information()
    {
        cout << "B ������ ����" << endl;
    }
}

// ������ �����ؼ� ����� �� �ִ� ���
using namespace A;

// Ŭ������?
// ����� ���� ������ �������� �Ӽ��� �Լ��� ���ԵǾ�
// ������, Ŭ������ ���� ��ü�� �����Ͽ� �����ϰ� 
// ����� �� �ִ� ����ü�Դϴ�.
class Monster
{
// private�̶�?
// Ŭ���� ���ο����� ������ �� �ֵ��� �����ϴ� �������Դϴ�.
private :
    // �⺻ ���� ������
    // ���� �����ڸ� �������� ������ �⺻������
    // private ���� �����ڷ� �����˴ϴ�.
    int health;
    float damage;

// public�̶�?
// Ŭ���� ���ο� Ŭ���� �ܺο��� ������ �� �ֵ��� �����ϴ� �������Դϴ�.
public :
    // ���� �����ڶ�? 
    // Ŭ���� ������ ���ԵǾ� �ִ� �Ӽ���
    // ���� ������ �����ϴ� �������Դϴ�.

    void Attack()
    {
        cout << "����" << endl;
        name = "monster";
    }

// protected��?
// Ŭ���� ���ο� �ڱⰡ ����ϰ� �ִ� Ŭ���������� ������ �� �ֵ��� �����ϴ� �������Դϴ�.
protected :
    string name;

};

class Goblin : public Monster
{
    void Information()
    {
        name = "Goblin";
        Attack();
    }
};

int main()
{
    // �̸� ����
    /*
    // �Ӽ��� ������ �� �ֵ��� ��ȿ ������ �����ϴ�
    // �����Դϴ�.
    cout << value << endl;
    Information();

    cout << B::count << endl;
    B::Information();
    */

    // Ŭ������ �ν��Ͻ�ȭ
    Monster orc;

    Monster * dragon = new Monster;
    dragon->Attack();

    Goblin object;
  
    orc.Attack();
   
    return 0;
}

