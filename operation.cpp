#include<iostream>
using namespace std;

void arith_opr() {
    int a, b, n;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout << "Choose an operation (1: Addition, 2: Subtraction, 3: Multiplication, 4: Division, 5: Modulo): ";
    cin >> n;
    switch(n) {
        case 1 : cout<<"Addition : "<<a+b<<endl;
        break;
        case 2 : cout<<"Substraction : "<<a-b<<endl;
        break;
        case 3 : cout<<"Multiplication : "<<a*b<<endl;
        break;
        case 4 : if(b!=0) {
                    cout<<"Division : "<<a/b<<endl;
                }
                else {
                    cout<<"Error!"<<endl;
                }
        break;
        case 5 : cout<<"Modulo : "<<a%b<<endl;
        break;
        default : cout<<"Invalid output"<<endl;
        break;
    }
}

void gl_val() {
    int a, b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    if(a>b) {
        cout<<"Greater value = "<<a<<endl;
    }
    else {
        cout<<"Least value = "<<a<<endl;
    }
}

void bank_trans() {
    int bal=10000, dep, with, op;
    cout<<"1. Check Balance"<<endl;
    cout<<"2. Deposite"<<endl;
    cout<<"3. Withdraw"<<endl;
    cout<<"What do you want : ";
    cin>>op;
    switch(op) {
        case 1 : cout<<"Your avalaible balance : "<<bal<<endl;
        break;
        case 2 : cout<<"Enter amount to deposit: ";
                 cin>>dep;
                 cout<<"Updated Balnce : "<<bal+dep<<endl;
        break;
        case 3 : cout<<"Enter amount to withdraw : ";
                cin>>with;
                if(with<=bal) {
                    cout<<"Remaining Balance : "<<(bal+dep)-with<<endl;
                }
                cout<<"Enter Amount to withdraw : ";
                cin>>with;
        break;
        default : cout<<"Exit"<<endl;
        break;
    }
}

int main()
{
    int ch;
    cout<<"1. Arithmetic Operation"<<endl;
    cout<<"2. Greatest and Least value"<<endl;
    cout<<"3. Banking Tansaction"<<endl;
    cout<<"4. Exit"<<endl;   
    do {  
        cout<<"Enter your choice : ";
        cin>>ch; 
        switch(ch) {
            case 1 : arith_opr();
            break;
            case 2 : gl_val();
            break;
            case 3 : bank_trans();
            break;
            case 4 : cout<<"Exit"<<endl;
            break;
        }
    }
    while(ch!=4);
    return 0;
}