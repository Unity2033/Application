#include <iostream> // c++ 입출력 헤더 <iostream> 

using namespace std;

class Cat
{
public : 
    int age;
    char blood;
    double weight;
};

// 함수의 오버로딩
// 같은 이름의 함수를 매개 변수의 자료형과 매개 변수의 수로
// 구분하여 여러 개를 선언할 수 있는 기능입니다.

// 2 차원 Vector 함수
void Vector(float x, float y)
{
    cout << "2차원 Vector(float) 함수" << endl;
}

void Vector(int x, int y)
{
    cout << "2차원 Vector(int) 함수" << endl;
}

// 3 차원 Vector 함수
void Vector(float x, float y, float z)
{
    cout << "3차원 Vector(float) 함수" << endl;
}

void Vector(int x, int y, int z)
{
    cout << "3차원 Vector(int) 함수" << endl;
}

// 함수의 오버로딩의 경우 함수의 매개 변수에 전달하는
// 인수의 형태를 보고 호출하므로, 반환형으로 함수의
// 오버로딩을 생성할 수 없습니다.
/*
int Vector(int x, int y)
{
    return 0;
}
*/

// 함수의 오버라이드
// 상위 클래스에 있는 함수를 하위 클래스에서 재정의하여
// 사용하는 기능입니다.
class Animal
{
public :
    void Sound()
    {
        cout << "동물의 울음소리" << endl;
    }
};

class Dog : public Animal
{
public:
    void Sound()
    {
        cout << "강아지의 울음소리" << endl;
    }

};

int main()
{
    // 클래스 오프셋 
    /*
    // 동일한 프로젝트 안에서 처음부터 주어진 요소나 지점까지의 변위차를 
    // 나타내는 정수형입니다.
    Cat cat;

    cat.age = 5;
    cat.blood = 'O';
    cat.weight = 5.75f;

    cout << (int)(&(((Cat*)0)->age)) << endl;
    cout << (int)(&(((Cat*)0)->blood)) << endl;
    cout << (int)(&(((Cat*)0)->weight)) << endl;

    cout << "cat의 메모리 크기 : " << sizeof(cat) << endl;
    */

    // 다형성이란?
    // 여러 개의 서로 다른 객체가 동일한 기능을 서로 다른
    // 방법으로 처리할 수 있는 작업입니다.

    // 함수의 오버로딩
    /*
    Vector(10, 20);
    Vector(10, 20, 30);

    Vector(5.95f, 25.5f);
    Vector(10.75f, 15.35f, 2.5f);
    */

    // 함수의 오버라이드는 상속 관계에서만 이루어지며,
    // 하위 클래스에서 함수를 재정의할 때 상위 클래스의
    // 함수 형태와 일치해야 합니다.

    Dog * dog = new Dog();
    dog->Sound();

    Animal * animal = new Animal();
    animal->Sound();

    animal = dog;

    animal->Sound();
    return 0;
}

