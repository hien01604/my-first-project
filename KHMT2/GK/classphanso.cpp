class Fraction

{
public:
void Set (int tuso, int mauso);
void Sum (Fraction  otherFraction);
void Subtract (Fraction otherFraction);
bool Equal (Fraction otherFraction);
int Gettuso () {return tuso};
int Getmauso () {return mauso};
private:
int tuso;
int mauso;
};