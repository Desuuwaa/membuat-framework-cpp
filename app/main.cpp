#include <iostream>
#include <string>
#include "halo.h"
#include "mini.h"


void pertama();
void kedua(const std::string& dataMasuk);


int main() {
    greeting();
    Run(pertama, kedua);

    return 0;
}


void pertama() {
    std::cout << "Ini adalah fungsi pertama-ku" << std::endl;
}

void kedua(const std::string& dataMasuk) {
    std::cout << "Aku mengetik: " << dataMasuk << std::endl;
}