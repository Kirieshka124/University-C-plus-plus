#include <iostream>
#include <set>

using namespace std;

set<int> Combos(set<int> set1, set<int> set2, set<int> res) {
  for (int num : set1) {
    if (set2.count(num) && num % 3 == 0) {
        res.insert(num);
    }
  }
  return res;
}

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
    

    
    set<int>final = Combos(A, B, result);

    
    cout << "Общее множество, кратное 3: ";
    for (int num : final) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}