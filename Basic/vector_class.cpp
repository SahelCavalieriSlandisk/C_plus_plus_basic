#include<iostream>
#include<vector>

// Usar uma classe como wraper em um vector

class RegistrationGame
{
public:
	std::string title;
	std::string category;
	std::string platform;
	int registrationNumber=0;

	void showInformation()
	{
		std::cout << "Direct from Class Registration Game.\n";
		std::cout << "Title: " << title << "\n";
		std::cout << "Category: " << category << "\n";
		std::cout << "Platform: " << platform << "\n";
		std::cout << "Registration: " << registrationNumber << "\n\n";
	}
};

std::vector<RegistrationGame> libraryGame;

int main()
{
	RegistrationGame rg;
	rg.title = "The Legend of Zelda: Link to the Past";
	rg.category = "RPG \\ Adventure";
	rg.platform = "SNES";
	rg.registrationNumber = 27;
	rg.showInformation();

	libraryGame.emplace_back("Fallout 4", "RPG \\ Action", "PS4 \\ PC", 1122);
	libraryGame.emplace_back("Super Mario 64", "Adventure", "N64", 214);
	libraryGame.emplace_back("007 Goldeneye", "Shooter", "N64", 379);

	std::cout << "Direct from Vector\n";
	for (int i = 0; i < libraryGame.size(); i++)
	{
		std::cout << "Title: " << libraryGame[i].title << "\n";
		std::cout << "Category: " << libraryGame[i].category << "\n";
		std::cout << "Platform: " << libraryGame[i].platform << "\n";
		std::cout << "Registration: " << libraryGame[i].registrationNumber << "\n\n";
	}

	return 0;
	
}
