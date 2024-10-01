//Zion Ogunsola
//Lab 4
//10/1/2024

#include <iostream> //Includes iostream
#include <iomanip> //Includes iomanip
#include <string> //Includes string
 
using namespace std;

int main () //Begins int function
{
    string fruitName; //Declares variable fruitName
    double gramsOfSugar; //Declares variable gramsOfSugar
   
    int i = 0; //Declares variable i 

    while (i <= 4) //Begins while loop for set condition
    {

    cout << "What is the fruit name?" << endl; //Outputs statement
    cin >> fruitName; //Asks user for input
    
    cout << "How many grams of sugar does this fruit have?" << endl; //Outputs statement
    cin >> gramsOfSugar; //Asks user for input
 
        if (gramsOfSugar <=10) //Sets if condition
        cout << fruitName << " is a LOW SUGAR FRUIT \n" << endl; //Outputs statement if "if" condition is met
        
        else if (gramsOfSugar <= 10 && gramsOfSugar <= 14) //Sets else if condition
        cout << fruitName << " is a MEDIUM SUGAR FRUIT \n" << endl; //Outputs statement if "else if" condition is met
        
        else //Sets else  condition
        cout << " is a HIGH SUGAR FRUIT \n" << endl; //Outputs statement if "else" condition is met
        
        i= i+1; //Adds one to value of i
    }
    
    return 0; ///Returns the function
}

/*
What is the fruit name?
grapes
How many grams of sugar does this fruit have?
23.37
 is a HIGH SUGAR FRUIT 

What is the fruit name?
avocado
How many grams of sugar does this fruit have?
.99
avocado is a LOW SUGAR FRUIT 

What is the fruit name?
strawberries
How many grams of sugar does this fruit have?
7
strawberries is a LOW SUGAR FRUIT 

What is the fruit name?
grapefruit
How many grams of sugar does this fruit have?
10.6
 is a HIGH SUGAR FRUIT

What is the fruit name?
orange
How many grams of sugar does this fruit have?
14
 is a HIGH SUGAR FRUIT

*/