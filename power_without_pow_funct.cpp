#include<iostream>

using namespace std;

int x, y, power;

int main(){

    cout << "Introduce the value of x: " << endl;
    cin >> x;

    cout << "Introduce the value of y: " << endl;
    cin >> y;

    power = x;

    for(int i = 0; i < y-1; i++){
        power *= x;
    }

    cout << x << " to the " << y << " power is: " << power << endl;

    return 0;
}    
 // namespa
