#include<iostream>

using namespace std;

/*This program asks the user to introduce the grades for 5 students (3 exams for each one), and then 
calculates the number of students who: approved all exams, approved at least one exam, approved the
last exam*/

float exam1, exam2, exam3;
int all_approved=0, one_approved=0, last_approved=0;

int main(){

    
    for (int i = 1; i <=5; i++){
        cout << "Introduce the grades for student " << i << ": " << endl;

        cout << "Exam 1 grade:";
        cin >> exam1;

        cout << "Exam 2 grade:";
        cin >> exam2;

        cout << "Exam 3 grade:";
        cin >> exam3;


            // All the exams approved

            if( (exam1 >= 3) && (exam2 >= 3) && (exam3 >= 3) ){
                all_approved++;
            }

            // At least one exam approved

            if( (exam1 >= 3) || (exam2 >= 3) || (exam3 >= 3) ){
                one_approved++;
            }


            // The last exam approved

            if( exam3 >= 3 ){
                last_approved++;
            }
        
        }

        
    cout << "Number of students that approved all the exams: " << all_approved << endl;
    cout << "Number of students that approved at least one exam: " << one_approved << endl;
    cout << "Number of students that approved the last exam: " << last_approved << endl;
    
    return 0;

 }