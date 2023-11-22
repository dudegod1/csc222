#include <iostream>
#include <vector>
#include <string>
using namespace std;


enum Suit {CLUBS, DIAMONDS, HEARTS, SPADES};
enum Rank {ACE=1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};

struct Card{

    Rank rank;
    Suit suit;

    Card(Suit, Rank);
    string to_string() const;
    bool equals(const Card&) const;
    bool is_greater(const Card&) const;
};

struct Deck{
    vector<Card> cards;
    Deck();
    Deck(int n);

    void print();
    int find_card(const Card& card);
    void selection_sort();
    void swap_cards(int l, int h);
    Deck Deck::subdeck(int l, int h);
    Card remove_card();
   void add_card(const Card& c);

};
