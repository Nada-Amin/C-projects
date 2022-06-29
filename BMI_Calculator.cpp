#include <iostream>
using namespace std;
int main()
{
    /*
    BMI calculator-->Body mass index calculator
    Normal weight-->bmi=18.5:25
    underweight-->bmi<18.5
    overweight-->bmi>25
    obese-->bmi>30
    */
    float weight, height,bmi;
    cout << "Please, Enter weight(kg) & height(m): ";
    cin >> weight >> height;
    bmi = weight / (height * height);
    cout <<"Your BMI is: " << bmi << endl;
    if (bmi < 18.5) 
        cout << "underweight";
    else if (bmi < 25) 
        cout << "Normal weight";
    else if(bmi<30)
        cout << "overweight weight";
    else
        cout << "obese";

    system("pause>0");
}
