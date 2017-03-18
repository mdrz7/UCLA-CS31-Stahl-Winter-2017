// Code for Project 1
// Election results

#include <iostream>
using namespace std;   // pp. 37-38 in Savitch book explain this line

int main()
{
	int votesReceived;
	int votesToWin;
	int opponentVotes;

	cout << "How many electoral college votes did you receive? ";
	cin >> votesReceived;
	cout << "How many electoral college votes did your main opponent receive? ";
	cin >> opponentVotes;
	cout << "How many electoral college votes are needed to win? ";
	cin >> votesToWin;

	double pctYou = 50.0 * votesReceived / votesToWin; // Changed the percentage multiplier from 100 to 50
	double pctOpponent = 50.0 * opponentVotes / votesToWin; // Changed the percentage multiplier from 100 to 50

	cout.setf(ios::fixed);       // see pp. 30-31 in Savitch book
	cout.precision(1);

	cout << endl;
	cout << "You received " << pctYou << "% of the votes needed to win." << endl;
	cout << "Your main opponent received " << pctOpponent << "% of the votes need to win." << endl;

	if (pctYou > 1.00)
		cout << "It looks like you won." << endl;
	else
		cout << "It looks like your main opponent won." << endl;
}