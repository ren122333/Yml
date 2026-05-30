#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("\n=================================\n");
    printf("   Weather in Haifa (Israel)\n");
    printf("=================================\n");
    
    system("curl -s \"https://wttr.in/Haifa?format=%t+%w+%h&m\" > weather.txt");
    
    FILE *f = fopen("weather.txt", "r");
    if (f) {
        char buffer[256];
        while (fgets(buffer, sizeof(buffer), f)) {
            printf("%s", buffer);
        }
        fclose(f);
        remove("weather.txt");
    } else {
        printf("Failed to get weather data\n");
    }
    
    printf("=================================\n");
    
    return 0;
}