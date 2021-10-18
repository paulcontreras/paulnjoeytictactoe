#include <iostream>
#include <string>
#include <ctime>

using namespace std;
void DisplayBoard(char gameBoard [])
{
	system ("cls");
	cout << "\t\t\t\t\t\t     |     |     \n";
	cout << "\t\t\t\t\t\t  " << gameBoard[0] <<	"  |  " << gameBoard[1] << "  |  " << gameBoard[2] << "  \n";
	cout << "\t\t\t\t\t\t_____|_____|_____\n";
	cout << "\t\t\t\t\t\t     |     |     \n";
	cout << "\t\t\t\t\t\t  " << gameBoard[3] <<	"  |  " << gameBoard[4] << "  |  " << gameBoard[5] << "	\n";
	cout << "\t\t\t\t\t\t_____|_____|______\n";
	cout << "\t\t\t\t\t\t     |     |     \n";
	cout << "\t\t\t\t\t\t  " << gameBoard[6] <<	"  |  " << gameBoard[7] << "  |  " << gameBoard[8] << "	\n";
	cout << "\t\t\t\t\t\t     |     |     \n";




}
void PlayerMove(char* gameBoard)
{
	cout << "Please pick a number between 1 and 9.\n";
	int PlayerAnswer = 0;
	bool willloop = true;
	do
	{
	while (!(cin >> PlayerAnswer) || PlayerAnswer > 9 || PlayerAnswer < 1)
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Sike! That's the wrong numba!\n";

	}
	if (PlayerAnswer == 1 && gameBoard[0] == '1')
	{

		gameBoard[0] = 'x';
		willloop = false;
	}
	else if (PlayerAnswer == 2)
	{

		gameBoard[1] = 'x';
		willloop = false;
	}
	else if (PlayerAnswer == 3)
	{

		gameBoard[2] = 'x';
		willloop = false;
	}
	else if (PlayerAnswer == 4)
	{

		gameBoard[3] = 'x';
		willloop = false;
	}
	else if (PlayerAnswer == 5)
	{

		gameBoard[4] = 'x';
		willloop = false;
	}
	else if (PlayerAnswer == 6)
	{

		gameBoard[5] = 'x';
		willloop = false;
	}
	else if (PlayerAnswer == 7)
	{

		gameBoard[6] = 'x';
		willloop = false;
	}
	else if (PlayerAnswer == 8)
	{

		gameBoard[7] = 'x';
		willloop = false;
	}
	else if (PlayerAnswer == 9)
	{

		gameBoard[8] = 'x';
		willloop = false;
	}
	else
	{
		cout << "Hey, you already went there!";

	}
	} while (willloop);


}
int main()
{
	char gameBoard[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	
	DisplayBoard(gameBoard);
	PlayerMove(gameBoard);
	DisplayBoard(gameBoard);





	return 0;
}