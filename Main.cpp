#include "Solutions.cpp"
#include "Game Class.cpp"
int main()
{
	char ch;
	Game g;
	do
	{
		system("cls");
		cout << "\tTic-tac-toe v1.0" << endl;
		cout << "================================" << endl;
		cout << "1.Player vs AI" << endl;
		cout << "2.Player vs Player" << endl;
		cout << "3.View positions on field" << endl;
		cout << "================================" << endl;
		ch = _getch();
		switch (ch)
		{
		case'1':
			g.play_vs_AI();
			break;
		case'2':
			g.play_vs_Player();
			break;
		case'3':
			cout << " 1 | 2 | 3 " << endl;
			cout << "-----------" << endl;
			cout << " 4 | 5 | 6 " << endl;
			cout << "-----------" << endl;
			cout << " 7 | 8 | 9 " << endl;
			system("pause");
			break;
		}

	} while (ch != 27);

}
