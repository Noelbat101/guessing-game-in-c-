#include <iostream>
#include <cstdlib>//header file that contains the rand() function
#include <ctime>//header file that contains srand() fuction
#include <locale>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
int range1, range2;
int num_of_trials;
void playGuessGame()
{
    char answer;
    char name[30];
    cout<<"HELLO, WHAT'S YOUR NAME ?\n";
    cin>>name;
    strupr(name);
    cout<<"HELLO "<<name<<", YOU ARE ABOUT TO PLAY A GUESS GAME\n";
    strrev(name);
    cout<<"HERE IS YOUR NAME IN REVERSE :D\n" ;
    cout<< name;
    cout<<"\n*******************************************************************\n";
    cout<<"\nYOU ARE TO GUESS A NUMBER FROM ONE(1) TO ONE HUNDRED(100)\n";
    cout<<"YOU HAVE FIVE(5) NUMBER OF TRIALS/n";
    cout<<"GOOD LUCK!!!!!!!!!\n";
    while (answer !='n')
   {
     cout<<"DO YOU WANT TO PLAY ?\n";
     cout<<"Y OR N\n";
     cin>>answer;
     if((answer == 'Y') || (answer =='y'))
     {
        int number, guess = 0, trials = 0;
        srand((int)time(0)); // makes the result of rand() change every time the program is run. the rand() function creates random numbers but its result dont change when the program is rn again
        number = ((rand()%100)+1); //produces random numbers from 1 - 100
        for (trials = 0; trials<5; trials +=1)// makes the code run for five times which is the number of trials
        {

            cout<<"SO CAN YOU GUESS THE NUMBER ?\n";
            cin>> guess;
            if (number < guess)
            {
                cout<<"THE NUMBER IS SMALLER THAN THE YOUR GUESS\n";
            }
            if (number > guess)
            {
                cout<<"THE NUMBER IS BIGGER THAN THE YOUR GUESS\n";
            }
            if (guess == number)
            {
                cout<<"CONGRATULATIONS, YOU GOT THE NUMBER\n";
                break;
            }
        }
        if (trials == 5)
            {
                cout<<"SORRY, YOU'VE LOST ALL YOUR CHANCES \n";
                cout<<"THE CORRECT NUMBER IS "<<number<<endl ;
            }

     }
            else if (answer == 'N' || answer =='n')
            {
                cout<<"GAME SHUTTING DOWN\n";
            }
            else{
                cout<<"PLEASE TYPE 'Y' TO PLAY OR TYPE 'N' TO QUIT\n";
            }
}
}
void customGame()
{
    char choice ='n';
    while (choice =='n')
    {
        cout<<"HELLO, HERE YOU CAN MAKE YOUR OWN CUSTOM GAME TO CHALLENGE YOUR FRIENDS\n";
        cout<<"YOUR NUMBER IS RANGING FROM -- TO --\n";
        cout<<"WRITE THE SMALLER NUMBER BELOW\n";

        cin>>range1;
        cout<<"WRITE THE LARGER NUMBER BELOW\n";
        cin>>range2;
        cout<<"HOW MANY TRIALS DO YOU WANT FOR YOUR GAME? \n";
        cin>>num_of_trials;
        cout<<"THERE FORE YOUR CUSTOM GAME IS RANGING FROM "<<range1<<" TO "<<range2<<" AND HAS "<<num_of_trials<<" TRIALS\n";;
        cout<<"IS THIS WHAT YOU WANT TO PLAY ? \n";
        cout<<"Y OR N\n";
        cin>>choice;
        if (choice == 'y' || choice == 'Y')
        {
            break;
        }
    }
    char answer;
    char name[30];
    cout<<"HELLO, WHAT'S YOUR NAME ?\n";
    cin>>name;
    cout<<"HELLO "<<name<<", YOU ARE ABOUT TO PLAY A GUESS GAME\n";
    cout<<"YOU ARE TO GUESS A NUMBER FROM "<<range1<<" TO "<< range2<<endl;
    cout<<"YOU HAVE "<<num_of_trials<<" NUMBER OF TRIALS\n";
    cout<<"GOOD LUCK!!!!!!!!!\n";
    while (answer !='n')
   {
     cout<<"DO YOU WANT TO PLAY ?\n";
     cout<<"Y OR N\n";
     cin>>answer;
     if((answer == 'Y') || (answer =='y'))
     {
        int number, guess = 0, trials = 0;
        srand((int)time(0)); // makes the result of rand() change every time the program is run. the rand() function creates random numbers but its result dont change when the program is rn again
        number = ((rand()%range2)+range1); //produces random numbers from what ever the user chooses
        for (trials = 0; trials<num_of_trials; trials +=1)// makes the code run for the given times which is the number of trials
        {

            cout<<"SO CAN YOU GUESS THE NUMBER ?\n";
            cin>> guess;
            if (number < guess)
            {
                cout<<"THE NUMBER IS SMALLER THAN THE YOUR GUESS\n";
            }
            if (number > guess)
            {
                cout<<"THE NUMBER IS BIGGER THAN THE YOUR GUESS\n";
            }
            if (guess == number)
            {
                cout<<"CONGRATULATIONS, YOU GOT THE NUMBER\n";
                break;
            }
        }
        if (trials == 5)
            {
                cout<<"SORRY, YOU'VE LOST ALL YOUR CHANCES \n";
                cout<<"THE CORRECT NUMBER IS "<<number<<endl ;
            }


            else if (answer == 'N' || answer =='n')
            {
                cout<<"GAME SHUTTING DOWN\n";
            }
            else{
                cout<<"PLEASE TYPE 'Y' TO PLAY OR TYPE 'N' TO QUIT\n";
            }
     }
}
}
//this is where the guess number game ends
int main()
{
    int choice;
    cout <<"WELCOME TO GROUP SIX GAMING SYSTEM \n";
    cout <<"WHICH GAME WILL YOU LIKE TO PLAY \n";
    cout <<"TYPE 1. GUESS THE NUMBER \n";
    cout <<"TYPE 2. TO END PROGRAM\n";
    cout <<"TYPE THE NUMBER BELOW\n";
    cin>>choice;
    if (choice == 1) // this is where the guess number game will be called
    {
        cout<<"WOULD YOU LIKE TO PLAY A DEFAULT GAME OR A CUSTOM GAME? \n";
        cout<<"1 FOR DEFAULT GAME \n";
        cout<<"2 FOR CUSTOM GAME \n";
        int option;
        cin>>option;
        if (option == 1)
        {
           playGuessGame();
        }
        else if (option == 2)
        {
            customGame();
        }
        else{
            cout<<"THAT IS NOT ONE OR TWO SYSTEM SHUTTING DOWN\n";
        }


    }

    if (choice == 2)// the part was left open to make the program faster
    {
    }
    return 0;
}
