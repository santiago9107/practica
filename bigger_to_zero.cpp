#include <iostream>
#include <vector>
#include <string>

using namespace std;

/* This small program asks the user to introduce a number and counts the times
the user introduces numbers bigger than zero*/

int number;
int i = 0;

int main()
{
    do{
        cout << "Introduce a number: ";
        cin >> number;

        if(number > 0){
            i++;
        }else{
            i;
        };
        
    }while(number != 0);
    
    cout << "You introduced " << i << " times a number bigger than zero" << endl;
    
}