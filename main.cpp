#include "WholePart.h"
int main() 
{
	setlocale(LC_ALL, "Russian");
	cout << WholePart1(12, 3) << endl;
	try
	{
		cout << WholePart2(10,0) << endl;
		cout << WholePart3(0,0) << endl;
		cout << WholePart4(10, 0) << endl;
		cout << WholePart5(10, 0) << endl;
		cout << WholePart6(10, 0) << endl;
	}
	catch (int)
	{
		cout << "ќшибка!«наменатель равен 0, спецификатор throw" << endl;
	}
	catch(invalid_argument error)
	{
		cerr << error.what() << endl;
	}
	catch (Empty_class)
	{
		cerr << "ќшибка!«наменатель равен 0, пустой класс" << endl;
	}
	catch (Independent_class error)
	{
		cerr << error.message << endl;
	}
	catch (Successor_class error)
	{
		cerr << error.what() << endl;
	}
}
