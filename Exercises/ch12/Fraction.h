struct Fraction{
    int numerator, denominator;
    
    void print();
    void add(int num);
    void minus(int num);
    void times(int num);
    void divide(int num);

    Fraction();
    Fraction(int n, int d);
};
