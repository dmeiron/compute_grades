//
// Created by dim on 3/11/20.
//

#ifndef COMPUTE_GRADES_STUDENT_INFO_H
#define COMPUTE_GRADES_STUDENT_INFO_H

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include<algorithm>

struct Student_info {
    std::string name;
    double midterm, final;
    std::vector<double> homework;
};

bool compare(const Student_info&, const Student_info&);
std::istream& read(std::istream&, Student_info&);
std::istream& read_hw(std::istream&, std::vector<double>&);


#endif //COMPUTE_GRADES_STUDENT_INFO_H
