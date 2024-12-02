#include "header.h"
#include <iostream>

std::string ReadString() {
    std::string string = "";
    std::cin >> string;
    if (!std::cin) {
        std::cerr << "Incorrect string";
    }
    return string;
}
int ReadInt() {
    int num = 0;
    std::cin >> num;
    if (!std::cin) {
        std::cerr << "Incorrect number";
    }
    return num;
}

std::vector<Person> ReadPerson() {
    std::vector<Person> people;
    std::cout << "Write amount of people:";
    int amount = ReadInt();

    for (size_t i = 0; i < amount; ++i) {
        Person person;
        std::cout << "Write name of " << i + 1 << " person: " << std::endl;
        std::string input_name = ReadString();
        person.name = input_name;

        std::cout << "Write surname of " << i + 1 << " person: " << std::endl;
        std::string input_surname = ReadString();
        person.surname = input_surname;

        std::cout << "Write birth year of " << i + 1 << " person: " << std::endl;
        int input_birth_year = ReadInt();
        person.birth_year = input_birth_year;

        people.push_back(person);
    }
    return people;
}

void print_people(std::vector<Person> people) {
    for (auto person : people) {
        std::cout << "Name: " << person.name << std::endl;
        std::cout << "Surname: " << person.surname << std::endl;
        std::cout << "Born in the : " << person.birth_year << std::endl;
        std::cout << '\n';
    }
}