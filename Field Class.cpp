#pragma once
#include "Solutions^^.h";
class Field
{
	vector<string> field_1_3;
	vector<string> field_4_6;
	vector<string> field_7_9;
	vector<vector<string>> FU;
	vector<int> positions;
public:
	//constructor
	Field()
	{
		positions.resize(9);
		positions = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
		field_1_3.resize(3);
		field_4_6.resize(3);
		field_7_9.resize(3);
		FU.resize(3);
		for (int i = 0; i < 3; i++)
		{
			field_1_3[i] = " ";
			field_4_6[i] = " ";
			field_7_9[i] = " ";
		}
	}
	//constructor

	//get
	vector<string> get_123() { return field_1_3; }
	vector<string> get_456() { return field_4_6; }
	vector<string> get_789() { return field_7_9; }
	vector<int> get_positions() { return positions; }
	//get

	//win 
	bool win_123x() { return (field_1_3[0] == "x" && field_1_3[1] == "x" && field_1_3[2] == "x"); }
	bool win_123o() { return (field_1_3[0] == "o" && field_1_3[1] == "o" && field_1_3[2] == "o"); }
	bool win_456x() { return (field_4_6[0] == "x" && field_4_6[1] == "x" && field_4_6[2] == "x"); }
	bool win_456o() { return (field_4_6[0] == "o" && field_4_6[1] == "o" && field_4_6[2] == "o"); }
	bool win_789x() { return (field_7_9[0] == "x" && field_7_9[1] == "x" && field_7_9[2] == "x"); }
	bool win_789o() { return (field_7_9[0] == "o" && field_7_9[1] == "o" && field_7_9[2] == "o"); }
	bool win_147x() { return (field_1_3[0] == "x" && field_4_6[0] == "x" && field_7_9[0] == "x"); }
	bool win_147o() { return (field_1_3[0] == "o" && field_4_6[0] == "o" && field_7_9[0] == "o"); }
	bool win_258x() { return (field_1_3[1] == "x" && field_4_6[1] == "x" && field_7_9[1] == "x"); }
	bool win_258o() { return (field_1_3[1] == "o" && field_4_6[1] == "o" && field_7_9[1] == "o"); }
	bool win_369x() { return (field_1_3[2] == "x" && field_4_6[2] == "x" && field_7_9[2] == "x"); }
	bool win_369o() { return (field_1_3[2] == "o" && field_4_6[2] == "o" && field_7_9[2] == "o"); }
	bool win_159x() { return (field_1_3[0] == "x" && field_4_6[1] == "x" && field_7_9[2] == "x"); }
	bool win_159o() { return (field_1_3[0] == "o" && field_4_6[1] == "o" && field_7_9[2] == "o"); }
	bool win_357x() { return (field_1_3[2] == "x" && field_4_6[1] == "x" && field_7_9[0] == "x"); }
	bool win_357o() { return (field_1_3[2] == "o" && field_4_6[1] == "o" && field_7_9[0] == "o"); }
	//win 

	//AI_help
	int AIHelp_123x(vector<string> field_1_3, vector<string> field_4_6, vector<string> field_7_9, int& priority) {
		int x = 0;
		int o = 0;
		int space = 0;
		int tmp_pos = 0;
		for (int i = 0; i < 3; i++)
		{
			if (field_1_3[i] == "x")
				x++;
			else if (field_1_3[i] == "o")
				o++;
			else
			{
				space++;
				tmp_pos = i + 1;
			}

		}
		if (x == 2 && space == 1)
		{
			priority = 2;
			return tmp_pos;
		}
		if (o == 2 && space == 1)
		{
			priority = 1;
			return tmp_pos;
		}
		return -1;
	}
	int AIHelp_456x(vector<string> field_1_3, vector<string> field_4_6, vector<string> field_7_9, int& priority) {
		int x = 0;
		int o = 0;
		int space = 0;
		int tmp_pos = 0;
		for (int i = 0; i < 3; i++)
		{
			if (field_4_6[i] == "x")
				x++;
			else if (field_4_6[i] == "o")
				o++;
			else
			{
				space++;
				tmp_pos = i + 4;
			}

		}
		if (x == 2 && space == 1)
		{
			priority = 2;
			return tmp_pos;
		}
		if (o == 2 && space == 1)
		{
			priority = 1;
			return tmp_pos;
		}
		return -1;
	}
	int AIHelp_789x(vector<string> field_1_3, vector<string> field_4_6, vector<string> field_7_9, int& priority) {
		int x = 0;
		int o = 0;
		int space = 0;
		int tmp_pos = 0;
		for (int i = 0; i < 3; i++)
		{
			if (field_7_9[i] == "x")
				x++;
			else if (field_7_9[i] == "o")
				o++;
			else
			{
				space++;
				tmp_pos = i + 7;
			}

		}
		if (x == 2 && space == 1)
		{
			priority = 2;
			return tmp_pos;
		}
		if (o == 2 && space == 1)
		{
			priority = 1;
			return tmp_pos;
		}
		return -1;
	}
	int AIHelp_147x(vector<string> field_1_3, vector<string> field_4_6, vector<string> field_7_9, int& priority) {
		int x = 0;
		int o = 0;
		int space = 0;
		int tmp_pos = 0;

		if (field_1_3[0] == "x")
			x++;
		else if (field_1_3[0] == "o")
			o++;
		else
		{
			space++;
			tmp_pos = 1;
		}

		if (field_4_6[0] == "x")
			x++;
		else if (field_4_6[0] == "o")
			o++;
		else
		{
			space++;
			tmp_pos = 4;
		}

		if (field_7_9[0] == "x")
			x++;
		else if (field_7_9[0] == "o")
			o++;
		else
		{
			space++;
			tmp_pos = 7;
		}
		if (x == 2 && space == 1)
		{
			priority = 2;
			return tmp_pos;
		}
		if (o == 2 && space == 1)
		{
			priority = 1;
			return tmp_pos;
		}
		return -1;
	}
	int AIHelp_258x(vector<string> field_1_3, vector<string> field_4_6, vector<string> field_7_9, int& priority) {
		int x = 0;
		int o = 0;
		int space = 0;
		int tmp_pos = 0;

		if (field_1_3[1] == "x")
			x++;
		else if (field_1_3[1] == "o")
			o++;
		else
		{
			space++;
			tmp_pos = 2;
		}

		if (field_4_6[1] == "x")
			x++;
		else if (field_4_6[1] == "o")
			o++;
		else
		{
			space++;
			tmp_pos = 5;
		}

		if (field_7_9[1] == "x")
			x++;
		else if (field_7_9[1] == "o")
			o++;
		else
		{
			space++;
			tmp_pos = 8;
		}
		if (x == 2 && space == 1)
		{
			priority = 2;
			return tmp_pos;
		}
		if (o == 2 && space == 1)
		{
			priority = 1;
			return tmp_pos;
		}
		return -1;
	}
	int AIHelp_369x(vector<string> field_1_3, vector<string> field_4_6, vector<string> field_7_9, int& priority) {
		int x = 0;
		int o = 0;
		int space = 0;
		int tmp_pos = 0;

		if (field_1_3[2] == "x")
			x++;
		else if (field_1_3[2] == "o")
			o++;
		else
		{
			space++;
			tmp_pos = 3;
		}

		if (field_4_6[2] == "x")
			x++;
		else if (field_4_6[2] == "o")
			o++;
		else
		{
			space++;
			tmp_pos = 6;
		}

		if (field_7_9[2] == "x")
			x++;
		else if (field_7_9[2] == "o")
			o++;
		else
		{
			space++;
			tmp_pos = 9;
		}
		if (x == 2 && space == 1)
		{
			priority = 2;
			return tmp_pos;
		}
		if (o == 2 && space == 1)
		{
			priority = 1;
			return tmp_pos;
		}
		return -1;
	}
	int AIHelp_159x(vector<string> field_1_3, vector<string> field_4_6, vector<string> field_7_9, int& priority) {
		int x = 0;
		int o = 0;
		int space = 0;
		int tmp_pos = 0;

		if (field_1_3[0] == "x")
			x++;
		else if (field_1_3[0] == "o")
			o++;
		else
		{
			space++;
			tmp_pos = 1;
		}

		if (field_4_6[1] == "x")
			x++;
		else if (field_4_6[1] == "o")
			o++;
		else
		{
			space++;
			tmp_pos = 5;
		}

		if (field_7_9[2] == "x")
			x++;
		else if (field_7_9[2] == "o")
			o++;
		else
		{
			space++;
			tmp_pos = 9;
		}
		if (x == 2 && space == 1)
		{
			priority = 2;
			return tmp_pos;
		}
		if (o == 2 && space == 1)
		{
			priority = 1;
			return tmp_pos;
		}
		return -1;
	}
	int AIHelp_357x(vector<string> field_1_3, vector<string> field_4_6, vector<string> field_7_9, int& priority) {
		int x = 0;
		int o = 0;
		int space = 0;
		int tmp_pos = 0;

		if (field_1_3[2] == "x")
			x++;
		else if (field_1_3[2] == "o")
			o++;
		else
		{
			space++;
			tmp_pos = 3;
		}

		if (field_4_6[1] == "x")
			x++;
		else if (field_4_6[1] == "o")
			o++;
		else
		{
			space++;
			tmp_pos = 5;
		}

		if (field_7_9[0] == "x")
			x++;
		else if (field_7_9[0] == "o")
			o++;
		else
		{
			space++;
			tmp_pos = 7;
		}
		if (x == 2 && space == 1)
		{
			priority = 2;
			return tmp_pos;
		}
		if (o == 2 && space == 1)
		{
			priority = 1;
			return tmp_pos;
		}
		return -1;
	}
	int AIHelp_159xox(vector<string> field_1_3, vector<string> field_4_6, vector<string> field_7_9, int& priority, vector<int> positions) {
		int x = 0;
		int o = 0;
		int space = 0;
		int tmp_pos = 0;
		if (field_1_3[0] == "x" && field_7_9[2] == "x")
		{
			for (int i = 0; i < positions.size(); i++)
			{
				if (positions[i] == 2 || positions[i] == 4 || positions[i] == 6 || positions[i] == 8)
				{
					return positions[i];
					break;
				}
			}
		}
		return -1;
	}
	int AIHelp_357xox(vector<string> field_1_3, vector<string> field_4_6, vector<string> field_7_9, int& priority, vector<int> positions) {
		int x = 0;
		int o = 0;
		int space = 0;
		int tmp_pos = 0;
		if (field_1_3[2] == "x" && field_7_9[0] == "x")
		{
			for (int i = 0; i < positions.size(); i++)
			{
				if (positions[i] == 2 || positions[i] == 4 || positions[i] == 6 || positions[i] == 8)
				{
					return positions[i];
					break;
				}
			}
		}
		return -1;
	}
	//AI_help

	//methods
	void set_x_o(int pos, char x_o)
	{
		switch (pos)
		{
		case 1:
			field_1_3[0] = x_o;
			for (int i = 0; i < positions.size(); i++)
			{
				if (positions[i] == 1)
				{
					positions.erase(positions.begin() + i);
					break;
				}
			}
			break;
		case 2:
			field_1_3[1] = x_o;
			for (int i = 0; i < positions.size(); i++)
			{
				if (positions[i] == 2)
				{
					positions.erase(positions.begin() + i);
					break;
				}
			}
			break;
		case 3:
			field_1_3[2] = x_o;
			for (int i = 0; i < positions.size(); i++)
			{
				if (positions[i] == 3)
				{
					positions.erase(positions.begin() + i);
					break;
				}
			}
			break;
			break;
		case 4:
			field_4_6[0] = x_o;
			for (int i = 0; i < positions.size(); i++)
			{
				if (positions[i] == 4)
				{
					positions.erase(positions.begin() + i);
					break;
				}
			}
			break;
		case 5:
			field_4_6[1] = x_o;
			for (int i = 0; i < positions.size(); i++)
			{
				if (positions[i] == 5)
				{
					positions.erase(positions.begin() + i);
					break;
				}
			}
			break;
		case 6:
			field_4_6[2] = x_o;
			for (int i = 0; i < positions.size(); i++)
			{
				if (positions[i] == 6)
				{
					positions.erase(positions.begin() + i);
					break;
				}

			}
			break;
		case 7:
			field_7_9[0] = x_o;
			for (int i = 0; i < positions.size(); i++)
			{
				if (positions[i] == 7)
				{
					positions.erase(positions.begin() + i);
					break;
				}
			}
			break;
		case 8:
			field_7_9[1] = x_o;
			for (int i = 0; i < positions.size(); i++)
			{
				if (positions[i] == 8)
				{
					positions.erase(positions.begin() + i);
					break;
				}
			}
			break;
		case 9:
			field_7_9[2] = x_o;
			for (int i = 0; i < positions.size(); i++)
			{
				if (positions[i] == 9)
				{
					positions.erase(positions.begin() + i);
					break;
				}
			}
			break;
		}
	}
	void Print()
	{
		for (int i = 0; i < 3; i++)
		{
			if (i == 0)
			{
				cout << " ";
			}
			if (i != 2)
			{
				cout << field_1_3[i] << " | ";
			}
			else
			{
				cout << field_1_3[i] << "\n";
				cout << "-----------\n";
			}
		}
		for (int i = 0; i < 3; i++)
		{
			if (i == 0)
			{
				cout << " ";
			}
			if (i != 2)
			{
				cout << field_4_6[i] << " | ";
			}
			else
			{
				cout << field_4_6[i] << "\n";
				cout << "-----------\n";
			}
		}
		for (int i = 0; i < 3; i++)
		{
			if (i == 0)
			{
				cout << " ";
			}
			if (i != 2)
			{
				cout << field_7_9[i] << " | ";
			}
			else
			{
				cout << field_7_9[i] << "\n";
			}
		}
	}
	void Printpos()
	{
		for (int i = 0; i < positions.size(); i++)
		{
			cout << positions[i] << " ";
		}
	}
	//methods

};