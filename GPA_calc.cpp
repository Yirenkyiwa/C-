#include <iostream>

using namespace std;

int main()
{
    float grade[7]={4.0,3.5,3.0,2.5,2.0,1.5,1.0};
    int num_courses, marks,grade_point;
    cout << "Please enter the number of courses: ";
    cin>>num_courses;
    cout<<"Enter the marks for each course: "<<endl;
    cin>>marks;
    //for(int siz=0;siz<=num_courses;siz++){
    if(marks>=80){
        cout<<"Your grade point is "<<grade[0]<<endl;
    }else if(marks>=75 && marks<80){
        cout<<"Your grade point is "<<grade[1]<<endl;

    }else if(marks>=70 && marks<75){
        cout<<"Your grade point is: "<<grade[2]<<endl;
    }else if(marks>=65 && marks<70){
        cout<<"Your grade point is: "<<grade[3]<<endl;
    }else if(marks>=60 && marks<70){
        cout<<"Your grade point is: "<<grade[4]<<endl;
    }else if(marks>=55 && marks<60){
        cout<<"Your grade point is: "<<grade[5]<<endl;
    }else if(marks>=50 && marks<55){
        cout<<"Your grade point is: "<<grade[6]<<endl;
    }else if(marks<50){
        cout<<"Your grade point is: "<<grade[7]<<endl;
    }else{
        cout<<"Enter a correct mark"<<endl;
    }

    return 0;
}
