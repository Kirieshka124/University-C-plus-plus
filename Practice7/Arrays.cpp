#include <iostream>

void findMul(const int* array, int size, int& mul) {
    mul = 1;
    for (int i = 0; i < size; i++ ) {
        mul *= array[i];
    }
}
void MinMul(const int* arrayA, const int* arrayB, int size1, int size2) {
    int mulA = 0, mulB = 0;

    findMul(arrayA, size1, mulA);
    findMul(arrayB, size2, mulB);

    if (mulA > mulB) {
        std::wcout << L"Массив B имеет наименьшee произведение: " << mulB << std::endl;
        
    }
    else {
        std::wcout << L"Массив A имеет наименьшее произведение: " << mulA << std::endl;
        
    }
    std::cout << std::endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int NumberA, NumberB;

    std::wcout << L"Введите размер массива A (N): ";
    std::cin >> NumberA;
    int* A = new int[NumberA];


    std::wcout << L"Введите " << NumberA << L" элементов для массива A:" << std::endl;
    for (int i = 0; i < NumberA; i++) {
        std::cin >> A[i];
    }

    std::wcout << L"Введите размер массива B (N): ";
    std::cin >> NumberB;
    int* B = new int[NumberB];

    std::wcout << L"Введите " << NumberB << L" элементов для массива B:" << std::endl;
    for (int i = 0; i < NumberB; i++) {
        std::cin >> B[i];
    }

    MinMul(A, B, NumberA, NumberB);

    delete[] A;
    delete[] B;

    
    return 0;
}