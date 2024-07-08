#include "SchoolSchedule.h"

SchoolSchedule::SchoolSchedule(int start_time, int lesson_duration, int regular_break_duration, int long_break_duration, int regular_break_position, int long_break_position, int num_lessons)
{
    this->start_time = start_time;
    this->lesson_duration = lesson_duration;
    this->regular_break_duration = regular_break_duration;
    this->long_break_duration = long_break_duration;
    this->regular_break_position = regular_break_position;
    this->long_break_position = long_break_position;
    this->num_lessons = num_lessons;
}

int SchoolSchedule::calculateEndTime()
{
    int end_time = start_time + lesson_duration * num_lessons
        + regular_break_duration * (regular_break_position - 1)
        + long_break_duration;
    return end_time;
}

void SchoolSchedule::printSchedule()
{
    cout << "\nSchool Schedule:\n";

    for (int lesson_num = 1; lesson_num <= num_lessons; lesson_num++) {
        int lesson_start_time = start_time + lesson_duration * (lesson_num - 1);
        int lesson_end_time = lesson_start_time + lesson_duration;

        cout << "Lesson " << lesson_num << ": " << lesson_start_time << " - " << lesson_end_time << " minutes\n";

        if (lesson_num == regular_break_position) {
            cout << "Regular Break: " << lesson_end_time << " - "
                << (lesson_end_time + regular_break_duration) << " minutes\n";
        }
        if (lesson_num == long_break_position) {
            cout << "Long Break: " << lesson_end_time << " - "
                << (lesson_end_time + long_break_duration) << " minutes\n";
        }
    }

    cout << "\nEnd of School Day: " << calculateEndTime() << " minutes\n";
}
