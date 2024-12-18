#include <fstream>

int main() {
    std::ifstream file("example.txt");

    if (file.is_open()) {
        std::string line;

        while (!file.eof()) {
            std::getline(file, line)
            std::cout << line << std::endl;
        }

        file.close();   
    } else {
        std::cout << "Failed to open file" << std::endl;
    }
    return 0;
}
