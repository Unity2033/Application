#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 10000
#include <iostream> // c++ ����� ��� <iostream> 

using namespace std;

void Function(const char * textName)
{
    FILE* file = fopen(textName, "r");

    char buffer[BUFFER_SIZE] = { 0, };

    fread(buffer, 1, BUFFER_SIZE, file);
    printf("%s", buffer);

    fclose(file);

}

int main()
{
    // ���� �����
    // fopen(������ �̸�, ���� ���)
    // w = write <- ����
    // r = read <- �б� 
    
    // FILE * file = fopen("data.txt", "w");
    // fputs("Game Password", file);
    // fclose(file);

    // ���� �ҷ����� 
    Function("Dragon.txt");

    return 0;
}

