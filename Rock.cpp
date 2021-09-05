#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <conio.h>
using namespace std;
int main()
{
    string Player_Name;
    system("cls");
    cout << "Enter the Player's Name: ";
    cin >> Player_Name;
    int rounds;
    cout << "Enter the number of rounds you want to play: ";
    cin >> rounds;
    int Player_Score = 0, Computer_Score = 0;
    int round_no;
    int Players_choice, Computers_choice;
    for (round_no = 1; round_no <= rounds; round_no++)
    {
        // system("cls");
        cout << "The Round Number is: " << round_no << endl;
        cout << Player_Name << "'s score is: " << Player_Score << endl;
        cout << "The Computer's score is: " << Computer_Score << endl;
        cout << "--------***--------" << endl;
        cout << "Select any option of your choice from the options given below: " << endl;
        cout << "1.) Rock" << endl
             << "2.) Paper" << endl
             << "3.) Scissors" << endl;
        do
        {
            cout << "Enter you choice" << endl;
            cin >> Players_choice;
        } while (Players_choice != 1 && Players_choice != 2 && Players_choice != 3);
        srand(time(0));
        Computers_choice = (rand() % 3) + 1;
        if (Players_choice == 1 && Computers_choice == 3)
        {
            cout << Player_Name << " wins the round number " << round_no << endl;
            Player_Score++;
        }
        else if (Players_choice == 2 && Computers_choice == 1)
        {
            cout << Player_Name << " wins the round number " << round_no << endl;
            Player_Score++;
        }
        else if (Players_choice == 3 && Computers_choice == 2)
        {
            cout << Player_Name << " wins the round number " << round_no << endl;
            Player_Score++;
        }
        else if (Players_choice == Computers_choice)
        {
            cout << "The round is tied between " << Player_Name << " and computer" << endl;
        }
        else
        {
            cout << "computer wins the round number " << round_no << endl;
            Computer_Score++;
        }
        cout << "Press any key to continue" << endl;
        getch();
    }
    if (Computer_Score == Player_Score)
    {
        cout << "The game is tied between computer and " << Player_Name << endl;
    }
    else if (Computer_Score > Player_Score)
    {
        cout << "The game is won by computer" << endl;
    }
    else
    {
        cout << Player_Name << " has won the game" << endl;
    }
    return 0;
}