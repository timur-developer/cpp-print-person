#include "header.h"

int main() {
    std::vector<Person> people = ReadPerson();       // А это вектор, элементы которого — люди.
    print_people(people);
}