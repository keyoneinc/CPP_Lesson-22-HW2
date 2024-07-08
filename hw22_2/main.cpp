#include <iostream>
#include "SchoolSchedule.h"

int main() {
    int start_time, lesson_duration, regular_break_duration, long_break_duration, regular_break_position, long_break_position, num_lessons;

    cout << "Enter start time of school day (in minutes): ";
    cin >> start_time;
    cout << "Enter lesson duration (in minutes): ";
    cin >> lesson_duration;
    cout << "Enter regular break duration (in minutes): ";
    cin >> regular_break_duration;
    cout << "Enter long break duration (in minutes): ";
    cin >> long_break_duration;
    cout << "Enter position of regular break (lesson number): ";
    cin >> regular_break_position;
    cout << "Enter position of long break (lesson number): ";
    cin >> long_break_position;
    cout << "Enter number of lessons per day: ";
    cin >> num_lessons;

    SchoolSchedule schoolSchedule(start_time, lesson_duration, regular_break_duration, long_break_duration, regular_break_position,
        long_break_position, num_lessons);

    schoolSchedule.printSchedule();

    return 0;
}