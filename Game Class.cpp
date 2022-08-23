#pragma once
#include "Solutions^^.h"
#include "AI Class.cpp"
class Game
{
public:
	void play_vs_AI()
	{
		AI a;
		Field f;
		int pos;
		int win = 0;
		int f2 = 0;
		for (int i = 0; i < 5; i++)
		{
			system("cls");
			f2 = 0;
			f.Print();
			cout << "\nAviable positions: { ";
			f.Printpos();
			cout << "}\n\n";
		ret:cinX(pos, "Player's turn, enter X pos: ", '+');
			if (pos > 9)
			{
				goto ret;
			}
			for (int i = 0; i < f.get_positions().size(); i++)
			{
				if (pos == f.get_positions()[i])
				{
					f2 = 1;
				}
			}
			if (f2 == 0)
			{
				goto ret;
			}
			f.set_x_o(pos, 'x');
			cout << "\n";
			f.Print();
			cout << "\n\n";
			if (!f.win_123o() && !f.win_123x() && !f.win_147o() && !f.win_147x() && !f.win_159o() && !f.win_159x() && !f.win_258o() && !f.win_258x() && !f.win_357o() && !f.win_357x() && !f.win_369o() && !f.win_369x() && !f.win_456o() && !f.win_456x() && !f.win_789o() && !f.win_789x())
			{
				cout << "\nAI's turn -> " << endl;
				pos = a.AI_pos(pos, f.get_positions(), f.get_123(), f.get_456(), f.get_789());
				f.set_x_o(pos, 'o');
				cout << "\n";
				f.Print();

				if (f.win_123o() == true || f.win_147o() == true || f.win_159o() == true || f.win_258o() == true || f.win_357o() == true || f.win_369o() == true || f.win_456o() == true || f.win_789o() == true)
				{
					cout << "\n\nO's victory" << endl;
					win = 1;
					system("pause");
					break;
				}
				system("pause");
			}
			else
			{

				if (f.win_123o() == true || f.win_147o() == true || f.win_159o() == true || f.win_258o() == true || f.win_357o() == true || f.win_369o() == true || f.win_456o() == true || f.win_789o() == true)
				{
					cout << "O's victory\n" << endl;
					system("pause");
					win = 1;
					break;
				}
				else
				{
					cout << "X's victory\n" << endl;
					system("pause");
					win = 1;
					break;
				}
			}
		}
		if (win == 0)
		{
			cout << "======" << endl;
			cout << "|Draw|" << endl;
			cout << "======" << endl;
			system("pause");
		}

	}
	void play_vs_Player()
	{
		AI a;
		Field f;
		int pos;
		int win = 0;
		int f2 = 0;
		for (int i = 0; i < 5; i++)
		{
			system("cls");
			f2 = 0;
			f.Print();
			cout << "\nAviable positions: { ";
			f.Printpos();
			cout << "}\n\n";
		ret:cinX(pos, "1st.Player's turn, enter X pos: ", '+');
			if (pos > 9)
			{
				goto ret;
			}
			for (int i = 0; i < f.get_positions().size(); i++)
			{
				if (pos == f.get_positions()[i])
				{
					f2 = 1;
				}
			}
			if (f2 == 0)
			{
				goto ret;
			}
			f.set_x_o(pos, 'x');
			cout << "\n";
			f.Print();
			cout << "\n\n";
			if (!f.win_123o() && !f.win_123x() && !f.win_147o() && !f.win_147x() && !f.win_159o() && !f.win_159x() && !f.win_258o() && !f.win_258x() && !f.win_357o() && !f.win_357x() && !f.win_369o() && !f.win_369x() && !f.win_456o() && !f.win_456x() && !f.win_789o() && !f.win_789x())
			{
				f2 = 0;
				cout << "\nAviable positions: { ";
				f.Printpos();
				cout << "}\n\n";
			ret2:cinX(pos, "2nd.Player's turn, enter O pos: ", '+');
				if (pos > 9)
				{
					goto ret2;
				}
				for (int i = 0; i < f.get_positions().size(); i++)
				{
					if (pos == f.get_positions()[i])
					{
						f2 = 1;
					}
				}
				if (f2 == 0)
				{
					goto ret2;
				}
				f.set_x_o(pos, 'o');
				cout << "\n";
				f.Print();
				if (f.win_123o() == true || f.win_147o() == true || f.win_159o() == true || f.win_258o() == true || f.win_357o() == true || f.win_369o() == true || f.win_456o() == true || f.win_789o() == true)
				{
					cout << "\n\nO's victory" << endl;
					win = 1;
					system("pause");
					break;
				}
				system("pause");
			}
			else
			{

				if (f.win_123o() == true || f.win_147o() == true || f.win_159o() == true || f.win_258o() == true || f.win_357o() == true || f.win_369o() == true || f.win_456o() == true || f.win_789o() == true)
				{
					cout << "O's victory\n" << endl;
					system("pause");
					win = 1;
					break;
				}
				else
				{
					cout << "X's victory\n" << endl;
					system("pause");
					win = 1;
					break;
				}
			}
		}
		if (win == 0)
		{
			cout << "======" << endl;
			cout << "|Draw|" << endl;
			cout << "======" << endl;
			system("pause");
		}
	}
};