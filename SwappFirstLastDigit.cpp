//Swapped the first and last digit of the number

#include<iostream>
#include<math.h>

using namespace std;

void SwappTheNumber(int number)
{
	int lastDigit , firstDigit;
	
	lastDigit = number % 10;  //here we got the last digit of the number 
	firstDigit = number;
	
	while(firstDigit >= 10)
	{
		firstDigit = firstDigit / 10;
	}
	
	//find the total number of digits -1 
	//log10(number) it will return the length of digits in that number - 1.
	int digits = log10(number);
	
	//to swapp the last digit to first 
	//1. we calculate the lastDigit 
	//2. then we calculate the length of the number -1 using log10
	//3. now we take one varible and assign the last Digit to it
	//4. then we multiply the digits by 10 and multiply the last digit to it then it will display on the first.
	
	int swappNumber = lastDigit;
	swappNumber = swappNumber * pow(10,digits); //by doing this our last number will be the first number follow zeros
	
	//now we divide (and we are interseted in remainder) our actual number by 10 * digits lenght and add the swappNumber
	//to it
	
	swappNumber = swappNumber + (number % (int)pow(10,digits));
	
	swappNumber = swappNumber - lastDigit;
	swappNumber = swappNumber + firstDigit; 
	
	cout<<"Befor swapping first and last digit : "<<swappNumber<<endl;
}


int main()
{
	int no = 0;
	cout<<"Enter the Number : ";cin>>no;
	
	SwappTheNumber(no);
	
	return 0;
}


/* Illustration of the program :-
Enter the number : 1234 (user enter the number)

now calculate the last digit = 1234 % 10 = 4
now calculate the number of digits in the number -1 = log10(number) = 3length
now calculate the first Digit = 
			assign the actual number to the firstdigit
			firstdigit = number;
			while(firstdigit >= 10)
				firstdigit = firstdigit / 10
	
	firstdigit = 1
				
now-
	lastdigit = 4
	firstdigit= 1
	
	now take one variable as swapp
	swapp = lastdigit
	
	swapp = swapp * pow(10,digit)
		    4 * 10 * 3
			4 * 1000
	
	swap =	4000
	
	now 
	
	swapp = swapp + (number % pow(10,digit))
	     =  4000 + (1234 % 10 * 3) 
		 =  4000 + (1234 % 1000)
		 = 4000 +   234
		 = 4234
		 
	now
	
	swapp = swapp - lastdigit
	     = 4234 - 4
		 = 4230
	
	now
	
	swapp = swapp + firstdigit
	     =  4230  + 1
		 =  4321
		 
*/    
