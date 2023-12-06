//
// Created by HP on 2023/11/28.
//
//隐式调用
#include <iostream>

extern "C" {
    void Message(){
        std::cout<<"this is a message"<<std::endl;
    }
    int add(int a, int b){
        return a+b;
    }
}

int main() {
    int num1;
    int num2;
    std::cout<<"please put into two numbers"<<std::endl;
    Message();
    std::cin>>num1;
    std::cin>>num2;

    int result = add(num1,num2);
    std::cout << "Result of addNumbers: " << result << std::endl;
    std::cout<<result<<std::endl;

    return 0;
}
