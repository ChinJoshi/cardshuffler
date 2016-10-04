#include <iostream>
#include <string>
#include <cstdlib>


int main(){
std::string number[13] = { "1","2","3","4","5","6","7","8","9","10","jack","queen","king" };
std::string color[2] = {"red","black"};
std::string suit[4] = { "clubs","diamonds","spades","hearts" };
std::string choice;
std::string numberchoice;
std::string  colorchoice;
std::string  suitchoice;
numberchoice = number[rand() % 12];
colorchoice = color[rand() % 1];
suitchoice = suit[rand() % 4];

std::cout << "Enter whether you want to choose a random card or if you want to display a shuffled deck" << std::endl;
std::cin >> choice;

if (choice == "random") {
	std::cout << "Your card is the " << colorchoice << " " << suitchoice << " of " << numberchoice << std::endl;
}
else if (choice == "shuffled") {
	for (int x = 0; x <= 52; x++) {
		numberchoice = number[rand() % 13];
		colorchoice = color[rand() % 2];
		suitchoice = suit[rand() % 4];
		std::cout << "Your card is the " << colorchoice << " " << suitchoice << " of " << numberchoice << std::endl;
	};
};
return 0;
}






