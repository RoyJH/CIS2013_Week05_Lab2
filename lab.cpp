#include <iostream>
using namespace std;

void add_numbers(int& x, int y){
	 x+=y;
	 y+=y+10;
}

int main (){
	
	int first;
	int second;
	
	cout << "Enter first number: ";
	cin >> first;
	cout << "Enter second number: ";
	cin >> second;
	
	add_numbers(first,second);
	cout << "The result of calling add_number is: " << first << endl;
	
	add_numbers(first,second);
	cout << "The second time calling add_number results in: " << first << endl;
	
	add_numbers(first,second);
	cout << "The third time calling add_number results in: " <<first << endl;
	
	
	}