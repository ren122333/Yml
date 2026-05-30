#include <stdio.h>
#include <time.h>
#define print(a) printf("%d\n",a);

void print_current_time() {
    time_t raw_time;
    struct tm *time_info;
    time(&raw_time);
    time_info = localtime(&raw_time);
    printf("Текущее время: %02d:%02d:%02d\n", 
           time_info->tm_hour, 
           time_info->tm_min, 
           time_info->tm_sec);
}
 
void print_calendar() {
    printf("Календарь\n");  
    printf("Пн Вт Ср Чт Пт Сб Вс\n");    
    printf(" 1  2  3  4  5  6  7\n");
        time_t raw_time;
    struct tm *time_info;
    time(&raw_time);
    time_info = localtime(&raw_time);
    char *days[] = {"Воскресенье", "Понедельник", "Вторник", "Среда", 
                    "Четверг", "Пятница", "Суббота"};
    char *months[] = {"Январь", "Февраль", "Март", "Апрель", "Май", "Июнь",
                      "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь"};
    printf("Календарь: %s, %d %s %d года\n",
           days[time_info->tm_wday],
           time_info->tm_mday,
           months[time_info->tm_mon],
           time_info->tm_year + 1900);
}
