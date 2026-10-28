#include<iostream>
#include<vector>

// Vector usando o struct como class wraper ou tipo de dados

struct record
{
	std::string title;
	std::string category;
	unsigned int registration;
	bool flagAvailable = true;
};

std::vector<record> library;

int main()
{
	library.emplace_back("Perfect Dark", "FPS\\Action", 121, true);
	library.emplace_back("The Legend of Zelda: Ocarina of Time", "RPG\\Adventure", 235, true);
	library.emplace_back("Top Gear Rally", "Ride", 145, false);

	std::cout << "Rental Company System.\n";

	for (int i = 0; i < library.size(); i++)
	{
		if (!library[i].flagAvailable)
		{
			std::cout << "This " << library[i].title << " was rented.\n";
		}
		else
		{
			std::cout << "This " << library[i].title << " is rent available.\n";
		}
	}

	std::cout << "Collection:\n\n";
	std::cout << "Title: " << library[0].title << "\n";
	std::cout << "Category: " << library[0].category << "\n";
	std::cout << "Registration: " << library[0].registration << "\n";

	std::cout << "Title: " << library[1].title << "\n";
	std::cout << "Category: " << library[1].category << "\n";
	std::cout << "Registration: " << library[1].registration << "\n";

	std::cout << "Title: " << library[1].title << "\n";
	std::cout << "Category: " << library[1].category << "\n";
	std::cout << "Registration: " << library[1].registration << "\n";
	
	return 0;
}
