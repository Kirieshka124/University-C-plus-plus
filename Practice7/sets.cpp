#include <iostream>
#include <set>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    set<int> A, B; 
    int n, m, element;

    
    cout << "Введите количество элементов в множестве A: ";
    cin >> n;
    cout << "Введите элементы множества A: ";
    for (int i = 0; i < n; ++i) {
        cin >> element;
        A.insert(element); 
    }

    cout << "Введите количество элементов в множестве B: ";
    cin >> m;
    cout << "Введите элементы множества B: ";
    for (int i = 0; i < m; ++i) {
        cin >> element;
        B.insert(element); 
    }

   
    set<int> result;

   
    for (int num : A) {
        if (B.count(num) && num % 3 == 0) {
            result.insert(num);
        }
    }

    
    cout << "Общее множество, кратное 3: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}