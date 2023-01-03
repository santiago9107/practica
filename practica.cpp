#include <iostream>
#include <vector>
#include <string>

using namespace std;

/* This small program asks the user to introduce a number and counts the times
the user introduces a number different to zero*/

int number;
int i = 0;

int main()
{
    do{
        cout << "Introduce a number: ";
        cin >> number;
        i++;
        
    }while(number != 0);
    
    cout << "You introduced " << i-1 << " times a number different to zero" << endl;
    
}