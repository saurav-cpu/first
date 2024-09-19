//currency converter 
#include <iostream>
using namespace std;
int main()
{
    int A,C;
    cout<<"thank you for using this currency converter"<<endl<<"this currency converter convert currency in INR"<<endl;
    cout<<"Enter the amount= ";
    cin>>A;
    cout<<"secect your currency"<<endl;
    cout<<"1 for us Doller"<<endl<<"2 for chinese yuan"<<endl<<"3 for japanese yen"<<endl<<"4 for euro"<<endl<<"5 for UK pound"<<endl;
    cout<<"6 for brazillan real"<<endl<<"7 for canadian dollar"<<endl<<"8 for russian ruble"<<endl<<"9 for australian dollar"<<endl<<"10 for south korea won"<<endl;
    cin>>C;
    switch (C)
    {
    case 1:
    cout<<A<<" us doller in INR = "<<(A*84);
    break;
    case 2:
    cout<<A<<" chinese yuan in INR = "<<(A*12);
    break;
    case 3:
    cout<<A<<" yen in INR = "<<(A*0.5);
    break;
    case 4:
    cout<<A<<" euro in INR = "<<(A*93);
    break;
    case 5:
    cout<<A <<" UK pound in INR = "<<(A*110);
    break;
    case 6:
    cout<<A<<" brazillan real in INR = "<<(A*15);
    break;
    case 7:
    cout<<A<<" canadian Dollar in INR = "<<(A*62);
    break;
    case 8:
    cout<<A<<" russian ruble in INR = "<<(A*0.9);
    break;
    case 9:
    cout<<A<<" australian dollar in INR = "<<(A*56);
    break;
    case 10:
    cout<<A<<" south korea won in INR = "<<(A*0.06);
    break;
    }
    return 0;
}