#include <iostream> // c++ 입출력 헤더 <iostream> 
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
    // 벡터
    /*
    // 동적으로 연속적인 메모리을 할당하고 실행 시간에
    // 메모리의 크기를 변경할 수 있는 컨테이너입니다.

    vector<int> intVector;

    // push_back() : 벡터의 메모리 가장 끝에 값을 저장하는 함수
    intVector.push_back(100);
    intVector.push_back(200);
    intVector.push_back(300);
    intVector.push_back(400);
    intVector.push_back(500);

    // size() : 벡터의 크기를 반환하는 함수
    for (int i = 0; i < intVector.size(); i++)
    {
        cout << intVector[i] << endl;
    }

    // pop_back() : 벡터의 메모리 가장 끝에 값을 제거하는 함수
    intVector.pop_back();
    intVector.pop_back();
    intVector.pop_back();
    intVector.pop_back();
    intVector.pop_back();

    // intVector.empty() : 벡터의 메모리 가장 끝에 값을 제거하는 함수
    cout << "벡터의 메모리는 비어있는가 ? " << intVector.empty() << endl;

    cout << "벡터의 메모리 크기는 : " << intVector.size() << endl;

    cout << "벡터가 메모리가 할당되어 있는 공간 : " << intVector.capacity() << endl;

    */

    // 리듬 게임
    PlaySound(TEXT("BGM.wav"), NULL, SND_NODEFAULT | SND_ASYNC | SND_LOOP);

    vector<string> data;

    data.push_back("→");
    data.push_back("↓");
    data.push_back("↑");
    data.push_back("←");

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
                if ("↑" == data.back())
                {
                    data.pop_back();
                }
                break;
            case LEFT: 
                if ("←" == data.back())
                {
                    data.pop_back();
                }
                break;
            case RIGHT: 
                if ("→" == data.back())
                {
                    data.pop_back();
                }
                break;
            case DOWN: 
                if ("↓" == data.back())
                {
                    data.pop_back();
                }
                break;
        }

        system("cls");
    }


    return 0;
}

