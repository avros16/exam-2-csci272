// #include <iostream>
// #include <cstring>

// using namespace std;

// class Person {
// private:
//     char name[100];
//     int age;
//     char country[100];

// public:
//     void setName(const char* n) {
//         strncpy(name, n, sizeof(name) - 1);
//         name[sizeof(name) - 1] = '\0';
//     }

//     const char* getName() const {
//         return name;
//     }

//     void setAge(int a) {
//         age = a;
//     }

//     int getAge() const {
//         return age;
//     }

//     void setCountry(const char* c) {
//         strncpy(country, c, sizeof(country) - 1);
//         country[sizeof(country) - 1] = '\0';
//     }

//     const char* getCountry() const {
//         return country;
//     }
// };

// int main() {
//     Person person;

//     person.setName("Alice");
//     person.setAge(30);
//     person.setCountry("USA");

//     cout << "Name: " << person.getName() << endl;
//     cout << "Age: " << person.getAge() << endl;
//     cout << "Country: " << person.getCountry() << endl;

//     return 0;
// }
