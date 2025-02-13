#include <iostream>
#include <cstring>
#include <windows.h>

void __attribute__((noinline)) supersecret() {
    std::cout << "CTF{belajar_cpp_kang_ini_aryok}" << std::endl;
    system("pause");
}

void __attribute__((noinline)) vulnerable_function() {
    char buffer[32];
    std::cout << "Masukkan kode akses: ";
    gets(buffer);
    std::cout << "Input diterima: " << buffer << std::endl;
}

int main() {
    std::cout << "=== Program Super Aman v1.0 ===" << std::endl;
    std::cout << "Dapatkah kamu menemukan flagnya?" << std::endl;
    vulnerable_function();
    return 0;
}