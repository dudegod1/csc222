

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
