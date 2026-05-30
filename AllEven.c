#include <stdio.h>
#include "Time.c"

#define person(Location, Name) Location.name = Name; Location.age = 20;

struct person
{
    char * name;
    int age;
};

int main() {
    struct person school[5];
    person(school[1], "Daniel");
    school[0].name = "Daniel";
    school[0].age = 20;
    #ifdef __clang__
        puts("Clang compiler");
    #elif __GNUC__
        puts("GCC compiler");
    #else
        puts("Undefined compiler");
    #endif
    int a, b, d;
    printf("Please enter the numbers");
    scanf("%d, %d, %d", &a, &b, &d);
    if (a%2 == b%2 && b%2 == d%2){
        if (1){
            printf("True");
        }
        return(1);
    }
    if (2 == 3){
        printf("I owe you money.");
    }
    printf("False");
    return 0;
}
