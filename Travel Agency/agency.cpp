#include<iostream>
using namespace std;

struct Package{
    int opt;
    string dest,sDate,eDate;
    long long price;
};
void displayTour(Package pack){
    cout<<"Option : "<<pack.opt<<endl;
    cout<<"Destination : "<<pack.dest<<endl;
    cout<<"Start Date : "<<pack.sDate<<endl;
    cout<<"Return Date : "<<pack.eDate<<endl;
    cout<<"Package price : "<<pack.price<<endl<<endl;
}
int main(){
    Package pack1{1,"Sundarban","20-04-2024","24-04-2024",12500};
    Package pack2{2,"Kashmir","20-04-2024","23-04-2024",15000};
    Package pack3{3,"Goa","20-04-2024","23-04-2024",25000};

    cout<<"....... Tour Plans ......."<<endl<<endl;
    displayTour(pack1);
    displayTour(pack2);
    displayTour(pack3);

    int choice;
    cout<<"Select your pack : ";
    cin>>choice;
    if(choice == 1){
        system("cls");
        cout<<"....... You selected the following package......."<<endl;
        displayTour(pack1);
    }
    else if(choice == 2){
        system("cls");
        cout<<"You selected the following package"<<endl;
        displayTour(pack2);
    }
    else if(choice == 3){
        system("cls");
        cout<<"You selected the following package"<<endl;
        displayTour(pack3);
    }
    else{
        system("cls");
        cout<<"!!!! Wrong button is pressed !!!"<<endl;
    }
}