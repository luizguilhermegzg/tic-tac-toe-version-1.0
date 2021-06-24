#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
    char grid[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };
    int nobody_wins = 0;
    _Bool player1 = 1;
    _Bool win;
    system("clear");
    while(player1 == 1 && win == 0 && nobody_wins != 9){
        int choose;
        printf("\n%c | %c | %c\n───────────\n%c | %c | %c\n───────────\n%c | %c | %c", grid[0][0], grid[0][1], grid[0][2], grid[1][0], grid[1][1], grid[1][2], grid[2][0], grid[2][1], grid[2][2]);
        printf("\n\nPlayer 1: ");
        scanf("%i", &choose);
        if (choose <= 9 && choose > 0){
            if (choose == 1 && grid[0][0] != 'X' && grid[0][0] != 'O'){
                grid[0][0] = 'X';
            }
            else if (choose == 2 && grid[0][1] != 'X' && grid[0][1] != 'O'){
                grid[0][1] = 'X';
            }
            else if (choose == 3 && grid[0][2] != 'X' && grid[0][2] != 'O'){
                grid[0][2] = 'X';
            }
            else if (choose == 4 && grid[1][0] != 'X' && grid[1][0] != 'O'){
                grid[1][0] = 'X';
            }
            else if (choose == 5 && grid[1][1] != 'X' && grid[1][1] != 'O'){
                grid[1][1] = 'X';
            }
            else if (choose == 6 && grid[1][2] != 'X' && grid[1][2] != 'O'){
                grid[1][2] = 'X';
            }
            else if (choose == 7 && grid[2][0] != 'X' && grid[2][0] != 'O'){
                grid[2][0] = 'X';
            }
            else if (choose == 8 && grid[2][1] != 'X' && grid[2][1] != 'O'){
                grid[2][1] = 'X';
            }
            else if (choose == 9 && grid[2][2] != 'X' && grid[2][2] != 'O'){
                grid[2][2] = 'X';
            }
            else {
                system("clear");
                continue;
            }

            /// HORIZONTAL
            if(grid[0][0] == 'X' && grid[0][1] == 'X' && grid[0][2] == 'X'){
                system("clear");
                printf("\n%c | %c | %c\n───────────\n%c | %c | %c\n───────────\n%c | %c | %c", grid[0][0], grid[0][1], grid[0][2], grid[1][0], grid[1][1], grid[1][2], grid[2][0], grid[2][1], grid[2][2]);
                printf("\n\nPLAYER 1 WINS !!!!\n");
                win = 1;
            }
            else if(grid[1][0] == 'X' && grid[1][1] == 'X' && grid[1][2] == 'X'){
                system("clear");
                printf("\n%c | %c | %c\n───────────\n%c | %c | %c\n───────────\n%c | %c | %c", grid[0][0], grid[0][1], grid[0][2], grid[1][0], grid[1][1], grid[1][2], grid[2][0], grid[2][1], grid[2][2]);
                printf("\n\nPLAYER 1 WINS !!!!\n");
                win = 1;
            }
            else if(grid[2][0] == 'X' && grid[2][1] == 'X' && grid[2][2] == 'X'){
                system("clear");
                printf("\n%c | %c | %c\n───────────\n%c | %c | %c\n───────────\n%c | %c | %c", grid[0][0], grid[0][1], grid[0][2], grid[1][0], grid[1][1], grid[1][2], grid[2][0], grid[2][1], grid[2][2]);
                printf("\n\nPLAYER 1 WINS !!!!\n");
                win = 1;
            }
            
            /// VERTICAL
            else if(grid[0][0] == 'X' && grid[1][0] == 'X' && grid[2][0] == 'X'){
                system("clear");
                printf("\n%c | %c | %c\n───────────\n%c | %c | %c\n───────────\n%c | %c | %c", grid[0][0], grid[0][1], grid[0][2], grid[1][0], grid[1][1], grid[1][2], grid[2][0], grid[2][1], grid[2][2]);
                printf("\n\nPLAYER 1 WINS !!!!\n");
                win = 1;
            }
            else if(grid[0][1] == 'X' && grid[1][1] == 'X' && grid[2][1] == 'X'){
                system("clear");
                printf("\n%c | %c | %c\n───────────\n%c | %c | %c\n───────────\n%c | %c | %c", grid[0][0], grid[0][1], grid[0][2], grid[1][0], grid[1][1], grid[1][2], grid[2][0], grid[2][1], grid[2][2]);
                printf("\n\nPLAYER 1 WINS !!!!\n");
                win = 1;
            }
            else if(grid[0][2] == 'X' && grid[1][2] == 'X' && grid[2][2] == 'X'){
                system("clear");
                printf("\n%c | %c | %c\n───────────\n%c | %c | %c\n───────────\n%c | %c | %c", grid[0][0], grid[0][1], grid[0][2], grid[1][0], grid[1][1], grid[1][2], grid[2][0], grid[2][1], grid[2][2]);
                printf("\n\nPLAYER 1 WINS !!!!\n");
                win = 1;
            }

            // DIAGONAL
            else if(grid[0][0] == 'X' && grid[1][1] == 'X' && grid[2][2] == 'X'){
                system("clear");
                printf("\n%c | %c | %c\n───────────\n%c | %c | %c\n───────────\n%c | %c | %c", grid[0][0], grid[0][1], grid[0][2], grid[1][0], grid[1][1], grid[1][2], grid[2][0], grid[2][1], grid[2][2]);
                printf("\n\nPLAYER 1 WINS !!!!\n");
                win = 1;
            }
            else if(grid[0][2] == 'X' && grid[1][1] == 'X' && grid[2][0] == 'X'){
                system("clear");
                printf("\n%c | %c | %c\n───────────\n%c | %c | %c\n───────────\n%c | %c | %c", grid[0][0], grid[0][1], grid[0][2], grid[1][0], grid[1][1], grid[1][2], grid[2][0], grid[2][1], grid[2][2]);
                printf("\n\nPLAYER 1 WINS !!!!\n");
                win = 1;
            }
            else{
                system("clear");
                nobody_wins++;
                player1 = false;
            }


    }
    else {
        system("clear");
        continue;
    }
    
    
    while(player1 == 0 && win == 0 && nobody_wins != 9){
        int choose;
        printf("\n%c | %c | %c\n───────────\n%c | %c | %c\n───────────\n%c | %c | %c", grid[0][0], grid[0][1], grid[0][2], grid[1][0], grid[1][1], grid[1][2], grid[2][0], grid[2][1], grid[2][2]);
        printf("\n\nPlayer 2: ");
        scanf("%i", &choose);
        if (choose <= 9 && choose > 0 ){
            if (choose == 1 && grid[0][0] != 'X' && grid[0][0] != 'O'){
                grid[0][0] = 'O';
            }
            else if (choose == 2 && grid[0][1] != 'X' && grid[0][1] != 'O'){
                grid[0][1] = 'O';
            }
            else if (choose == 3 && grid[0][2] != 'X' && grid[0][2] != 'O'){
                grid[0][2] = 'O';
            }
            else if (choose == 4 && grid[1][0] != 'X' && grid[1][0] != 'O'){
                grid[1][0] = 'O';
            }
            else if (choose == 5 && grid[1][1] != 'X' && grid[1][1] != 'O'){
                grid[1][1] = 'O';
            }
            else if (choose == 6 && grid[1][2] != 'X' && grid[1][2] != 'O'){
                grid[1][2] = 'O';
            }
            else if (choose == 7 && grid[2][0] != 'X' && grid[2][0] != 'O'){
                grid[2][0] = 'O';
            }
            else if (choose == 8 && grid[2][1] != 'X' && grid[2][1] != 'O'){
                grid[2][1] = 'O';
            }
            else if (choose == 9 && grid[2][2] != 'X' && grid[2][2] != 'O'){
                grid[2][2] = 'O';
            }
            else {
                system("clear");
                continue;
            }
                        /// HORIZONTAL
            if(grid[0][0] == 'O' && grid[0][1] == 'O' && grid[0][2] == 'O'){
                system("clear");
                printf("\n%c | %c | %c\n───────────\n%c | %c | %c\n───────────\n%c | %c | %c", grid[0][0], grid[0][1], grid[0][2], grid[1][0], grid[1][1], grid[1][2], grid[2][0], grid[2][1], grid[2][2]);
                printf("\n\nPLAYER 2 WINS !!!!\n");
                win = 1;
            }
            else if(grid[1][0] == 'O' && grid[1][1] == 'O' && grid[1][2] == 'O'){
                system("clear");
                printf("\n%c | %c | %c\n───────────\n%c | %c | %c\n───────────\n%c | %c | %c", grid[0][0], grid[0][1], grid[0][2], grid[1][0], grid[1][1], grid[1][2], grid[2][0], grid[2][1], grid[2][2]);
                printf("\n\nPLAYER 2 WINS !!!!\n");
                win = 1;
            }
            else if(grid[2][0] == 'O' && grid[2][1] == 'O' && grid[2][2] == 'O'){
                system("clear");
                printf("\n%c | %c | %c\n───────────\n%c | %c | %c\n───────────\n%c | %c | %c", grid[0][0], grid[0][1], grid[0][2], grid[1][0], grid[1][1], grid[1][2], grid[2][0], grid[2][1], grid[2][2]);
                printf("\n\nPLAYER 2 WINS !!!!\n");
                win = 1;
            }
            
            /// VERTICAL
            else if(grid[0][0] == 'O' && grid[1][0] == 'O' && grid[2][0] == 'O'){
                system("clear");
                printf("\n%c | %c | %c\n───────────\n%c | %c | %c\n───────────\n%c | %c | %c", grid[0][0], grid[0][1], grid[0][2], grid[1][0], grid[1][1], grid[1][2], grid[2][0], grid[2][1], grid[2][2]);
                printf("\n\nPLAYER 2 WINS !!!!\n");
                win = 1;
            }
            else if(grid[0][1] == 'O' && grid[1][1] == 'O' && grid[2][1] == 'O'){
                system("clear");
                printf("\n%c | %c | %c\n───────────\n%c | %c | %c\n───────────\n%c | %c | %c", grid[0][0], grid[0][1], grid[0][2], grid[1][0], grid[1][1], grid[1][2], grid[2][0], grid[2][1], grid[2][2]);
                printf("\n\nPLAYER 2 WINS !!!!\n");
                win = 1;
            }
            else if(grid[0][2] == 'O' && grid[1][2] == 'O' && grid[2][2] == 'O'){
                system("clear");
                printf("\n%c | %c | %c\n───────────\n%c | %c | %c\n───────────\n%c | %c | %c", grid[0][0], grid[0][1], grid[0][2], grid[1][0], grid[1][1], grid[1][2], grid[2][0], grid[2][1], grid[2][2]);
                printf("\n\nPLAYER 2 WINS !!!!\n");
                win = 1;
            }

            // DIAGONAL
            else if(grid[0][0] == 'O' && grid[1][1] == 'O' && grid[2][2] == 'O'){
                system("clear");
                printf("\n%c | %c | %c\n───────────\n%c | %c | %c\n───────────\n%c | %c | %c", grid[0][0], grid[0][1], grid[0][2], grid[1][0], grid[1][1], grid[1][2], grid[2][0], grid[2][1], grid[2][2]);
                printf("\n\nPLAYER 2 WINS !!!!\n");
                win = 1;
            }
            else if(grid[0][2] == 'O' && grid[1][1] == 'O' && grid[2][0] == 'O'){
                system("clear");
                printf("\n%c | %c | %c\n───────────\n%c | %c | %c\n───────────\n%c | %c | %c", grid[0][0], grid[0][1], grid[0][2], grid[1][0], grid[1][1], grid[1][2], grid[2][0], grid[2][1], grid[2][2]);
                printf("\n\nPLAYER 2 WINS !!!!\n");
                win = 1;
            }
            else{
                system("clear");
                nobody_wins++;
                player1 = true;
            }

    }
    else {
        system("clear");
        continue;
    }


}
}
    if(nobody_wins == 9){
        system("clear");
        printf("\n%c | %c | %c\n───────────\n%c | %c | %c\n───────────\n%c | %c | %c", grid[0][0], grid[0][1], grid[0][2], grid[1][0], grid[1][1], grid[1][2], grid[2][0], grid[2][1], grid[2][2]);
        printf("\n\nNOBODY WINS!!!\n");
    }

    return 0;


}
