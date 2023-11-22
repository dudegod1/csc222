#include <iostream>
#include <vector>
#include "Card.h"
using namespace std;


Card::Card(Suit s, Rank r){
    suit = s;
    rank = r;
}



string Card::to_string() const {
    vector<string> suit_strings = {"Clubs", "Diamonds", "Hearts", "Spades"};
    vector<string> rank_strings = {"", "2", "3", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};
    return rank_strings[rank] + " of " + suit_strings[suit];
}

bool Card::equals(const Card& other_card) const{
    return (rank==other_card.rank && suit == other_card.suit);
}

bool eq(const Card& c1, const Card& c2){
    return(c1.suit == c2.suit && c1.rank == c2.suit);
}

bool Card::is_greater(const Card& other_card) const{
    if(suit > other_card.suit) return true;
    if(suit < other_card.suit) return false;

    if(rank > other_card.rank) return true;
    if(rank < other_card.rank) return false;

    return false;
}

int Deck::find_card(const Card& card){

    for(int i = 0; i < cards.size(); i++){
        if(eq(card, cards[i]){
                return i;
        }
    }
    return -1;
}

Deck::Deck(){
    vector<Card> copy_deck(52);
    cards = copy_deck;
    int i =0;
    for(Suit suit= CLUBS; suit <= SPADES; suit = Suit(suit+1)){
        for(Rank rank = ACE; rank <= KING; rank = Rank(rank+1)){
            cards[i].suit = suit;
            cards[i].rank = rank;
            i++;
        }
    }
}

void Deck::print(){
    for(int i = 0; i < cards.size(); i++){
        cout << cards[i].to_string() << endl;
    }
}

int Card::find(const Deck& deck) const{
    for(int i =0; i < deck.cards.size(); i++){
        if(deck.cards[i].equals(*this)){
            return i;
        }}
    return -1;
}

Deck::Deck(int s){
    vector<Card> copy_over_deck(s);
    cards = copy_over_deck;
}

int Deck::find_lowest(int l, int h){
    Card lowest = cards[l];
    int low_index = l;
    for(int i = l+1; i < h; i++){
        if(lowest.is_greater(cards[i])){
            low_index = i;
        }
    }
    return low_index;
}

void Deck::selection_sort(){
    for(int i =0; i < cards.size(); i++){
        for(int j = i + 1; j < cards.size() - 1; j++){
            if(cards[i].is_greater(cards[j]){
                Card temp = cards[i];
                cards[i] = cards[j];
                cards[j] = temp;
                break;
                }
            }
        }
    }

void Deck::swap_cards(int l, int h){
    temp = cards[l];
    cards[l] = cards[h];
    cards[h] = temp;
    }

Deck Deck::subdeck(int l, int h) const
{
    Deck sub(h-l+1);

    for (int i = 0; i < sub.cards.size(); i++) {
        sub.cards[i] = cards[l+i];
    }
    return sub;
}

void Deck::add_card(const Card& c)
{
    cards.push_back(c);
}

Card Deck::remove_card()
{
    Card card = cards[cards.size()-1];
    cards.pop_back();
    return card;
}

Deck merge(const Deck& deck1, const Deck& deck2){
    Deck res_deck(deck1.cards.size() + d2.cards.size());
    int i = 0;
    int j =0;
    
}
