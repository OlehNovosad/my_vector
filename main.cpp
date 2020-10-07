#include "my_vector.h"

int main() {
    my_vector<int> integers1 = {1, 2, 3, 4};
    my_vector<char> chars = {'a', 'b'};
    my_vector<float> floats = {1.1, 2.1};

/*
 *  Need Help
 *  my_vector<std::string>string_test{};
 * */

    /*****  Integer   *****/
    std::cout << "Integer" << std::endl;
    std::cout << "Push back:" << std::endl;
    integers1.push_back(5);
    integers1.print();
    std::cout << std::endl;

    std::cout << "Emplace back:" << std::endl;
    integers1.pop_back();
    integers1.print();
    std::cout << std::endl;

    std::cout << "vectors is empty: " << integers1.is_empty() << std::endl;

    std::cout << "End of vector: " << integers1.end() << std::endl;
    std::cout << "Begin of vector: " << integers1.begin() << std::endl;

    std::cout << std::endl;
    std::cout << "***********************************" << std::endl << std::endl;

    /*****  Char   *****/
    std::cout << "Char" << std::endl;
    std::cout << "Push back:" << std::endl;
    chars.push_back('c');
    chars.print();
    std::cout << std::endl;

    std::cout << "Emplace back:" << std::endl;
    chars.pop_back();
    chars.print();
    std::cout << std::endl;

    std::cout << "vectors is empty: " << chars.is_empty() << std::endl;

    std::cout << "End of vector: " << chars.end() << std::endl;
    std::cout << "Begin of vector: " << chars.begin() << std::endl;

    std::cout << std::endl;
    std::cout << "***********************************" << std::endl << std::endl;

    /*****  Float   *****/
    std::cout << "Float" << std::endl;
    std::cout << "Push back:" << std::endl;
    floats.push_back(3.1);
    floats.print();
    std::cout << std::endl;

    std::cout << "Emplace back:" << std::endl;
    floats.pop_back();
    floats.print();
    std::cout << std::endl;

    std::cout << "vectors is empty: " << floats.is_empty() << std::endl;

    std::cout << "End of vector: " << floats.end() << std::endl;
    std::cout << "Begin of vector: " << floats.begin() << std::endl;

    return 0;
}
