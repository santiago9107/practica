#include <iostream>
#include <vector>
#include <string>
#include<math.h>

using namespace std;

/* This small program asks the user to introduce a number and counts the times
the user introduces numbers bigger than zero*/

int number;
int sum = 0;
int i = 1;

int main()
{
    while(i < 11){
        cout << "Introduce a number: ";
        cin >> number;

        if(number > 0){
            sum += pow(number, 2);
            i++;
        }else{

            sum;
        };
       
    }
    
    cout << "The sum of the square numbers is " << sum << endl;
    
}