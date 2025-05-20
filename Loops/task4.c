#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int my_atoi(const char*);
int main(){
    int secret,guessed;
    char user_input[10];
    int i;
    srand(time(NULL));
    secret=rand()%101;
    printf("Hello to Guess The Number Game\n");
    printf("I have thought of a number between 0 and 100.Your task is to guess it\n");
    printf("If you want to quit type 'q'\n");
    while(1){
        printf("Guess the number: ");
        fgets(user_input,sizeof(user_input),stdin);
        if(user_input[0]=='q' || user_input[0]=='Q'){
            printf("Better luck next time\n");
            break;
        }
        int valid=1;
        for(i=0;user_input[i]!='\0' && user_input[i]!='\n';++i){
            if(user_input[i]<'0' && user_input[i]>'9'){
                valid=0;
                break;
            }
        }
	if(valid){
	    guessed=my_atoi(user_input);
	    if(guessed<secret){
	        printf("Too small,enter a bigger number");
	    }else if(guessed>secret){
	        printf("Too big,enter a smaller number");
	    }else{
	            printf("You won the game: %d\n",secret);
	            break;
	    }
	}else{
	        printf("Enter a valid number or 'q' to quit\n");
	}
      }
    return 0;
}
