#include <iostream>
#include <ctime>

int main() {
    // Get the current time
    std::time_t currentTime = std::time(nullptr);

    // Convert it to a human-readable format
    std::tm* localTime = std::localtime(&currentTime);

    // Display the current time
    std::cout << "Current date and time: "
              << (localTime->tm_year + 1900) << "-"  // Year (tm_year is years since 1900)
              << (localTime->tm_mon + 1) << "-"      // Month (0-based index)
              << localTime->tm_mday << " "           // Day of the month
              << localTime->tm_hour << ":"           // Hour
              << localTime->tm_min << ":"            // Minutes
              << localTime->tm_sec                   // Seconds
              << std::endl;

    return 0;
}
