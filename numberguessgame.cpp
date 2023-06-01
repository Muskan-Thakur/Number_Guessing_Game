#include <iostream>
#include <string> // Needed to use strings
#include <cstdlib> // Needed to use random numbers
#include <ctime>
using namespace std;
 
int main()
{
    string playerName;
    int amount; // hold player's balance amount
    int bettingAmount; 
    int guess;
    int dice; // hold computer generated number
    char choice;
 
    srand(time(0)); // "Seed" the random generator

    

    cout<<"-----------------------------------------------";
    cout << "\n\n\n\t\t NUMBER GUESSING GAME\n\n\n\n";
     cout<<"-----------------------------------------------";

 
    cout << "\n\nEnter Your Name : ";
    getline(cin, playerName);
 
    cout << "\n\nEnter Deposit amount to play game : $";
    cin >> amount;
    
    do
    {
        system("cls");
        cout << "\n\n";
    
        for(int i=0; i<80; i++) //display of rules started
        {cout <<'-';}
        cout << "\n" ;
    
        cout << "\t\tRULES OF THE GAME\n";
    
        for(int i=0; i<80; i++)
        {cout <<'-';}
        cout << "\n" ;

        cout << "\t1. Choose any number between 1 to 10\n";
        cout << "\t2. If you win you will get 10 times of money you bet\n";
        cout << "\t3. If you bet on wrong number you will lose your betting amount\n\n";
    
        for(int i=0; i<80; i++)
        {cout <<'-';}
        cout << "\n" ; //display of rules ended


        cout << "\n\nYour current balance is $ " << amount << "\n";
		
		// Get player's betting amount
        do
        {
            cout <<playerName<<", enter money to bet : $";
            cin >> bettingAmount;
            if(bettingAmount > amount)
                cout << "Your betting amount is more than your current balance\n"
                       <<"\nRe-enter data\n ";
        }while(bettingAmount > amount);
 
		// Get player's numbers
        do
        {
            cout << "Guess your number to bet between 1 to 10 :";
            cin >> guess;
            if(guess <= 0 || guess > 10)
                cout << "Please check the number!! should be between 1 to 10\n"
                    <<"\nRe-enter data\n ";
        }while(guess <= 0 || guess > 10);
 
        dice = rand()%10 + 1; // Will hold the randomly generated integer between 1 and 10
    
        if(dice == guess)
        {
            cout << "\n\nGood Luck!! You won Rs." << bettingAmount * 10;
            amount = amount + bettingAmount * 10;
        }
        else
        {
            cout << "Bad Luck this time !! You lost $ "<< bettingAmount <<"\n";
            amount = amount - bettingAmount;
        }
 
        cout << "\nThe winning number was : " << dice <<"\n";
        cout << "\n"<<playerName<<", You have $ " << amount << "\n";
        if(amount == 0)
        {
            cout << "You have no money to play ";
            break;
        }
        cout << "\n\n-->Do you want to play again (y/n)? ";		
        cin >> choice;
    }while(choice =='Y'|| choice=='y');
    
    cout << "\n\n\n";
    
    for(int i=0; i<70; i++)
        {cout<< '=';}
    cout << "\n" ;
    
    cout << "\n\nThanks for playing game. Your balance amount is $ " << amount << "\n\n";
    
    for(int i=0; i<70; i++)
        {cout<< '=';}
    cout << "\n" ;
 
    return 0;
}

 
