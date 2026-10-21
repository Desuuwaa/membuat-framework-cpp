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

void SelectionSort(int (&data)[10]) {
    int panjangElemen = sizeof(data) / sizeof(data[0]);

    for (int i = 0; i < panjangElemen - 1; i++) {
        int p = i;

        for (int j = i + 1; j < panjangElemen; j++) {
            if (data[j] < data[p]) {
                p = j;
            }
        }

        if (i != p) {
            Swap(data[i], data[p]);
        }
    }
}

void Swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}