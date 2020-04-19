#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

double arr_balance [10]= {90,1200,2000,2200,1300,1600,2400,2600,2500,1100};
int account_num;
float addTo_account;
float withdrawFrom_account;

int menu();
float deposit();
float withdraw();
int exit();

void signin(){
    int counter=0;
    cout<<"\t \t \t Hello Precious User, You Are Welcome To Marie's ATM Machine"<<endl;
    cout<<"\t \t \t ==========================================================="<<endl;
    do{
        if(counter>=2){
            Sleep(3000);
            system("cls");
            signin();
        }
    cout<<"Enter your account number to sign in: ";
    cin>>account_num;
    if(account_num<0||account_num>9){
        cout<<"Please enter a valid account number"<<endl;
        counter+=1;
    }else{
        cout<<"Congratulations!!! you have successfully signed in"<<endl;
        Sleep(3000);

        system("cls");
        menu();
    }
    }while (account_num<0 ||account_num>9);
}
 int menu(){
    int select;
    cout<<"Please select from the menu below: "<<endl;
    cout<<"\t*************************"<<endl;
    cout<<"\t* \t2. Balance\t*"<<endl;
    cout<<"\t* \t3. Deposit\t*"<<endl;
    cout<<"\t* \t4. Withdraw\t*"<<endl;
    cout<<"\t*\t5. Exit\t\t*"<<endl;
    cout<<"\t*************************"<<endl;
    cin>>select;
    if(select==2){
        //system("cls");
        cout<<"Your balance is: $"<<arr_balance[account_num]<<endl;
        if(arr_balance[account_num]<100){
            cout<<" 'Low balance' "<<endl;
    }
    Sleep(3000);
    system("cls");
    menu();
    }else if(select==3){
        deposit();
    }else if(select==4){
        withdraw();
    }else if(select==5){
        exit();
    }else{
        cout<<"Oops!! please enter a correct option"<<endl;
        Sleep(3000);
        system("cls");
        menu();
    }

 }

 float deposit(){
     int counter2=0;
     do{
     if(counter2>=2){
        Sleep(3000);
        system("cls");
        menu();
        return 0;
     }
     cout<<"Enter amount to deposit into your account: $";
     cin>>addTo_account;
     if(addTo_account<0){
        cout<<endl;
        cout<<"Please enter a valid number"<<endl;
        counter2+=1;

     }else{
     arr_balance[account_num]=arr_balance[account_num]+addTo_account;
     cout<<"Your current balance is $"<<arr_balance[account_num]<<endl;
        Sleep(3000);
        system("cls");
        menu();
     }
    }while(addTo_account<0);
 }

 float withdraw(){
     int counter3=0;
     do{
        if(counter3>=2){
        Sleep(3000);
        system("cls");
        menu();
        return 0;
     }
    cout<<"Enter the amount you want to withdraw from your account: $";
    cin>>withdrawFrom_account;
    if(withdrawFrom_account<0){
        cout<<endl;
        cout<<"Please enter a valid number"<<endl;
        counter3+=1;
    }else if(withdrawFrom_account>arr_balance[account_num]){
        cout<<"Sorry, you have insufficient balance"<<endl;
        counter3+=1;
    }else{
        arr_balance[account_num]=arr_balance[account_num] - withdrawFrom_account;
        cout<<"Your current account is $"<<arr_balance[account_num]<<endl;
        Sleep(3000);
        system("cls");
        menu();
    }
    }while(withdrawFrom_account>arr_balance[account_num] || withdrawFrom_account<0);
 }

 int exit(){
    cout<<" 'Good Bye' precious user, enjoy your day!!!"<<endl;
    Sleep(3000);
    system("cls");
    signin();
    menu();

 }

int main()
{
    signin();
    menu();
return 0;
}
