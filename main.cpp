#include <iostream>

unsigned int dogs {};

unsigned int add_student() {
    static unsigned int students {};

    students++;
    dogs++;
    return students;
}

unsigned int add_dog() {
    dogs++;
    return dogs;
}

int main() {
    for (size_t i {}; i < 20; i++) {
        std::cout << "students: " << add_student() << std::endl;
        std::cout << "dogs: " << add_dog() << std::endl;
    }
    
    return 0;
}