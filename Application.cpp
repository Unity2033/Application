#include <iostream> // c++ 입출력 헤더 <iostream> 
#include <math.h> // 수학 관련 라이브러리

char alphabet = 'B';

struct Player
{
    int x;
    int y;
};

struct Monster
{
    int x;
    int y;
};

int main()
{
    // c++ 입출력 
    /*
    bool condition = true; // 1 byte 메모리

    char blood = 'A';
    int value = 100;
    float pi = 3.14;
    
    // C++에서 변수를 입력받는 방법
    // >> (추출 연산자)
    // 버퍼 안에 있는 내용을 저장시킬 수 있는
    // 연산자입니다.
    // std::cin >> value;

    if (condition)
    {
        // << (삽입 연산자)
        // 입력된 데이터는 출력 장치로 전달하며,
        // "<<" 연산자를 사용하여 자신이 참조한 값을
        // 반환하는 연산자입니다.

        std::cout << "안녕하세요." << std::endl;
        std::cout << blood << std::endl;
        std::cout << value << std::endl;
        std::cout << pi << std::endl;
    }
    */

    // 범위 지정 연산자
    /*
    // 여러 범위에서 사용되는 식별자를 구분하는데
    // 사용하는 연산자입니다.
    char alphabet = 'A';
    
    std::cout << "지역 변수 alphabet의 값 : " << alphabet << std::endl;
    std::cout << "전역 변수 alphabet의 값 : " << ::alphabet << std::endl;
    */

    // 문자열
    /*
    std::string name = "Leesin";

    std::cout << "name의 값 : " << name << std::endl;
    */

    Player player;
    Monster monster = {5, 5};

    player.x = 0;
    player.y = 0;

    int tempX = player.x - monster.x;
    int tempY = player.y - monster.y;

    // 루트
    std::cout << sqrt(pow(tempX,2) + pow(tempY,2)) << std::endl;

    // 거듭제곱
    // std::cout << pow(10, 2) << std::endl;

}

