#include <iostream>
#include <stdlib.h>


using namespace std;
//the array variable, empId stores the unique ID numbers of Marimart employees
int empId[10]={1234567,2345678,3456789,5658845,4520125,7895122,8777541,8451277,1302850,7580489};

//the array variables hours,payRate and wages declared will store some data of Marimart employees
    int hours[10];
    float payRate[10];
    float wages[10];
    int i;

int main()
{
    cout<<"\t\t**************************************************************"<<endl;
     cout<<"\t\t--------------------GROSS WAGE CALCULATOR-------------------"<<endl;
     cout<<"\t\t**************************************************************\n"<<endl;

    cout << "Below are the unique identification numbers of Marimart employees:" << endl;
    //This for loop displays the ID numbers of employees in Marimart company
    for(i=0;i<10;i++){
        cout <<"Employee "<<i+1<<"\t-->\t"<< empId[i] << " " << endl;
    }

     cout<<"-----------------------------------------------------------------\n"<<endl;

    //accepting inputs for hours worked by each employee
    for(i=0;i<10;i++){
        cout<<"Enter employee's no. of hours worked in a day"<<endl;
        cout<<"Employee "<<i+1<<"->";
        cin>>hours[i];
        cout<<endl;
        //the while loop checks for validity of user's input
        while(hours[i]<0){
            cout<<"Invalid input(Hours cannot be negative). Please try again!!"<<endl;
            cout<<"Employee "<<i+1<<"->";
            cin>>hours[i];
            cout<<endl;
        }
        //line 42-45 accepts users input for employees'hourly pay rate
        cout<<"Enter employee's hourly pay rate"<<endl;
        cout<<"Employee "<<i+1<<"->";
        cin>>payRate[i];
        cout<<endl;
        //the while loop checks for validity of user's input
        while(payRate[i]<15){
            cout<<"Pay rate should not be less than 15.00. Try again!!"<<endl;
            cout<<"Employee "<<i+1<<"->";
            cin>>payRate[i];
            cout<<endl;
        }


    }

    //this for loop calculates the wage rate of each employee
    for(i=0;i<10;i++){
        wages[i]=hours[i]*payRate[i];
    }

    //this is a function that clears off the data on the screen
    system("cls");

    cout<<endl;
    cout<<"**********EMPLOYEE IDENTIFICATION & SALARY**********\n"<<endl;
    cout<<"Employee ID\t\t"<<"Gross wage"<<endl;
     cout<<"----------\t\t"<<"----------"<<endl;
     //the for loop displays the id and wage salary of the 10 employees
    for(i=0;i<10;i++){
        cout<<empId[i]<<"\t\t\t"<<wages[i]<<endl;
    }

    return 0;
}
