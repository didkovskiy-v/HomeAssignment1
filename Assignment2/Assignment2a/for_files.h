/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment1
  */
#ifndef FOR_FILES_H
#define FOR_FILES_H

#include <string>
#include <vector>

class ForFiles {
public:
    static void processBinaryFile(const std::string& inputPath, const std::string& outputPath);
    static std::vector<char> readFile(const std::string& path);
    static void writeFile(const std::string& path, const std::vector<char>& data);
    static void reverseArray(std::vector<char>& arr);
    static std::size_t getFileSize(const std::string& path);
};

#endif
