#pragma once
#include <iostream>
using namespace std;

class SchoolSchedule {
private:
    int start_time;
    int lesson_duration;
    int regular_break_duration;
    int long_break_duration;
    int regular_break_position;
    int long_break_position;
    int num_lessons;

public:
    SchoolSchedule(int start_time, int lesson_duration, int regular_break_duration, int long_break_duration, int regular_break_position,
        int long_break_position, int num_lessons);

    int calculateEndTime();

    void printSchedule();
};
