#include <iostream>
#include <ctime>

int getCurrentYear() {
    // Get the current time
    time_t now = time(0);
    // Convert to tm struct for local time
    tm *ltm = localtime(&now);
    // Extract and return the year
    return 1900 + ltm->tm_year;
}

int main() {
    std::cout << "Current Year: " << getCurrentYear() << std::endl;
    return 0;
}

/*
time(0) gets the current time in seconds since the epoch.
localtime(&now) converts the time to a tm struct.
tm_year holds the number of years since 1900, so 1900 + ltm->tm_year gives the current year.
*/