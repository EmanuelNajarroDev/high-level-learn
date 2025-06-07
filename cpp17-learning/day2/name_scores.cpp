#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main(){

    std::vector<Student> students = {
        {"Alice", 88},
        {"Bob", 92},
        {"Charlie", 75}
    };

    std::string filename = "students.txt";

    saveToFile(students, filename);

    std::vector<Student> loadedStudents = readFromFile(filename);

    displayReport(loadedStudents);

    return 0;

}

struct Student {
    std::string name;
    int score;
};

void saveToFile(const std::vector<Student>& students, const std::string& filename) {
    std::ofstream file(filename);

    if (!file.is_open()) {
        std::cerr << "Could not open the file for writing!\n";
        return;
    }

    for (const auto& student : students) {
        file << student.name << " " << student.score << "\n";
    }

    file.close();
    std::cout << "Data saved to " << filename << "\n";
}

std::vector<Student> readFromFile(const std::string& filename) {
    std::vector<Student> students;
    std::ifstream file(filename);

    if (!file.is_open()) {
        std::cerr << "Could not open the file for reading!\n";
        return students;
    }

    Student s;
    while (file >> s.name >> s.score) {
        students.push_back(s);
    }

    file.close();
    return students;
}

void displayReport(const std::vector<Student>& students) {
    std::cout << "\n--- Student Report ---\n";
    for (const auto& student : students) {
        std::cout << student.name << " scored " << student.score << "\n";
    }
}

