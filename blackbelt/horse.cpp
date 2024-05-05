#include <iostream>
#include <time.h>
#include <cstdlib>

// function prototypes
void race(int horse_no, int horse_position);
void number(int h[5]);

// Declaring the global variables
int winner;
int race_length = 15;
int no_horses = 5;

// Main function with random number generator
int main(){
	int horses[no_horses] = {0};
	int seed = 0;
	std::cout<<"Please enter a random seed: ";
	std::cin>>seed;
	srand(seed);

	number(horses); // pasing the array as a parameter
	return 0;
}// end main

//function to print the runway tracks
void race(int horse_no, int horse_position){
	for(int i = 0; i <race_length; i++){
		if (i == horse_position){
			std::cout<<horse_no;
		}// end if
		else{
			std::cout<<".";
		}// end else
	}// end for loop
	std::cout<<std::endl;
}// end race

//function for horses to compete by flipping the coin, and deciding the winner
void number(int h[5])// passing the pointer of the array as a parameter, it is the same is int* h
	{
	bool keepGoing = true;
	while (keepGoing){
		for(int j = 0; j < no_horses; j++){
			int coin = rand() % 2;
			if (coin == 1){
				h[j]++; // here, we are changing the value of original array horses[j]
			}// end if

			race(j, h[j]);

			if (h[j] >= race_length){
				keepGoing = false;
				winner = j;
			}// end if
		}// end for loop
		std::cout<<""<<std::endl;
	}// end while
	std::cout<<"Horse "<<winner<<" wins!"<<std::endl;
}//end number
