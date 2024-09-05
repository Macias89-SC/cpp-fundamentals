#include <iostream>
#include <string>

// TODO: Implement modifyString()
// It should modify passed string to text "Other string"
std::string modifyString(std::string& MyString){
    return MyString="Other string";
}

int main() {
    std::string str{"Some string"};
    modifyString(str);
    std::cout << str << '\n';
    return 0;
}
