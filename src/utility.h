#ifndef UTILITY_H
#define UTILITY_H

#include <string>
#include <vector>

enum Day {MON=1, TUE=2, WED=3, THU=4, FRI=5, SAT=6, SUN=7};

class TimeSlot{
    // times should be in 24 hours : defulat times are 8:00-18:00 (start-end)hours
    public:
    Day day;
    int start_time_hh;
    int start_time_mm;  
    int end_time_hh;
    int end_time_mm;

    TimeSlot(Day, int, int, int, int);
    
};


class Address{
    public:
    std::string street_number;
    std::string street_name;
    std::string suburb;
    std::string city;
    std::string state;
    int postcode;

    Address()=default;
    Address(std::string,std::string, std::string, std::string, std::string, int); 
};



class JobTitle{
    public:
    int job_id;
    std::string title;
    double hourly_rate;
    double max_hours;

    JobTitle()=default;
    JobTitle(int, std::string, double, double); 
};



#endif UTILITY_H