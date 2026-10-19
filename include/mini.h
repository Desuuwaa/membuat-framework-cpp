#pragma once
#include <string>

// void Run(void (*mulai)(), void (*selesai)(const std::string&));

class MiniApp {
    private:
        std::string judul;
        int jumlahInput = 0;
        void (*saatMulai)() = nullptr;
        void (*saatInput)(const std::string&) = nullptr;

    public:
        MiniApp(const std::string& judul);
        void Start(void (*saatMulai)());
        void Update(void (*saatInput)(const std::string&));
        void Run();
};