#include <iostream>
#include<Windows.h>

int main() {
    system("chcp 1251");
    system("cls");
    int M;
    std::cout << "������ ����� ������ A (M): ";
    std::cin >> M;

    
    int* A = new int[M];

    std::cout << "������ �������� ������ A:" << std::endl;
    for (int i = 0; i < M; i++) {
        std::cout << "A[" << i << "]: ";
        std::cin >> A[i];
    }

    std::cout << "���������� ����� A:" << std::endl;
    for (int i = 0; i < M; i++) {
        std::cout << "A[" << i << "]: " << A[i] << std::endl;
    }

    int choice;
    std::cout << "������ �������� ��� ���������:" << std::endl;
    std::cout << "1. �������� ���� ��������" << std::endl;
    std::cout << "2. �������� ������ ��������" << std::endl;
    std::cin >> choice;

    int newSize = 0;
    for (int i = 0; i < M; i++) {
        if ((choice == 1 && A[i] % 2 != 0) || (choice == 2 && A[i] % 2 == 0)) {
            newSize++;
        }
    }

    
    int* newArray = new int[newSize];
    int newIndex = 0;

    for (int i = 0; i < M; i++) {
        if ((choice == 1 && A[i] % 2 != 0) || (choice == 2 && A[i] % 2 == 0)) {
            newArray[newIndex] = A[i];
            newIndex++;
        }
    }

    delete[] A;

    
    A = newArray;

    std::cout << "��������� ����� A:" << std::endl;
    for (int i = 0; i < newSize; i++) {
        std::cout << "A[" << i << "]: " << A[i] << std::endl;
    }

    
    delete[] A;

    return 0;
}
