//
// Created by dim on 3/9/20.
//
#include <vector>
#include <stdexcept>

using namespace std;

double median (vector<double> );

double grade (double midterm, double final, const vector<double>& hw) {
    // function to compute the grade
    double mid_pct = 0.20;
    double fin_pct = 0.40;
    double hw_pct = 0.40;
     // check if they did the homework

     if (hw.empty()){
         throw domain_error("Student has  done no homework");
     }
    return  mid_pct*midterm + fin_pct*final + hw_pct*median(hw);
}

