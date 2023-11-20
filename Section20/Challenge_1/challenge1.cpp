// Section 20
// Challenge 1
// Identifying palindrome strings using a deque
#include <cctype>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
// #include <algorithm>

bool is_palindrome(const std::string& s)
{
    std::deque<char> string {};
    auto start = s.begin();

    while (start != s.end()){
        if (isalnum(*start)){
            string.push_back(::toupper(*start));
        }
        start++;
    }
    if (std::equal(string.begin(), string.end(), string.rbegin())){
        return true;
    }
    else { return false;}
}

int main()
{
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
    }
    std::cout << std::endl;
    // std::string test {"hejs!,  3 .,.,.,- an"};
    // is_palindrome(test);

    return 0;
}