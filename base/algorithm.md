Goal: To simulate a horse racing game with 5 horses
Input: The value of random seed from the user
Output: The simulation of horses and their positions until one passes the finish line, and the result of which horse wins
Steps:

- Call necessary libraries - iostream, time.h, and cstdlib

- Call the function prototypes - void race, and void number

- Initialize necessary variables with int data type - winner, race_length, no_horses, and the array for 5 horses filled with 0 as initial values: horses = {0,0,0,0,0}

- Create the main function
	- Get the user input to generate a random number
		- Initialize the variable, seed with the value of 0
		- Ask the input from the user, and store it in variable seed
		- Put the variable, seed in srand - srand(seed);

	- Call the number function - number()

- Create the race function with 2 arguments - race(int horse_no, int horse_position)
	- This function should print the runway track by using race_length
	- Make a for loop to iterate for the number of race_length times - for (int i = 0; i < race_length; i++)
		- Use if conditional statements to check if i is equal to the current position of each horse, if so, print the horse number at that location, otherwise use "." to represent the location

- Creat the number function
	- First, declear the boolean variable keepGoing to use for the while loop, and set its initial value to be true
	- While keepGoing is true
		- Make a for loop to iterate for the number of no_horses time - for (int j = 0; j < no_horses; j++)
			- Flip the coin by using rand() function, 0 means tail and 1 means head
			- if the coin is head (or 1), the position of current horse increases by 1
			- Call the race function and pass j as the horse number, and horse[j] as the position of each horse
			- Use if statements to see if the position of any horses is equal or greater than race_length (to see if any horses pass the finish line)
			- if so, change the value of keepGoing to be false, and set the value of winner to be j(the horse no)
	- Print the result with the winning horse number.
