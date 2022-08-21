# CS210_2022

This project was designed to create an application that would display a 12 hour clock and a 24 hour clock.
The functions inside the code were designed to add a second, minute, or hour depending on the user's need to change the the current time.
This provided a service to always know what time it is and adjust the clock to the actual time you needed.

This code has a very well displayed user menu.  By using the setw and setfill functions I was able to set the menu up and make it evenly distributed.  

This code could enhance it's readability by outsourcing the functions to python and using C++ to call them.  This could also help with the security as the details of the functions would be separate from the code itself.  

The most challenging pieces of the code to write was the function of the clock changing from am to pm for the 12 hour clock to represent the correct time.  That funciton was tricky because their is the intial if statement to set up the 12 hour clock and then the while loop to set the 24 hour clock which is baased on the functionality of the 12 hour if statement.  

Using the switch statement can easily be used to transfer to any program that has a usermenu set up that requires a numerical or alphabet response.  

I made this code maintable by separating the functions, from the menu, to the menu loop.  It is readable because of the good use of whitespace and separation of the different parts of the code.  It can be adapable because you can use these functions in any program that desires a clock setting.  
