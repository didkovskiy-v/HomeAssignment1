/*
  * Vatslav Didkovskiy
  * st142215@student.spbu.ru
  * HomeAssignment1
  */
#include "for_files.h"

int main(int argc, char* argv[]) {
    const char* input = (argc > 1) ? argv[1] : "source.pdf";
    const char* output = (argc > 2) ? argv[2] : "temppdf.pdf";

    ForFiles::processBinaryFile(input, output);
    return 0;
}
