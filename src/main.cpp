#include <SFML/Graphics.hpp>
#include "Card.h"
#include "CardDeck.h"
using namespace std;

int main()
{	
	Card c1(4,1,10);
	std::cout<<c1;
	CardDeck cd(true);
	cout<<cd;
	int x;
	cin>>x;
	return 0;
}
