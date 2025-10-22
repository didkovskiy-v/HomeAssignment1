/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment2a
  */
#include "for_files.h"
#include <fstream>
#include <filesystem>
#include <algorithm>

std::size_t ForFiles::getFileSize(const std::string& path) {
    return std::filesystem::file_size(path);
}

std::vector<char> ForFiles::readFile(const std::string& path) {
    std::ifstream infile(path, std::ios::binary);
    std::size_t size = getFileSize(path);
    std::vector<char> buffer(size);
    infile.read(buffer.data(), size);
    return buffer;
}

void ForFiles::writeFile(const std::string& path, const std::vector<char>& data) {
    std::ofstream outfile(path, std::ios::binary);
    outfile.write(data.data(), data.size());
}

void ForFiles::reverseArray(std::vector<char>& arr) {
    std::size_t N = arr.size();
    for (std::size_t i = 0; i < N / 2; ++i) {
        char tmp = arr[i];
        arr[i] = arr[N - 1 - i];
        arr[N - 1 - i] = tmp;
    }
}

void ForFiles::processBinaryFile(const std::string& inputPath, const std::string& outputPath) {
    auto data = readFile(inputPath);
    reverseArray(data);
    writeFile(outputPath, data);
}
