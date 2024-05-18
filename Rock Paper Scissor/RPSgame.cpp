/*-------------------------Project Rock Paper Scissor or Stone Paper Scissor Game Development-----------------------------*/

#include <iostream>
#include <stdlib.h>

using namespace std;

char getComputerMove();
int getResult(char user_move, char computer_move);

int main(){
    system("clear");
    char user_input;
    int userWinCount = 0;
    int computerWinCount = 0;
    cout<<"-----------------------------Rock Paper Scissor Game or Stone Paper Scissor ----------------------------"<<endl;
    cout<<"------------------------Developed by Amit Sharma---------------------------------"<<endl;
    sub:
    cout<<"-----------------------Select the MENUS for Rock(r), Scissor(s), Paper(p)---------------------------------"<<endl;
    cout<<"          MENUS:"<<endl;
    cout<<"              1. ROCK (r)"<<endl; 
    cout<<"              2. PAPER (p)"<<endl;
    cout<<"              3. Scissor (s)"<<endl;
    cout<<"              4. Exit (e)"<<endl;
    while(true){
        cin>>user_input;
        if(user_input == 'p' || user_input == 'r' || user_input == 's'){
            break;
        }else if(user_input == 'e'){

            /*check who is the winner */
            if(computerWinCount > userWinCount){
                cout<<"Hurrey! Computer won Successfully "<< computerWinCount<< endl;
                exit(EXIT_SUCCESS);
            } else if(computerWinCount == userWinCount){
                cout<<" Match draw Successfully "<<endl;
                exit(EXIT_SUCCESS);
            } else {
                cout<<"Hurrey! You win Successfully "<< userWinCount <<endl;
                exit(EXIT_SUCCESS);
            }

        } else {
            system("clear");
            cout<< "Invalid input Please eneter the valid input"<<endl;
            cout<< "choose Again" << endl;
            cout<<"--------------------------------------------------------------"<<endl;
            goto sub;
        }
    }

    int result = getResult(user_input,getComputerMove());

    /*lets check the result if the Result is 1 it means that the user is the winner, else 0 computer is winner , other wise match draw */
    if(result){
        userWinCount++;
        system("clear");
        cout<<"---------------------------------------------------------------"<<endl;
        cout<< "yeh!, You Win Successfully " <<endl;
        goto sub;
    } else if(result == 0){
        system("clear");
        cout<<"----------------------------------------------------------------"<<endl;
        cout<< "oops!, match Draw successfully "<< endl;
        goto sub;
    } else {
        computerWinCount++;
        system("clear");
        cout<<"---------------------------------------------------------------"<<endl;
        cout<< "yeh! Computer Win Successfully "<< endl;
        goto sub;
    }
    return 0;
}

char getComputerMove(){
    int move; 

    // generating random number between 0 - 2 
    srand(time(NULL)); 
    move = rand() % 3; 
  
    // returning move based on the random number generated 
    if (move == 0) { 
        return 'p'; 
    } else if (move == 1) { 
        return 's'; 
    } 

    return 'r';
}

int getResult(char user_move, char computer_move){

    if(user_move == computer_move){
        return 0;
    } 
    // condition for win and loss according to game rule 
    if (user_move == 's' && computer_move == 'p') { 
        return 1; 
    }

    if (user_move == 's' && computer_move == 'r') { 
        return -1; 
    } 

    if (user_move == 'p' && computer_move == 'r') { 
        return 1; 
    } 
    if (user_move == 'p' && computer_move == 's') { 
        return -1; 
    } 
    if (user_move == 'r' && computer_move == 'p') { 
        return -1; 
    } 
    if (user_move == 'r' && computer_move == 's') { 
        return 1; 
    } 

    return 0;
}