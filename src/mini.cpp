#include <iostream>
#include <string>
#include "mini.h"

void Run(void (*mulai)(), void (*selesai)(const std::string&)) {
    std::string inputPengguna;
    
    std::cout << "[Memulai Framework]" << std::endl;

    mulai();

    while (true) {
        std::cin >> inputPengguna;
        if (inputPengguna == "keluar") {
            break;
        }

        selesai(inputPengguna);
    }

    std::cout << "[Mengakhiri Framework]" << std::endl;
};