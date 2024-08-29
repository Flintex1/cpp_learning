#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// Структура для хранения пары значений: номер и название трека
struct Track {
    int rank;        // Рейтинг
    std::string name; // Название трека
};

// Функция сравнения для сортировки треков по рейтингу
bool compareTracks(const Track& a, const Track& b) {
    return a.rank < b.rank;
}

int main() {
    std::vector<Track> tracks(3);  // Вектор для хранения трёх треков

    // Ввод треков от пользователя
    for (int i = 0; i < 3; ++i) {
        std::cout << "Введите название вашего любимого музыкальноно трека #" << (i + 1) << ": ";
        std::getline(std::cin, tracks[i].name);  // Ввод названия трека

        std::cout << "Введите рейтинг для этого музыкальноно трека: ";
        std::cin >> tracks[i].rank;  // Ввод рейтинга
        std::cin.ignore();            // Игнорирование оставшегося символа новой строки
    }

    // Сортировка треков по степени любимости
    std::sort(tracks.begin(), tracks.end(), compareTracks);

    // Вывод отсортированных треков
    std::cout << "\nВаши любимые музыкальноно треки в порядке их значимости:\n";
    for (const auto& track : tracks) {
        std::cout << track.rank << ": " << track.name << '\n';
    }

    return 0;
}
