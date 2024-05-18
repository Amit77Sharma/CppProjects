/*Casino Number Guessing game*/
/*Casino is a Number Guessing Game. 
Player deposits an initial amount to start playing game. He guesses a number between 1 to 100 and enters betting amount. 
If he wins he will get 10 times of money he bets.*/

#include <iostream>
#include <stdlib.h>

using namespace std;
int generateRandomNumber();
int upper_limit = 10;
int lower_limit = 1;

int main(){
    system("clear");
    cout<<"-------------------------Welcome to Casino Number Guessing Game ------------------------------- "<<endl;
    cout<<"-------------------------Developed by Amit Sharma-----------------------------------------------"<<endl;
    sub:
    cout<<"                         MENU: "<<endl;
    cout<<"                         1. for Begineers Level (No of Chances 10 & Number to Guess between "<<lower_limit<<" to "<< upper_limit << ")"<<endl;
    cout<<"                         2. for Medium Level (no of Chances 7 & Numbeers to Guess between "<<lower_limit<<" to "<< upper_limit << ")"<<endl;
    cout<<"                         3. for Difficult Level (no of Chances 5 & numbers to Guess between "<<lower_limit<<" to "<< upper_limit << ")"<<endl;
    cout<<"                         4. Exit "<<endl;
    
    int difficultChoice;
    int user_amount;
    int userTotalAmount = 0;
    int guess_number;
    string option;
    while(true){
        cout<<"                         Enter your Choice "<<endl;
        cin>>difficultChoice;
        int result = generateRandomNumber();

        if(difficultChoice == 1){
            /*Give the Chance to the Player for 10 times to Guess */
            cout<<"------------------------------------------------------------------"<<endl;
            cout<<"Enter Amount : "<<endl;
            cin>>user_amount;
            userTotalAmount += user_amount;
            int chanceLeft = 10;
            for(int i=0; i<10; i++){
                cout<<"Guess the number "<<endl;
                cin>>guess_number;

                if(chanceLeft > 0){
                    if(result == guess_number){
                        userTotalAmount += user_amount * 10;
                        cout<<"Well Played! you won "<< user_amount * 10 << endl;
                        cout<<"Total amount is "<< userTotalAmount << endl;
                        cout<<"Do You want to Play the game again ? type 'yes' or 'YES' "<<endl;
                        cin>>option;
                        if(option == "yes" || option == "YES"){
                            goto sub;
                        } else {
                            exit(EXIT_SUCCESS);
                        }
                    } else {
                        cout<< "Oh no! you left the chance "<< --chanceLeft << endl;
                        cout<<"Try Again "<<endl;
                        if(chanceLeft == 0){
                            userTotalAmount -= user_amount;
                            cout<<"Oh no! You loose the game: remaining userTotalAmount "<<userTotalAmount<<endl;
                            cout<<"Do You want to Play the game again ? type 'yes' or 'YES' "<<endl;
                            cin>>option;
                            if(option == "yes" || option == "YES"){
                                goto sub;
                            } else {
                                exit(EXIT_SUCCESS);
                            }
                        }
                    }
                }
            }
        } else if(difficultChoice == 2){
            /*Give the Chance to the player for 7 times to Guess */
            cout<<"------------------------------------------------------------------"<<endl;
            cout<<"Enter Amount : "<<endl;
            cin>>user_amount;
            int chanceLeft = 7;
            for(int i=0; i<7; i++){
                cout<<"Guess the number "<<endl;
                cin>>guess_number;

                if(chanceLeft > 0){
                    if(result == guess_number){
                        userTotalAmount += user_amount * 10;
                        cout<<"Well Played! you won "<< user_amount * 10 << endl;
                        cout<<"Total amount is "<< userTotalAmount << endl;
                        cout<<"Do You want to Play the game again ? type 'yes' or 'YES' "<<endl;
                        cin>>option;
                        if(option == "yes" || option == "YES"){
                            goto sub;
                        } else {
                            exit(EXIT_SUCCESS);
                        }
                    } else {
                        cout<< "Oh no! you left the chance "<< --chanceLeft << endl;
                        cout<<"Try Again "<<endl;
                        if(chanceLeft == 0){
                            userTotalAmount -= user_amount;
                            cout<<"Oh no! You loose the game: remaining userTotalAmount "<<userTotalAmount<<endl;
                            cout<<"Do You want to Play the game again ? type 'yes' or 'YES' "<<endl;
                            cin>>option;
                            if(option == "yes" || option == "YES"){
                                goto sub;
                            } else {
                                exit(EXIT_SUCCESS);
                            }
                        }
                    }
                }
            }
        } else if(difficultChoice == 3){
            /*Give the Chance to the player for 5 times to Guess */
            cout<<"------------------------------------------------------------------"<<endl;
            cout<<"Enter Amount : "<<endl;
            cin>>user_amount;
            int chanceLeft = 5;
            for(int i=0; i<5; i++){
                cout<<"Guess the number "<<endl;
                cin>>guess_number;

                if(chanceLeft > 0){
                    if(result == guess_number){
                        userTotalAmount += user_amount * 10;
                        cout<<"Well Played! you won "<< user_amount * 10 << endl;
                        cout<<"Total amount is "<< userTotalAmount << endl;
                        cout<<"Do You want to Play the game again ? type 'yes' or 'YES' "<<endl;
                        cin>>option;
                        if(option == "yes" || option == "YES"){
                            goto sub;
                        } else {
                            exit(EXIT_SUCCESS);
                        }
                    } else {
                        cout<< "Oh no! you left the chance "<< --chanceLeft << endl;
                        cout<<"Try Again "<<endl;
                        if(chanceLeft == 0){
                            userTotalAmount -= user_amount;
                            cout<<"Oh no! You loose the game: remaining userTotalAmount "<<userTotalAmount<<endl;
                            cout<<"Do You want to Play the game again ? type 'yes' or 'YES' "<<endl;
                            cin>>option;
                            if(option == "yes" || option == "YES"){
                                goto sub;
                            } else {
                                exit(EXIT_SUCCESS);
                            }
                        }
                    }
                }
            }
        } else if(difficultChoice == 4){
            /*End the Game by showing the Total amount....*/
            cout<<"Hurrey! You have the Total Amount Left: " <<userTotalAmount<<endl;
            exit(EXIT_SUCCESS);
        }
    }
    return 0;
}

int generateRandomNumber(){
    int number;
    srand(time(NULL));
    number = (rand() % (upper_limit - lower_limit) + 1);
    return number;
}