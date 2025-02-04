// Weight Loss
// If moderatly active person cut their calorie intake by 500 calories per day,
// they can typically loose about 4 pounds per month. Write a program that has 
// the user enter their starting weight and then creates and displays a table 
// showing what their expected weight will be at the end of each month for the 
// next 6 months if they stay on their diet.

#include <iostream>
using namespace std;

int main() {

	int weight, loss;

	cout << "What is your current weight?" << endl;
	cin >> weight;
	cout << "How much weight do you want to loose per month" << endl;
	cin >> loss;
	cout << "Your starting weight is " << weight << endl;
	cout << "If you started to loose weight now for 6 months your weight loss"
		<< " could look like" << endl;
	cout << "Month   |   Weight" << endl;
	cout << "==================" << endl;
	double newWeight;
	for (int months = 1; months <= 9; months++) {
		newWeight = weight - loss;
		weight = newWeight;
		cout << "   " << months << "    |   " << weight << endl;
	}

	return 0;
}
