#include<iostream>
using namespace std;

int main(){
    // Write a program that takes an input of age
    // and prints if you are adult or not.
    int a;
    cin >> a;
    if (a >= 18){
        cout << "You are an adult\n";
    }
    else { // can also use "else if (age < 18)"
        cout << "you are not an adult\n";
    }

    /*
    A school has following rules for grading system:
    a. Below 25 - F
    b. 25 to 44 - E
    c. 45 tp 49 - D
    d. 50 to 59 - C
    e. 60 to 79 - B
    f. 80 to 100 - A
    Ask user to enter marks and print the corresponding grade.
    */
    int marks;
    cin >> marks;
    if (marks < 25){
        cout << "Grade: F\n";
    }
    else if (marks <= 44){
        cout << "Grade: E\n";
    }
    else if (marks <= 49){
        cout << "Grade: D\n";
    }
    else if (marks <= 59){
        cout << "Grade: C\n";
    }
    else if (marks <= 79){
        cout << "Grade: B\n";
    }
    else if (marks <= 100){
        cout << "Grade: A\n";
    }
    else{
        cout << "Entered invalid marks\n";
    }

    /*
    Take the age from the user and then decide accordingly
    1. If age < 18,
       print-> not eligible for job.
    2. If age >= 18,
       print-> eligible for job.
    3. If age >= 55 and age <= 57,
       print-> eligible for job, but retirement soon.
    4. If age > 57,
       print-> retirement time.
    */
   int age;
   cin >> age;
   if (age < 18){
        cout << "Not eligible for job.";
   }
   else {
        if (age >=55 && age <= 57){
            cout << "Eligible for job, but retirement soon.";
        }
        else if(age > 57){
            cout << "Retirement time.";
        }
        else { 
            cout << "Eligible for job.";
        }
   }
    return 0;
}
