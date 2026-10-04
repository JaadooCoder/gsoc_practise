#include <iostream>
#include <string>
#include <chrono>

int main() 
    {
        std::string name;
        int age;
        std::cout << "Enter your full name: ";
        std::getline(std::cin, name);
        std::cout << "Enter your age: ";
        std::cin >> age;
        auto now = std::chrono::system_clock::now();
        std::chrono::year_month_day current_date{std::chrono::floor<std::chrono::days>(now)};
        int year = static_cast<int>(current_date.year());
        std::cout << "\nHello " << name << ", you are " << age << " years old!" << std::endl;
        std::cout << "\n Your Year of Birth is " << (year - age) << std::endl;
        return 0;
    }