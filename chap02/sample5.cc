#include <string.h>

class Person {
  public:
    Person(char* name, int age);
    char *name;
    int age;
};

/*
Person::Person(char* str, int num){
  strcpy(name, str);
  age = num;
}
*/

Person::Person(char* name, int age){
  strcpy(this->name, name);
  this->age = age;
}




