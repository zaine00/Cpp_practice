#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
/*
int main()
{
    int n;
    cout << left<< setw(4)<<"1" << "Cola" <<endl;
   cout << setw(4)<<"2" << "Water" <<endl;
    cout << setw(4)<<"3" << "Tea" <<endl;
    cout << setw(4)<<"4" << "Coffee" <<endl;
    cout << setw(4) << "5"<< "Sprite" <<endl;
    cout << "Type in the number for the drink you wish to drink." << endl;
    cin >> n;
    if(n==1){
        cout     << "Cola  is being dispensed."<<    endl;
        }
            else if (n     == 2){
        cout     << "Water is being dispensed."<< endl;
        }
            else if (n     == 3){
        cout     << "Tea is being dispensed."<< endl;
        }
            else if (n     == 4){
        cout     << "Coffee is being dispensed."<< endl;
        }
            else if (n     == 5){
        cout     << "Sprite is being dispensed."<< endl;
        }
            else
        cout     << "Error, choice was not valid, here is your money back."<< endl;
    return 0;
}
*/
int main()
{
    int n;
    cout << left<< setw(4)<<"1" << "Cola" <<endl;
    cout << setw(4)<<"2" << "Water" <<endl;
    cout << setw(4)<<"3" << "Tea" <<endl;
    cout << setw(4)<<"4" << "Coffee" <<endl;
    cout << setw(4) << "5"<< "Sprite" <<endl;
    cout << "Type in the number for the drink you wish to drink." << endl;
    cin >> n;
    switch(n)
    {
    case 1:{
        cout<< "Cola is being dispensed." << endl;
        break;
        }
    case 2:{
        cout<< "Water is being dispensed." << endl;
        break;
        }
    case 3:{
        cout<< "Tea is being dispensed." << endl;
        break;
        }
    case 4:{
        cout<< "Coffee is being dispensed." << endl;
        break;
        }
    case 5:{
        cout<< "Sprite is being dispensed." << endl;
        break;
        }
    default:{cout << "Error, choice was not valid, here is your money back." <<endl;}
    return 0;
    }
}
