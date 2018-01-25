#include <iostream>
#include <cstdlib>//header file that contains the rand() function
#include <ctime>//header file that contains srand() fuction
#include <locale>
using namespace std;
int range1, range2;
int num_of_trials;
const int MAX_TRIES=5;
int letterFill (char, string, string&);
void playGuessGame()
{
    char answer;
    char name[30];
    cout<<"HELLO, WHAT'S YOUR NAME ?\n";
    cin>>name;
    locale loc;
    string str= name;
    cout<<"HELLO ";
    for (string::size_type i=0; i<str.length(); ++i)
                    cout << toupper(str[i],loc);
    cout<<", YOU ARE ABOUT TO PLAY A GUESS GAME\n";
    cout<<"YOU ARE TO GUESS A NUMBER FROM ONE(1) TO ONE HUNDRED(100)\n";
    cout<<"YOU HAVE FIVE(5) NUMBER OF TRIALS\n";
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
                break;
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
    locale loc;
    string str= name;
    cout<<"HELLO ";
    for (string::size_type i=0; i<str.length(); ++i)
                    cout << toupper(str[i],loc);
    cout<<", YOU ARE ABOUT TO PLAY A GUESS GAME\n";
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
        if (trials == num_of_trials)
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
    cout <<"DO YOU WANT TO PLAY?\n";
    cout <<"TYPE 1. GUESS THE NUMBER \n";
    cout <<"TYPE 2. HANGMAN\n";
    cout <<"TYPE 3. TO END GAME\n";
    cout <<"TYPE THE NUMBER BELOW\n";
    cin>>choice;
    if (choice == 1) // this is where the guess number game will be called
    {
        cout<<"WOULD YOU LIKE TO PLAY A DEFAULT GAME OR A CUSTOM GAME? \n";
        cout<<"1 FOR DEFAULT GAME ------> HERE YOU GUESS BTW 1 - 100 AND HAVE FIVE(5) TRIES \n";
        cout<<"2 FOR CUSTOM GAME ------> YOU DECIDE THE RULES OF THIS GAME \n";
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

    if (choice == 2)
    {
        char name[30];
        char letter;
        int num_of_wrong_guesses=0;
        string word;
        string words[15];
        int choice;
        cout << "SO WHAT'S YOUR NAME USER ?\n";
        cin >> name;
        locale loc;
        string str = name;
        cout<<"HELLO ";
        for (string::size_type i=0; i<str.length(); ++i)
            cout << toupper(str[i],loc);
        cout << ", THIS IS THE HANGMAN PROGRAM\n";
        cout << "IN THIS GAME YOU GET TO GUESS WORDS BY GUESSING THE LETTER ONE BY ONE\n";
        cout << "\n";
        choice = -1;

        while (choice < 4)
        {
            cout << "WHAT CATEGORY OF WORDS WOULD YOU LIKE TO GUESS\n";
            cout << "1. COUNTRIES\n";
            cout << "2. NAMES\n";
            cout << "3. MOVIES\n";
            cout << "4. END GAME\n";
            cin >> choice;
            if (choice == 1){
            //choose and copy a word from array of words randomly
            string words[15] = {"albania","switzerland","nigeria","paraguay","madagascar","england","brazil","argentina","burkina faso","ghana","australia","afghanistan","grenada","qatar","Mozambique"};
            srand((int)time(0));
            //randomly choices numbers from 0-11
            int n=((rand()%11));
            word=words[n];
            //replaces the words with *
            string unknown(word.length(),'*');
            cout << "EACH LETTER IS REPRESENTED AS AN ASTERISK\n";
            cout << "YOU HAVE TO TYPE ONLY ONE LETTER AT A TIME\n";
            cout << "YOU HAVE "<< MAX_TRIES << " TRIES TO TRY AND GUESS THE COUNTRY.\n";
            // Loop until the guesses are used up
            while (num_of_wrong_guesses < MAX_TRIES)
            {
                cout << "\n\n" << unknown;
                cout << "\n\nGuess a letter: ";
                cin >> letter;
                // changes capital letter to small letter
                letter = tolower(letter);
                // Fill secret word with letter if the guess is correct,
                // otherwise increment the number of wrong guesses.
                if (letterFill(letter, word,unknown)==0)
                {
                    if(isalpha(letter)){
                        cout << endl << "Whoops! That letter isn't in there!" << endl;
                        num_of_wrong_guesses++;
                    }
                    else{
                        cout << endl << "THAT IS'NT EVEN A LETTER" << endl;
                        num_of_wrong_guesses++;
                    }

                }
                else
                {
                    cout << endl << "Great, You found a letter! " << endl;
                }
                // Tell user how many guesses has left.
                cout << "You have " << MAX_TRIES - num_of_wrong_guesses;
                cout << " guesses left." << endl;
                // Check if user guessed the word.
                if (word==unknown)
                {
                    cout << word << endl;
                    cout << "Yeah! You got it!";
                    break;
                }
            }
        if(num_of_wrong_guesses == MAX_TRIES)
        {
            cout << "\nSorry, you lose...you've been hanged." << endl;
            cout << "The word was : " << word << endl;
        }
        cin.ignore();
        cin.get();

        }
        else if (choice == 2){
            string words[15] = {"joshua","noel","hikima","khloe","cartman","melchizedek","balogun","bright","chidinma","beautrice","angelina","testimony","quincy","pamela","kim"};
            //choose and copy a word from array of words randomly
            srand((int)time(0));
            int n=((rand()%11)); //randomly choices numbers from 0-11
            word=words[n];
            //replaces the words with *
            string unknown(word.length(),'*');
            cout << "EACH LETTER IS REPRESENTED AS AN ASTERISK\n";
            cout << "YOU HAVE TO TYPE ONLY ONE LETTER AT A TIME\n";
            cout << "YOU HAVE "<< MAX_TRIES << " TRIES TO TRY AND GUESS THE NAME.\n";

            // Loop until the guesses are used up
            while (num_of_wrong_guesses < MAX_TRIES)
            {
                cout << "\n\n" << unknown;
                cout << "\n\nGuess a letter: ";
                cin >> letter;
                letter = letter + 32;
                // Fill secret word with letter if the guess is correct,
                // otherwise increment the number of wrong guesses.
                if (letterFill(letter, word, unknown)==0)
                {
                    if(isalpha(letter)){
                        cout << endl << "Whoops! That letter isn't in there!" << endl;
                        num_of_wrong_guesses++;
                        }
                    else{
                        cout << endl << "THAT IS'NT EVEN A LETTER" << endl;
                        num_of_wrong_guesses++;
                    }

                }
                else
                {
                    cout << endl << "Great, You found a letter! " << endl;
                }
                // Tell user how many guesses has left.
                cout << "You have " << MAX_TRIES - num_of_wrong_guesses;
                cout << " guesses left." << endl;
                // Check if user guessed the word.
                if (word==unknown)
                {
                    cout << word << endl;
                    cout << "Yeah! You got it!";
                    break;
                }
            }
        if(num_of_wrong_guesses == MAX_TRIES)
        {
            cout << "\nSorry, you lose...you've been hanged." << endl;
            cout << "The name was : " << word << endl;
        }
cin.ignore();
cin.get();
}
        else if (choice == 3){
            string words[15] = {"jumanji","thor ragnorok","justice league","it","overdrive","power rangers","hitman bodyguard","spiderman homecoming","black panther","avengers infinity wars","dunkirk","john wick","hidden figures","wonder woman","logan"};
            //choose and copy a word from array of words randomly
            srand((int)time(0));
            int n=((rand()%11)); //randomly choices numbers from 0-11
            word=words[n];
            //replaces the words with *
            string unknown(word.length(),'*');
            cout << "EACH LETTER IS REPRESENTED AS AN ASTERISK\n";
            cout << "YOU HAVE TO TYPE ONLY ONE LETTER AT A TIME\n";
            cout << "YOU HAVE "<< MAX_TRIES << " TRIES TO TRY AND GUESS THE MOVIE.\n";

            // Loop until the guesses are used up
            while (num_of_wrong_guesses < MAX_TRIES)
            {
                cout << "\n" << unknown;
                cout << "\nGuess a letter: ";
                cin >> letter;
                letter = letter + 32;
                // Fill secret word with letter if the guess is correct,
                // otherwise increment the number of wrong guesses.
                if (letterFill(letter, word, unknown)==0)
                {
                    if(isalpha(letter)){
                        cout << endl << "Whoops! That letter isn't in there!" << endl;
                        num_of_wrong_guesses++;
                        }
                    else{
                        cout << endl << "THAT IS'NT EVEN A LETTER" << endl;
                        num_of_wrong_guesses++;
                    }

                }
                else
                {
                    cout << endl << "Great, You found a letter! " << endl;
                }
                // Tell user how many guesses has left.
                cout << "You have " << MAX_TRIES - num_of_wrong_guesses;
                cout << " guesses left." << endl;
                // Check if user guessed the word.
                if (word==unknown)
                {
                    cout << word << endl;
                    cout << "Yeah! You got it!";
                    break;
                }
    }
        if(num_of_wrong_guesses == MAX_TRIES)
        {
            cout << "\nSorry, you lose...you've been hanged." << endl;
            cout << "The movie was : " << word << endl;
        }
    cin.ignore();
    cin.get();
}
    else if (choice == 4){
        cout << "GAME SHUTTING DOWN\n";
        break;
    }
    else{
        cout << "GAME SHUTTING DOWN\n";
        cout << "NEXT TIME,PLEASE TYPE IN THE GIVEN OPTIONS (1,2,3,4)\n";
        break;
    }

}

}

return 0;
    }
/* Take a one character guess and the secret word, and fill in the
unfinished guessword. Returns number of characters matched.
Also, returns zero if the character is already guessed. */
int letterFill (char guess, string secretword, string &guessword)
{
    int i;
    int matches=0;
    int len=secretword.length();
    for (i = 0; i< len; i++)
    {
    // Did we already match this letter in a previous guess?
        if (guess == guessword[i])
            return 0;
    // Is the guess in the secret word?
        if (guess == secretword[i])
        {
            guessword[i] = guess;
            matches++;
        }
    }
return matches;

}
