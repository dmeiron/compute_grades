#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include<algorithm>

using namespace std;

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

    int count = 0 ;
    double sum = 0;

    double x;
    vector<double> homework;

    while (cin >> x) {
        homework.push_back(x);
        ++count;
        sum+=x;
    }

    // compute the median

    typedef vector<double>::size_type vec_sz;
    vec_sz size = homework.size();
    if (size ==0) {
        cout << endl << "Didn't enter any grades" << endl;
        return 1;
    }

    // output the homework grades
    cout << endl << "Here are are the homework grades you entered: ";
    for (vec_sz i = 0; i != homework.size(); i++){
        cout << homework[i] << " " ;
    }
    cout << endl;

    // sort the vector
    sort(homework.begin(), homework.end());

    // find the mid point
    vec_sz mid = size/2;
    double median;
    if (size % 2 == 0) {
        median = (homework[mid]+ homework[mid-1])/2;
    }
    else {
        median = homework[mid];
    }


    streamsize prec = cout.precision();
    cout << "Your final grade is " << setprecision(3)
        << 0.2*midterm+0.4*final+0.4*median
        << setprecision(prec) << endl;

    return 0;
}
