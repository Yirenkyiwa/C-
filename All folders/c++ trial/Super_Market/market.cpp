#include <iostream>
#include <iomanip>
#include <windows.h>

using namespace std;

void welcome ();
int purchase();

float balance=0;
float arr_amt[10]={3.50, 1.20,3.00,15.00,35.00,1.20,2.50,1.50,1.30,0.20};
float selection[10];
string market[10]={"Milk"," Milo","Mackarel","Vegetable oil","Perfume rice","Salt","Camphor","Soft drinks","Soap","Camphor"};
int numFor_items[10]={1,2,3,4,5,6,7,8,9,10};

void welcome(){
     int select;
    int select_num[10];
    cout<<"\t\t\t\t\t---------------------------------------------"<<endl;
    cout << "\t\t\t\t\t\tWelcome to Marilay Enterprise" << endl;
    cout<<"\t\t\t\t\t---------------------------------------------\n"<<endl;
    Sleep(2500);
}

int purchase(){
    int buy;
    float cash;
    int num_of_times;

    cout<<"The following items are sold in Marilay Enterprise:\n";Sleep(2000);
    cout<<"================================\n";
    /*cout<<"= \t1. Milk\t\t\t=\n= \t2. Milo\t\t\t=\n= \t3. Mackarel\t\t=\n= \t4. Vegetable oil\t=\n= \t5. Perfume rice\t\t=\n= \t6. Salt\t\t\t=\n= \t7. Chocolate \t\t=\n= \t8. Biscuit\t\t=\n= \t9. Soap\t\t\t=\n= \t10. Camphor\t\t=\n";
    cout<<"================================\n"<<endl;Sleep(2000);*/
    for(int i = 0; i < 10;i++){

    cout<<numFor_items[i]<<"\t"<< market[i]<<endl;
    }
    cout<<"================================\n";
 /* float total;
    //for(int i=1;i<=10;i++){
     cout<<"Select from the list, what you would like to purchase. Enter '0' when you are done with your purchase: ";
     cin>>selection[];
     if (buy == 0 ){
        cout<<"What is the current amount of money you have? GHC";
            cin>>cash;*/

   // for(int i =0;  )

   // while(buy > 0 ||  buy <11){
    //    cout<<">>";
   //     cin>>buy;
   //     total+=arr_amt[buy-1];
   // }
   // cout<<"Your cash is "<< cash<<endl;
   /* if(buy == 0){
            /*cout<<"Thank ";Sleep(800);cout<<"you ";Sleep(800);cout<<"for ";Sleep(800);cout<<"shopping ";Sleep(800);cout<<"with ";Sleep(800);cout<<"us!!";
            Sleep(1500);
            system("cls");
            welcome();
            cout<<"What is the current amount of money you have? GHC";
            cin>>cash;

        }


        else if(buy<0||buy>10){
        cout<<"NOT AVAILABLE!!!"<<endl;
        Sleep(1500);
        system("cls");
        welcome();
        purchase();

        }else{
            cout<<"What is the current amount of money you have? ";
        cin>>cash;
        }*/
        //for(int i=1;i<=10;++i){
            float balance =cash-arr_amt[buy];
            cout<<"Your current balance ="<<balance;

}
int main()
{
    welcome();
    purchase();





    return 0;
}
