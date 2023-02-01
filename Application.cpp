#include <iostream> // c++ ����� ��� <iostream> 
#include <list>

using namespace std;

// ���� �Ҹ���
/*
class classA
{
public:
    classA()
    {
        cout << "class A ����" << endl;
    }

    virtual ~classA()
    {
        cout << "class A �Ҹ�" << endl;
    }
};

class classB : public classA
{
public:
    classB()
    {
        cout << "class B ����" << endl;
    }

    void Hello()
    {
        cout << "classB Hello" << endl;
    }

    ~classB()
    {
        cout << "class B �Ҹ�" << endl;
    }
};
*/

int main()
{
    // ���� �Ҹ���
    /*
    // ��ü�� �Ҹ�� �� ���� �����ϰ� �ִ� ��ü�� �������
    // ��� ȣ��Ǵ� �Ҹ����Դϴ�.
    classB * pb = new classB();
    pb->Hello();

    classA * pa = pb;

    delete pa;
    */

    // STL (Standard Template Library)
    list<int> intList;

    intList.push_back(10);
    intList.push_back(20);
    intList.push_back(30); 
    intList.push_back(40);

    cout << "intList�� ������ : " << intList.size() << endl;

    // intList.empty() : ����Ʈ�� ������ ����ִٸ� true ��ȯ�ϴ� �Լ�
    while (intList.empty() != true)
    {
        // intList.front() : ����Ʈ�� ���� �տ� �ִ� �����͸� ������ִ� �Լ�
        cout << intList.front() << endl;
        // intList.pop_front() : ����Ʈ�� ���� �տ� �ִ� �����͸� �����ϴ� �Լ�
        intList.pop_front();
    }

    return 0;
}

