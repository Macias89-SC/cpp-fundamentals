#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    if (command == "add") {
        int AddNumber = first + second;
        std::string str = std::to_string(AddNumber);
        return str;
    }
    else if (command == "subtract"){
        int SubNumber = first - second;
        std:: string  str = std::to_string(SubNumber);
        return str;
    }
    else if (command == "multiply"){
        int MultiNumber = first * second;
        std::string  str = std::to_string(MultiNumber);
        return str;
    }
    else if ( command == "divide"){
        if (second !=0){
            int DivNumber = first / second;
            std::string  str = std::to_string(DivNumber);
            return str;
        }
        else
        {
            return "Division by 0";
        }

    }
    else
    return "Invalid data";
}
