#include <iostream> // c++ ����� ��� <iostream> 

using namespace std;

class Cat
{
public : 
    int age;
    char blood;
    double weight;
};

// �Լ��� �����ε�
// ���� �̸��� �Լ��� �Ű� ������ �ڷ����� �Ű� ������ ����
// �����Ͽ� ���� ���� ������ �� �ִ� ����Դϴ�.

// 2 ���� Vector �Լ�
void Vector(float x, float y)
{
    cout << "2���� Vector(float) �Լ�" << endl;
}

void Vector(int x, int y)
{
    cout << "2���� Vector(int) �Լ�" << endl;
}

// 3 ���� Vector �Լ�
void Vector(float x, float y, float z)
{
    cout << "3���� Vector(float) �Լ�" << endl;
}

void Vector(int x, int y, int z)
{
    cout << "3���� Vector(int) �Լ�" << endl;
}

// �Լ��� �����ε��� ��� �Լ��� �Ű� ������ �����ϴ�
// �μ��� ���¸� ���� ȣ���ϹǷ�, ��ȯ������ �Լ���
// �����ε��� ������ �� �����ϴ�.
/*
int Vector(int x, int y)
{
    return 0;
}
*/

// �Լ��� �������̵�
// ���� Ŭ������ �ִ� �Լ��� ���� Ŭ�������� �������Ͽ�
// ����ϴ� ����Դϴ�.
class Animal
{
public :
    void Sound()
    {
        cout << "������ �����Ҹ�" << endl;
    }
};

class Dog : public Animal
{
public:
    void Sound()
    {
        cout << "�������� �����Ҹ�" << endl;
    }

};

int main()
{
    // Ŭ���� ������ 
    /*
    // ������ ������Ʈ �ȿ��� ó������ �־��� ��ҳ� ���������� �������� 
    // ��Ÿ���� �������Դϴ�.
    Cat cat;

    cat.age = 5;
    cat.blood = 'O';
    cat.weight = 5.75f;

    cout << (int)(&(((Cat*)0)->age)) << endl;
    cout << (int)(&(((Cat*)0)->blood)) << endl;
    cout << (int)(&(((Cat*)0)->weight)) << endl;

    cout << "cat�� �޸� ũ�� : " << sizeof(cat) << endl;
    */

    // �������̶�?
    // ���� ���� ���� �ٸ� ��ü�� ������ ����� ���� �ٸ�
    // ������� ó���� �� �ִ� �۾��Դϴ�.

    // �Լ��� �����ε�
    /*
    Vector(10, 20);
    Vector(10, 20, 30);

    Vector(5.95f, 25.5f);
    Vector(10.75f, 15.35f, 2.5f);
    */

    // �Լ��� �������̵�� ��� ���迡���� �̷������,
    // ���� Ŭ�������� �Լ��� �������� �� ���� Ŭ������
    // �Լ� ���¿� ��ġ�ؾ� �մϴ�.

    Dog * dog = new Dog();
    dog->Sound();

    Animal * animal = new Animal();
    animal->Sound();

    animal = dog;

    animal->Sound();
    return 0;
}

