#ifndef EMP_H
#define EMP_H

#include "utility.h"

class Employee{
    private:
    long emp_id;
    std::string fname;
    std::string lname;
    Address address;
    JobTitle job_title;
    std::vector<TimeSlot> available_times;
};




#endif EMP_H