#include <iostream>
#include <time.h>
#include <cstdlib>

// function prototypes
void race(int horse_no, int horse_position);
void number();

// Declaring the variables and array
int winner;
int race_length = 15;
int no_horses = 5;
int horses[] = {0,0,0,0,0};

// Main function with random number generator
int main(){
	int seed = 0;
	std::cout<<"Please enter a random seed: ";
	std::cin>> seed;
	srand(seed); // leting the user input the value of seed so that the winner is not the same every time
      		 //since the random see will bbe different

	number();
	return 0;
}

// function to print the runway tracks 
void race(int horse_no, int horse_position){
	for (int i = 0; i < race_length; i++){
		if (i == horse_position){
			std::cout<<horse_no; // doesn't include std::endl; to avoid printing a new line, the track needs to be horizontal
		}
		else{
			std::cout<<"."; // representing the track with dots
		}
	}//end for loop
	std::cout<<std::endl;
} // end race

// function for horses to compete by flipping the coin, and deciding the winner
void number(){
	bool keepGoing = true;
	while (keepGoing){
		for (int j = 0; j < no_horses; j++){
			int coin = rand()%2; // generating a random number with the offeset value of zero and the range of two
			// Will return either zero or one - one means head, and zero means tail
			if (coin == 1){
				horses[j]++; // letting the horse run one unit if it is head
			}

			race(j,horses[j]);
			
			if (horses[j] >= race_length)// checking if the horses cross the finish line
			{
				keepGoing = false;// stopping the while loop if there is a winner
				winner = j;
			}// end if
		}//end for loop
		std::cout<<""<<std::endl; // printing a new line
	}// end while
	std::cout<<"Horse "<<winner<<" wins!"<<std::endl; // announcing the winner
}// end number
