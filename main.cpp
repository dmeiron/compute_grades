#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include<algorithm>

using namespace std;

// routines used in main program

istream& read_hw (istream& , vector<double>& );
double grade (double, double, const vector<double>&);


int main() {

    // read the name
    cout << "Please enter your first name: ";
    string name;
    cin >> name;
    cout << "Hello, " << name << "!" << endl;

    //ask for and read the midterm and final grades

    cout << "please enter your midterm and final grades: " ;
    double midterm,final;
    cin >> midterm >> final;

    //ask for the homework grades
    cout << "enter all your homework grades, followed by end of file: ";
    vector<double> homework;
    read_hw(cin, homework);

    try{
        double final_grade = grade(midterm, final, homework);

        // print out the grade if we got it

        streamsize prec = cout.precision();
        cout << "Your final grade is " << setprecision(3)
             << final_grade
             << setprecision(prec) << endl;
    }
    catch (domain_error) {
        cout << "Enter  the grades - try again " << endl;
    }

    return 0;
}
