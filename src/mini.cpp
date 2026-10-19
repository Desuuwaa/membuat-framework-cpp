#include <iostream>
#include <string>
#include "mini.h"


MiniApp::MiniApp(const std::string& judul) {
    this->judul = judul;
}

void MiniApp::Start(void (*aksi)()) {
    saatMulai = aksi;
}

void MiniApp::Update(void (*aksi)(const std::string&)) {
    saatInput = aksi;
}

void MiniApp::Run() {
    std::cout << "[" << judul << " dimulai]" << std::endl;

    if (saatMulai != nullptr) {
        saatMulai();
    }

    std::string masukkan;
    while (std::cin >> masukkan) {
        if (masukkan == "keluar") {
            break;
        }

        jumlahInput++;

        if (saatInput != nullptr) {
            saatInput(masukkan);
        }
    }

    std::cout << "[Selesai, total input: " << jumlahInput << "]" << std::endl;
}