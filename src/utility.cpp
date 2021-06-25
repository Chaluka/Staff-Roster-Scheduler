#include "utility.h"

// TimeSlot definitions

TimeSlot::TimeSlot(Day d, int sth=8, int stm=0, int eth=18, int etm=0):day{d}, start_time_hh{sth}, start_time_mm{stm}, end_time_hh{eth}, end_time_mm{etm}{};


// Address definitions
Address::Address(std::string snum, std::string sname, std::string sub, std::string city, std::string stat, int pcode):street_number{snum}, 
street_name{sname}, suburb{sub}, city{city}, state{stat}, postcode{pcode}{};


// JobTitle definitions
JobTitle::JobTitle(int id, std::string title, double rate, double hours):job_id{id}, title{title}, hourly_rate{rate}, max_hours{hours}{}; 
