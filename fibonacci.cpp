#include<iostream>

using namespace std;
int number=0, x=0, y=1, z=0;

int main(){
    cout << "Introduce a number of elements: ";
    cin >> number;

    cout << "1 ";
    for(int i = 1; i < number; i++){
        z = x + y; 
        cout << z << " ";
        x = y; 
        y = z; 
        
    }

    return 0;
}