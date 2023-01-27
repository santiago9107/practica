#include<iostream>

using namespace std;
int number=0, factorial=1, factorial_sum=0;

int main(){
    cout << "Introduce a number: ";
    cin >> number;

    for(int i = 1; i <= number; i++){
        factorial *= i;
        factorial_sum +=factorial;

    }

    cout << "The sum of factorial until " << number << " is: " << factorial_sum << endl;

    return 0;
}