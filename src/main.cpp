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
	CardDeck cd2(cd);
	cd.cards[0]->setCardNameId(7);
	cout<<*cd.cards[0]<<" 1 "<<endl;
	cout<<*cd2.cards[0]<<" 2 "<<endl;
	
	}
	int x;
	cin>>x;
	return 0;
}
