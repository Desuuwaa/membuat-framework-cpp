#include <iostream>
#include <string>
#include "matematika.h"

void Swap(int& x, int& y);


void BubbleSort(int (&data)[10]) {
    int panjangElemen = sizeof(data) / sizeof(data[0]);
    
    for (int i = 0; i < panjangElemen; i++) {
        for (int j = 0; j < panjangElemen - 1; j++) {
            if (data[j] > data[j+1]) {
                Swap(data[j], data[j+1]);
            }
        }
    }
}

void Swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}