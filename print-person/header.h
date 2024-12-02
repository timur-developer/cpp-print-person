#pragma once

#include <string>
#include <vector>

struct Person {
    std::string name;
    std::string surname;
    int birth_year;
};

std::string ReadString();

int ReadInt();

std::vector<Person> ReadPerson();

void print_people(std::vector<Person> people);