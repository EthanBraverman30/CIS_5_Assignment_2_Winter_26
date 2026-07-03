#include <iostream>

using std::cout; 
using std::cin;
using std::endl;
using std::string;

int main(){
    string name="";
    int age;
    double height;
    int weight;
    int test_score;
    string bmi_cat;
    string grade;
    string message;

    cout << "Welcome to the BMI calculator!" << endl;
    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "Enter your age: " << endl;
    cin>>age;
    cout << "Enter your height (meters): " << endl;
    cin>>height;
    cout << "Enter your weight (kg): " << endl;
    cin>>weight;
    cout << "Enter your test score (0 to 100): ";
    cin >> test_score;


    double bmi= weight/(height*height);
    if (bmi<18.5){
        bmi_cat="Underweight";
    }
    else if (bmi<=24.9){
        bmi_cat="Normal weight";
    }
    else if (bmi<30){
        bmi_cat="Overweight";
    }
    else{
        bmi_cat="Obese";
    }

    if (test_score>90){
        grade="A";
    }
    else if (test_score>=80){
        grade="B";
    }
    else if (test_score>=70){
        grade="C";
    }
    else if (test_score>=60){
        grade="D";
    }
    else{
        grade="F";
    }
    if (grade=="A" || grade=="B"){
        message="Great job!";
    }
    else{
        message="Better luck next time!";
    }

    cout << "Hey " << name << ", you're " << age << " years old with a BMI of " << bmi << " (" << bmi_cat << ") and you got a grade " << grade << "! " << message << endl;

    return 0;
}