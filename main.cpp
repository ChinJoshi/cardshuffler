#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>

class Wut{
public:
    std::string number[13] = { "1","2","3","4","5","6","7","8","9","10","jack","queen","king" };
    std::string color[2] = {"red","black"};
    std::string suit[4] = { "clubs","diamonds","spades","hearts" };
    std::string choice;
    std::string numberchoice=number[rand() % 12];
    std::string colorchoice=color[rand() % 1];
    std::string suitchoice=suit[rand() % 4];
    int loopchoice=1;
};

int main(){
    Wut foo;
	while (foo.loopchoice<2){
    	std::cout<<std::endl;
    	std::cout << "Enter 'random' to pick a one random card"<< std::endl;
    	std::cout << "Enter 'shuffled' to display your shuffled deck"<< std::endl;
    	std::cout << "Enter 'tortilla' to exit the program"<< std::endl;
    	std::cin >> foo.choice;
		srand(time(NULL));
		if (foo.choice == "random") {
    		std::cout<<std::endl;
    		foo.numberchoice = foo.number[rand() % 13];
            foo.colorchoice = foo.color[rand() % 2];
			foo.suitchoice = foo.suit[rand() % 4];
   			std::cout << "Your card is the " << foo.colorchoice << " " << foo.suitchoice << " of " << foo.numberchoice << std::endl;
		}else if (foo.choice == "shuffled") {
			for (int x = 0; x <= 52; x++) {
				foo.numberchoice = foo.number[rand() % 13];
				foo.colorchoice = foo.color[rand() % 2];
				foo.suitchoice = foo.suit[rand() % 4];
				std::cout<<std::endl;
				std::cout << "The card is " << foo.colorchoice << " " << foo.numberchoice << " of " << foo.suitchoice << std::endl;
			}
		}else if (foo.choice=="tortilla"){
   			break;
		};
	};
	return 0;
}


