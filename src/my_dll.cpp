//
// Created by HP on 2023/11/28.
//
#include <iostream>

#ifdef _WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

extern "C" {
EXPORT void Message() {
    std::cout <<"no"<< std::endl;
}

EXPORT int add(int a, int b) {
    return a + b;
}
}
