#include<iostream>

using namespace std;


int main(){

    float temperature = 0, max_temp = 0, min_temp = 99999999, temp_sum = 0, temp_med=0;

    for(int i = 0; i < 24; i+=4){
        cout << "Introduce temperature at " << i << " hours:" << endl;
        cin >> temperature;

        if(temperature > max_temp){
            max_temp = temperature;
        }

        if(temperature < min_temp){
            min_temp = temperature;
        }

        temp_sum += temperature;
        temp_med = temp_sum/6;
    }

    cout << "Minimum temperature is: " << min_temp << endl;
    cout << "Maximum temperature is: " << max_temp << endl;
    cout << "Average temperature is: " << temp_med << endl;

    return 0;
}