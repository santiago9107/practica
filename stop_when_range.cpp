#include<iostream>

using namespace std;
int number, sum=0;


int main(){

    do{
        cout << "Introduce an entire number: " << endl;
        cin >> number;

        if (number > 0){
            sum += number;
        }

    }while((number < 20 || number >30) && (number != 0));

    cout << "The sum of positive entire numbers is: " << sum << endl;

    return 0;
}