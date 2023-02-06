#include <iostream> // c++ ����� ��� <iostream> 
#include <stack>
#include <queue>

using namespace std;

// ���ø� 
// ������ ���Ŀ� �������� �ʰ�, �ϳ��� ���� ���� �ٸ� ������ Ÿ��
// ���� ���� �� �ִ� ����� ������ �ξ� ���뼺�� ���� �� �ִ�
// ���α׷��� ����Դϴ�.

template <typename T>
void Calculator(T x, T y)
{
    cout << "x + y = " << x + y << endl;
}

// ���ø��� Ư��ȭ
// ���ø� �Լ��� ���������, Ư�� �Ű������� ���ؼ�
// ������ ó���� �ϰ� ���� �� ����ϴ� ����Դϴ�.
template<>
void Calculator(const char* x, const char* y)
{
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}

template <typename T>
class DataStruct
{
private:
    T data;

public:
    void Push(T x)
    {
        cout << x << "�� ���� ���Խ��ϴ�." << endl;
    }
};


void DataTable(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "array[" << i << "] = " << array[i] << endl;
    }
}

int main()
{
    // ���ø�
    /*
    //Calculator(10, 20);
    //Calculator(5.6, 7.12);
    //Calculator('A', 'B');

    //Calculator("count", "Down");

    DataStruct<char> charStruct;
    charStruct.Push('A');
    charStruct.Push('B');
    charStruct.Push('C');
    charStruct.Push('D');
    */

    // ����
    /*
    stack<int> intStack;

    // push( ) : ���ÿ� �����͸� �����ϴ� �Լ�
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);

    // size( ) : ���� ���ÿ� ũ�⸦ ��ȯ�ϴ� �Լ�
    cout << "������ ũ�� : " << intStack.size() << endl;

    // pop() : ���ÿ� �����͸� �����ϴ� �Լ�
    intStack.pop();

    // top() : ���ÿ� ���� ���� �ִ� �����͸� ��ȯ�ϴ� �Լ�
    cout << intStack.top() << endl;

    // empty() : ���ÿ� �����Ͱ� ����ִ��� Ȯ���ϴ� �Լ�
    cout << intStack.empty() << endl;


    // ����
    // 1, 2, 3, 4, 5
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);
    intStack.push(4);
    intStack.push(5);

    while (intStack.empty() == 0)
    {
        cout << intStack.top() << endl;
        intStack.pop();
    }
    */

    // ť
    /*
    queue<int> intQueue;

    intQueue.push(1);
    intQueue.push(2);
    intQueue.push(3);
    intQueue.push(4);
    intQueue.push(5);

    while (intQueue.empty() == 0)
    {
        cout << intQueue.front() << endl;
        intQueue.pop();
    }
    */

    int room[5] = { 1, 2, 3, 4, 5 };

    DataTable(room, 5);

    // 10�� �Ǵ� 20



    return 0;
}

