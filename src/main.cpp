#include <SFML/Graphics.hpp>
#include "Card.h"
#include "CardDeck.h"
using namespace std;

int main()
{	
	Card c1(4,1,10);
	std::cout<<c1<<'\n';
	{
	CardDeck cd(true);
	cd.fillDeck();
	cout<<cd.cards.size()<<'\n';
	cd.shuffle();
	cout<<cd<<'\n';	
	cout<<cd.cards.size()<<'\n';
	}
	int x;
	cin>>x;
	return 0;
}
