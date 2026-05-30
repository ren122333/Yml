#include <stdio.h>

int main() {
    system("curl -s \"https://wttr.in/Haifa?format=Температура:+%t+Ветер:+%w+Влажность:+%h\"");
    return 0;
}