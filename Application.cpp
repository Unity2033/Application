#include <iostream> // c++ ����� ��� <iostream> 

using namespace std;

class Person
{
public:
    virtual void Talk()
    {
        cout << "���ϱ�" << endl;
    }
};

class Student : public Person
{
public:
    void Study()
    {
        cout << "�н� ��~" << endl;
    }

    // final�̶�?
    // Ư���� ��� ���������� ����ϰڴٰ� �����ϴ� Ű�����Դϴ�.
    void Talk() final
    {
        cout << "�л��� �����Ѵ�." << endl;
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
        cout << "����" << endl;
    }

    virtual void Move()
    {
        cout << "�̵�" << endl;
    }
};

class B : public A
{
public :
    void Attack()
    {
        cout << "Į ��� ����" << endl;
    }

    void Move()
    {
        cout << "Į ��� �̵�" << endl;
    }
};

int main()
{
    // ���� Ŭ���� <- ���� Ŭ���� 
    // ��ĳ�����̶�?
    /*
    // ���� Ŭ������ ������ ���� �� �ִ� ��ü��
    // ���� Ŭ������ �ڷ����� �ο��ؼ� ����Ŭ����ó�� 
    // ����ϴ� ĳ�����Դϴ�.

    A * aptr;

    B * bptr = new B();

    aptr = bptr;

    aptr->AClass();
    */

    // �ٿ�ĳ����
    // ���� Ŭ���� <- ���� Ŭ���� 

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

