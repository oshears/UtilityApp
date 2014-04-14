//Utility Application, Version 1.5 Alpha by Osaze Shears

#include <iostream>
#include <windows.h>
using namespace std;

void colortable();
void decimalfunction();
void decimaltable();
void revdecimalfunction();
void solidcolorfunction();

int main()
{
    HANDLE hConsole;
	hConsole = GetStdHandle (STD_OUTPUT_HANDLE);
    bool active(true);

    SetConsoleTextAttribute(hConsole,11);
    cout<<"Utility Application, Version 1.5 Alpha by Osaze Shears\n\n";
    SetConsoleTextAttribute(hConsole,7);


    while (active==true){
        int input;

        cout<<"Color Table<0>\nDecimal Table<1>\nDecimal Function<2>\nReverse Decimal Function<3>\nSolid Color Function<4>\nQuit<5>\n";
        cin>>input;

        if (input==0){
            colortable();
            SetConsoleTextAttribute(hConsole,7);
        }
        else if (input==1){
            decimaltable();
        }
        else if(input==2){
            decimalfunction();
        }
        else if (input==3){
            revdecimalfunction();
        }
        else if (input==4){
            solidcolorfunction();
        }
        else if (input==5){
            active=false;
        }
        else{
            cout<<"Invalid input...\n";
        }
        SetConsoleTextAttribute(hConsole,7);
        cout<<endl;
    }

    return 0;
}

void colortable(){
    HANDLE hConsole;
	hConsole = GetStdHandle (STD_OUTPUT_HANDLE);

	for (int k=0;k<256;k++){
	SetConsoleTextAttribute(hConsole,k);
    cout<<"Color: "<<k<<endl;
	}
	SetConsoleTextAttribute(hConsole,7);
}

void decimaltable(){
    HANDLE hConsole;
    hConsole = GetStdHandle (STD_OUTPUT_HANDLE);

    int nValue;

    for (int i=0;i<255;i++){

    if (i%2==0){
        SetConsoleTextAttribute(hConsole,7);
    }
    else{
        SetConsoleTextAttribute(hConsole,12);
    }

    nValue=i;
    char cValue=(char) nValue;
    cout<<i<<" "<<cValue<<endl;
    }
}

void decimalfunction(){
    HANDLE hConsole;
    hConsole = GetStdHandle (STD_OUTPUT_HANDLE);

    int nValue;
    cout << "Enter a decimal value." << endl;
    cin>>nValue;
    char cValue=(char) nValue;
    cout<<"Value is: ";
    SetConsoleTextAttribute(hConsole,12);
    cout<<cValue<<endl;
    SetConsoleTextAttribute(hConsole,7);
}

void revdecimalfunction(){
    HANDLE hConsole;
    hConsole = GetStdHandle (STD_OUTPUT_HANDLE);

    int dValue;
    string cValue;
    cout << "Enter a character." << endl;
    cin>>cValue;

    if (cValue.size()==1){
        dValue=cValue.c_str()[0];
        cout<<"Decimal Value is ";
        SetConsoleTextAttribute(hConsole,12);
        cout<< dValue<<endl;
        SetConsoleTextAttribute(hConsole,7);
    }
    else{
        SetConsoleTextAttribute(hConsole,12);
        cout<<"Invalid input..."<<endl;
        SetConsoleTextAttribute(hConsole,7);
    }
}

void solidcolorfunction(){
    HANDLE hConsole;
    hConsole = GetStdHandle (STD_OUTPUT_HANDLE);


    cout<<"SetConsoleTextAttribute(hConsole,68): ";SetConsoleTextAttribute(hConsole,68);cout<<"0";SetConsoleTextAttribute(hConsole,7);cout<<endl;
    cout<<"SetConsoleTextAttribute(hConsole,204): ";SetConsoleTextAttribute(hConsole,204);cout<<"0";SetConsoleTextAttribute(hConsole,7);cout<<endl;
    cout<<"SetConsoleTextAttribute(hConsole,221): ";SetConsoleTextAttribute(hConsole,221);cout<<"0";SetConsoleTextAttribute(hConsole,7);cout<<endl;
    cout<<"SetConsoleTextAttribute(hConsole,102: ";SetConsoleTextAttribute(hConsole,102);cout<<"0";SetConsoleTextAttribute(hConsole,7);cout<<endl;
    cout<<"SetConsoleTextAttribute(hConsole,238): ";SetConsoleTextAttribute(hConsole,238);cout<<"0";SetConsoleTextAttribute(hConsole,7);cout<<endl;
    cout<<"SetConsoleTextAttribute(hConsole,170): ";SetConsoleTextAttribute(hConsole,170);cout<<"0";SetConsoleTextAttribute(hConsole,7);cout<<endl;
    cout<<"SetConsoleTextAttribute(hConsole,34): ";SetConsoleTextAttribute(hConsole,34);cout<<"0";SetConsoleTextAttribute(hConsole,7);cout<<endl;
    cout<<"SetConsoleTextAttribute(hConsole,51): ";SetConsoleTextAttribute(hConsole,51);cout<<"0";SetConsoleTextAttribute(hConsole,7);cout<<endl;
    cout<<"SetConsoleTextAttribute(hConsole,17): ";SetConsoleTextAttribute(hConsole,17);cout<<"0";SetConsoleTextAttribute(hConsole,7);cout<<endl;
    cout<<"SetConsoleTextAttribute(hConsole,153): ";SetConsoleTextAttribute(hConsole,153);cout<<"0";SetConsoleTextAttribute(hConsole,7);cout<<endl;
    cout<<"SetConsoleTextAttribute(hConsole,187): ";SetConsoleTextAttribute(hConsole,187);cout<<"0";SetConsoleTextAttribute(hConsole,7);cout<<endl;
    cout<<"SetConsoleTextAttribute(hConsole,85): ";SetConsoleTextAttribute(hConsole,85);cout<<"0";SetConsoleTextAttribute(hConsole,7);cout<<endl;
    cout<<"SetConsoleTextAttribute(hConsole,119): ";SetConsoleTextAttribute(hConsole,119);cout<<"0";SetConsoleTextAttribute(hConsole,7);cout<<endl;
    cout<<"SetConsoleTextAttribute(hConsole,136): ";SetConsoleTextAttribute(hConsole,136);cout<<"0";SetConsoleTextAttribute(hConsole,7);cout<<endl;
    cout<<"SetConsoleTextAttribute(hConsole,255): ";SetConsoleTextAttribute(hConsole,255);cout<<"0";SetConsoleTextAttribute(hConsole,7);cout<<endl;
}
