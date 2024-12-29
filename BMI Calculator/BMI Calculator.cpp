

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    cout << "Welcome to my Beginners BMI Calculator\n";

    int age;
    cout << "How old are you?\n";
    cin >> age; 
    string sex;
    cout << "What is your sex? F/M\n";
    cin >> sex;
    double height;
    cout << "What's your height in metres? \n";
    cin >> height;
    double mass;
    cout << "What is your mass in kg\n";
    cin >> mass;

    double bmi = mass/pow(height,2) ;
    cout << "Your BMI is" << " " << bmi << endl;

    if (bmi <= 18.5) {
        cout << "You are underweight\n";
    }
    else if (bmi < 25) {
        cout << "You are a normal weight\n";
    }
    else if (bmi < 30) {
        cout << "You are overweight\n";
    }
    else {
        cout << "You are obese\n";
    }




}

