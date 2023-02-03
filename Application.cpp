#include <iostream> // c++ ����� ��� <iostream> 
#include <vector>
#include <conio.h>
#include <windows.h>

using namespace std;

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

int main()
{
    // ����
    /*
    // �������� �������� �޸��� �Ҵ��ϰ� ���� �ð���
    // �޸��� ũ�⸦ ������ �� �ִ� �����̳��Դϴ�.

    vector<int> intVector;

    // push_back() : ������ �޸� ���� ���� ���� �����ϴ� �Լ�
    intVector.push_back(100);
    intVector.push_back(200);
    intVector.push_back(300);
    intVector.push_back(400);
    intVector.push_back(500);

    // size() : ������ ũ�⸦ ��ȯ�ϴ� �Լ�
    for (int i = 0; i < intVector.size(); i++)
    {
        cout << intVector[i] << endl;
    }

    // pop_back() : ������ �޸� ���� ���� ���� �����ϴ� �Լ�
    intVector.pop_back();
    intVector.pop_back();
    intVector.pop_back();
    intVector.pop_back();
    intVector.pop_back();

    // intVector.empty() : ������ �޸� ���� ���� ���� �����ϴ� �Լ�
    cout << "������ �޸𸮴� ����ִ°� ? " << intVector.empty() << endl;

    cout << "������ �޸� ũ��� : " << intVector.size() << endl;

    cout << "���Ͱ� �޸𸮰� �Ҵ�Ǿ� �ִ� ���� : " << intVector.capacity() << endl;

    */

    // ���� ����
    PlaySound(TEXT("BGM.wav"), NULL, SND_NODEFAULT | SND_ASYNC | SND_LOOP);

    vector<string> data;

    data.push_back("��");
    data.push_back("��");
    data.push_back("��");
    data.push_back("��");

    char key;

    while (1)
    {
        for (int i = 0; i < data.size(); i++)
        {
            cout << data[i] << "  ";
        }

        if (data.size() == 0)
        {
            break;
        }

        key = _getch();

        switch (key)
        {
        case UP :
                if ("��" == data.back())
                {
                    data.pop_back();
                }
                break;
            case LEFT: 
                if ("��" == data.back())
                {
                    data.pop_back();
                }
                break;
            case RIGHT: 
                if ("��" == data.back())
                {
                    data.pop_back();
                }
                break;
            case DOWN: 
                if ("��" == data.back())
                {
                    data.pop_back();
                }
                break;
        }

        system("cls");
    }


    return 0;
}

