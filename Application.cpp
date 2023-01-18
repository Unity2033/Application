#include <iostream> // c++ ����� ��� <iostream> 
#include "Computer.h"

using namespace std;

class Character
{
    // �����ڶ�?
    // Ŭ������ �ν��Ͻ��� �����Ǵ� ������ �ڵ�����
    // ȣ��Ǵ� Ư���� ��� �Լ��Դϴ�.

private :
    int x;
    int y;

public :
    // �������� ��� ��ü�� ������ �� �� �� ���� ȣ��Ǹ�,
    // �����ڴ� ��ȯ���� �������� �ʽ��ϴ�.

    Character(int m_x, int m_y) // Ŭ������ �̸��� �����ϰ� �������־�� �մϴ�.
    {
        x = m_x;
        y = m_y;

        cout << "x : " << x << " y : " << y << endl;
    }

    // �Ҹ���
    // ��ü�� �Ҹ�� �� �ڵ����� ����Ǵ� Ŭ������ ��� �Լ��Դϴ�.
    ~Character() // ~Ŭ������ �̸����� �������־�� �մϴ�. 
    {
        cout << "Character�� �ı��Ǿ����ϴ�." << endl;
    }

    // const �Լ�
    // �Լ� ���ο��� ���� �������� ���ϵ��� ���ȭ�ϴ� �Լ��Դϴ�.
    void Talk() const
    {    
        cout << "��ȭ ����" << endl;
    }
};

int main()
{
    // �����ڿ� �Ҹ���
    /*
    Character character(6,7);

    character.Talk();

    Character * champion = new Character(1, 9);

    // champion <= 0
    delete champion;

    // cout << "character�� ũ�� : " << sizeof(character) << endl;
    */

    // Ŭ������ ����� ����
    /*
    Computer samsung;

    samsung.Power();
    */


    return 0;
}

