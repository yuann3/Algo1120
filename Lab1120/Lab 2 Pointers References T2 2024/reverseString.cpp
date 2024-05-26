//Lab2 Challenge Task
//file name: reverseString.cpp
//Student name: Yiyuan Li (C3434681)
//Date: 14 May
#include <iostream>
#include <string>

std::string reverse(const std::string& s)
{
    std::string reversed_string;
    for (int i = s.size() - 1; i >= 0; i--)
        reversed_string += s[i];
    return reversed_string;
}

// int main()
// {
//     std::string original = "university of newcastle";
//     std::string reversed = reverse(original);
//     std::cout << "Original: " << original << std::endl;
//     std::cout << "Reversed: " << reversed << std::endl;
// }
