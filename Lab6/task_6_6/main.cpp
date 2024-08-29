#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// ������� ��� �࠭���� ���� ���祭��: ����� � �������� �४�
struct Track {
    int rank;        // ���⨭�
    std::string name; // �������� �४�
};

// �㭪�� �ࠢ����� ��� ���஢�� �४�� �� ३⨭��
bool compareTracks(const Track& a, const Track& b) {
    return a.rank < b.rank;
}

int main() {
    std::vector<Track> tracks(3);  // ����� ��� �࠭���� ���� �४��

    // ���� �४�� �� ���짮��⥫�
    for (int i = 0; i < 3; ++i) {
        std::cout << "������ �������� ��襣� ����� ��몠�쭮�� �४� #" << (i + 1) << ": ";
        std::getline(std::cin, tracks[i].name);  // ���� �������� �४�

        std::cout << "������ ३⨭� ��� �⮣� ��몠�쭮�� �४�: ";
        std::cin >> tracks[i].rank;  // ���� ३⨭��
        std::cin.ignore();            // �����஢���� ��⠢襣��� ᨬ���� ����� ��ப�
    }

    // ����஢�� �४�� �� �⥯��� �����
    std::sort(tracks.begin(), tracks.end(), compareTracks);

    // �뢮� �����஢����� �४��
    std::cout << "\n��� ��� ��몠�쭮�� �४� � ���浪� �� ���稬���:\n";
    for (const auto& track : tracks) {
        std::cout << track.rank << ": " << track.name << '\n';
    }

    return 0;
}
