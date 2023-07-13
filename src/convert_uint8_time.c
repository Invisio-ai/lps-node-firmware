#include <stdio.h>
#include <time.h>
#include <stdint.h>

char* convert_time(uint8_t timestamp) {
    // Convert uint8_t time to a time_t variable
    time_t unix_timestamp = (time_t)timestamp;

    // Break down the time_t variable into a struct (for unpacking)
    struct tm * timeinfo = gmtime(&unix_timestamp);

    // Format and store the time in a string

    char formatted_time[80];
    strftime(formatted_time, sizeof(formatted_time), "%Y-%m-%d %H:%M:%S", timeinfo);
    return formatted_time;
}

void print_time(uint8_t timestamp) {
    // Convert uint8_t time to a time_t variable
    time_t unix_timestamp = (time_t)timestamp;

    // Break down the time_t variable into a struct (for unpacking)
    struct tm * timeinfo = gmtime(&unix_timestamp);

    // Format and store the time in a string

    char formatted_time[80];
    strftime(formatted_time, sizeof(formatted_time), "%Y-%m-%d %H:%M:%S", timeinfo);
    printf("%s\n", formatted_time);
}

int main() {

    return 0;
}
