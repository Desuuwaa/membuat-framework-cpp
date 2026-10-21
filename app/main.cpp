#include <iostream>
#include <string>
#include "halo.h"
#include "mini.h"
#include "matematika.h"


void pertama();
void kedua(const std::string& dataMasuk);


int main() {
    MiniApp app("MyFramework");

    app.Start(pertama);
    app.Update(kedua);
    app.Run();

    return 0;
}


void pertama() {
    std::cout << "Helo Helo!" << std::endl;
}

void kedua(const std::string& dataMasuk) {
    int angka[10] = {5, 10, 2, 8, 4, 3, 6, 9, 1, 7};

    std::cout << "Data sebelum diurut: " << std::endl;

    for (int i : angka) {
        std::cout << i << ", ";
    }

    std::cout << std::endl;

    SelectionSort(angka);

    std::cout << "Data setelah diurut: " << std::endl;

    for (int i : angka) {
        std::cout << i << ", ";
    }

    std::cout << std::endl;
}