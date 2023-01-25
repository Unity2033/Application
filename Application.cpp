#include <iostream> // c++ ����� ��� <iostream> 

using namespace std;

class IPhone
{
public :
    int * version;

    IPhone()
    {
        version = new int;
        cout << "�⺻ ������ ȣ��" << endl;
    }

    // ���� ������
    IPhone(const IPhone & copyIPhone)
    {
        // ���� �����?
        // ��ü�� ������ ��, ���� ���� �ƴ� �ν��Ͻ� ��ü�� ���� 
        // �����Ͽ� ���� �ٸ� �޸𸮸� �����ϴ� �����Դϴ�.
        version = new int;
        *version = *copyIPhone.version;

        cout << "���� ������ ȣ��" << endl;
        cout << "version : " << *version << endl;
    }

    ~IPhone()
    {
        delete version;
    }
};

int main()
{
    // ���� �����ڶ�?
    /*
    // ���� ��ü�� �����Ͽ� ������ų �� ȣ��Ǵ� �������Դϴ�.  
    IPhone se1;

    se1.price = 100000;
    se1.size = 5;

    // se2(se1)
    IPhone se2 = se1;
    */

    // ���� ����
    // ��ü�� ������ �� �ּڰ��� �����Ͽ� ���� �޸𸮸� ����Ű��
    // �����Դϴ�.

    IPhone se1;

    *se1.version = 10;

    // se2(se1)
    IPhone se2 = se1;

    *se2.version = 20;

    cout << "*se1.version�� �� : " << *se1.version << endl;
    cout << "*se2.version�� �� : " << *se2.version << endl;

    return 0;
}

