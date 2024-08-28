#include <iostream>
#include <vector>

// Функция для замены четных элементов вектора на нечетные элементы списка
std::vector<int> mixVectorWithList(const std::vector<int>& myVector, const std::vector<int>& myList) {
    std::vector<int> result = myVector; // Создаем копию исходного вектора для изменения
    size_t listIndex = 0; // Индекс для прохода по списку

    for (size_t i = 0; i < result.size(); ++i) {
        if (result[i] % 2 == 0 && listIndex < myList.size()) { // Проверка четности элемента и наличия элементов в списке
            result[i] = myList[listIndex++]; // Замена четного элемента и переход к следующему элементу списка
        }
    }

    return result;
}

int main() {
    std::vector<int> someVector;
    std::vector<int> someList;
    int n, m, value;

    // Ввод размера и элементов вектора
    std::cout << "Укажите размер вектора: ";
    std::cin >> n;

    std::cout << "Введите элементы вектора через пробел:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> value;
        someVector.push_back(value);
    }

    // Ввод размера и элементов списка
    std::cout << "Укажите размер списка: ";
    std::cin >> m;

    std::cout << "Введите элементы списка через пробел:\n";
    for (int i = 0; i < m; ++i) {
        std::cin >> value;
        someList.push_back(value);
    }

    // Вывод исходного вектора
    std::cout << "someVector:\n";
    for (int num : someVector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Вывод исходного списка
    std::cout << "someList:\n";
    for (int num : someList) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Построение и вывод смешанного вектора
    std::vector<int> mixedVector = mixVectorWithList(someVector, someList);

    std::cout << "Смешанный вектор:\n";
    for (int num : mixedVector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
