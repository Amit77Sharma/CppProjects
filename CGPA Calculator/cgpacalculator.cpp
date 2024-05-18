/*CGPA GPA calculator*/
/*Project to calculate the CGPA, GPA*/
#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

void calculateCGPA();
void calculateGPA();
void method();

int main(){

    system("clear");
    int input_menu;
    cout<< "---------------Welcome to CGPA, GPA Calculator------------------"<< endl;
    cout<< "---------------Developed by Amit Sharma-------------------------"<< endl;
    sub:
    cout<< "                   MENU: "<< endl;
    cout<< "                      1. Calculate CGPA (Cummulative Grade Point Average)" << endl;
    cout<< "                      2. Calculate GPA (Grade Point Average)"<< endl;
    cout<< "                      3. Method that is applied here to calculate CGPA & GPA "<< endl;
    cout<< "                      4. Exit Application "<< endl;
    cout<< "               Enter your Input"<<endl;

    cin>>input_menu;
    switch(input_menu){
        case 1:
            calculateCGPA();
            goto sub;
            break;
        case 2:
            calculateGPA();
            goto sub;
            break;
        case 3:
            method();
            break;
        case 4:
            cout<<"----------Exit Successfully---------------------"<<endl;
            exit(EXIT_SUCCESS);
        default:
            system("clear");
            cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
            goto sub;
    }
    return 0;
}


void calculateCGPA(){
    int n;
    cout<<"Enter the Total number of subjects "<< endl;
    cin>>n;
    double marks[n];
    cout<<"Enter the subject marks "<< endl;
    for(int i=0; i<n; i++){
        double number;
        cout<<"Enter "<< i + 1 <<"st "<<endl;
        cin>>number;
        marks[i] = number;  
    }
    cout<<"--------------Calculate CGPA------------------"<<endl;
    // Variable to store the grades in
    // every subject
    double grade[n];
 
    // Variables to store CGPA and the
    // sum of all the grades
    double cgpa, sum = 0;
 
    // Computing the grades
    for(int i = 0; i < n; i++) 
    {
       grade[i] = (marks[i] / 10);
    }
 
    // Computing the sum of grades
    for(int i = 0; i < n; i++) 
    {
       sum += grade[i];
    }
 
    // Computing the CGPA
    cgpa = sum / n;
 
    cout << "CGPA = ";
    printf("%.1f\n", cgpa);
    cout << "CGPA Percentage = ";
    printf("%.2f", cgpa * 9.5);
    cout<<endl;
    cout<<"----------------------------------------------------"<<endl;
}

void calculateGPA(){
    cout<<"--------------Calculate GPA-------------------"<<endl;
    int n;
    cout << "Enter the total number of subjects: ";
    cin >> n;
    vector<double> marks(n);
    vector<int> creditHours(n);
    // Input marks and credit hours for each subject
    for (int i = 0; i < n; ++i) {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[i];

        cout << "Enter credit hours for subject " << i + 1 << ": ";
        cin >> creditHours[i];
    }

    double totalPoints = 0.0;
    int totalCreditHours = 0;

    // Calculate total points and total credit hours
    for (size_t i = 0; i < marks.size(); ++i) {
        totalPoints += marks[i] * creditHours[i];
        totalCreditHours += creditHours[i];
    }
    // Calculate GPA
    double GPA = totalPoints / totalCreditHours;
    cout<<"total GPA gained is "<< GPA << endl;
}
void method(){
    system("clear");
    cout<< "----------------------Method to calculate CGPA & GPA-------------------- \n \n" << endl;
    cout<<" CGPA=  Sum of GPA / number of semesters "<<endl;
    cout<<" GPA= Sum of (Credit*Point) / total of credits \n"<<endl;
    cout<<"-----------------------------------------------------------------\n\n"<<endl;

    sub:
    int input_method;
    cout<< "1. Go back to main menu "<<endl;
    cout<< "2. Exit the Application "<<endl;
    cout<< "Your input:   ";
    cin>>input_method;
    
    switch(input_method){
        
        case 1:
            cout<< "Going back to main menu "<<endl;
            main();
            break;
        case 2:
            cout<< "----Exit Successfully----------"<<endl;
            exit(EXIT_SUCCESS);
        default:
            system("clear");
            cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
            goto sub;
    }
}

