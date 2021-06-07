#include "Pair.h"
#include "RightAngled.h"

int main()
{
	Pair counts(5, 7);
	cout << counts.get_composition() << endl;
	RightAngled rg(5, 7);
	cout << rg << endl;
}