#include <iostream>
#include <string>


int main(){

    std::string userNumber1, operation, userNumber2;
    int ans = 0;

    std::cout << "Welcome to Caculator 1.0! Type the first number below:" << std::endl;

    std::cin >> userNumber1;

    std::cout << "Choose an operation (+, -, *, /):" << std::endl;

    std::cin >> operation;

    std::cout << "Type the second number below:" << std::endl;

    std::cin >> userNumber2;

    if (operation == "+"){
        ans = stoi(userNumber1) + stoi(userNumber2);
    }
    else if (operation == "-"){
        ans = stoi(userNumber1) - stoi(userNumber2);
    }
    else if (operation == "*"){
        ans = stoi(userNumber1) * stoi(userNumber2);
    }
    else if (operation == "/"){
        ans = stoi(userNumber1) / stoi(userNumber2);
    }
    else{
        std::cout << "Error" << std::endl;
    }

    std::cout << "You answer is: " << ans << std::endl;

    return 0;
    
}