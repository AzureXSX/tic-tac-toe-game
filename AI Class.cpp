#pragma once
#include "Solutions^^.h"
#include "Field Class.cpp"
class AI//Perfect tic-tac-toe AI
{
public:
	int AI_pos(int xpos, vector<int> positions, vector<string> field_1_3, vector<string> field_4_6, vector<string> field_7_9)
	{
		Field F;
		int f = 0;
		int priority = 0;
		vector<int> pos;
		vector<int> prty;
		switch (xpos)
		{
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 7:
		case 8:
		case 9:
			f = 0;
			priority = 0;
			pos.resize(0);
			prty.resize(0);
			for (int i = 0; i < positions.size(); i++)
			{
				if (F.AIHelp_123x(field_1_3, field_4_6, field_7_9, priority) != -1)
				{
					pos.resize(pos.size() + 1);
					pos[pos.size() - 1] = F.AIHelp_123x(field_1_3, field_4_6, field_7_9, priority);
					prty.resize(prty.size() + 1);
					prty[prty.size() - 1] = priority;
				}
				if (F.AIHelp_456x(field_1_3, field_4_6, field_7_9, priority) != -1)
				{
					pos.resize(pos.size() + 1);
					pos[pos.size() - 1] = F.AIHelp_456x(field_1_3, field_4_6, field_7_9, priority);
					prty.resize(prty.size() + 1);
					prty[prty.size() - 1] = priority;
				}
				if (F.AIHelp_789x(field_1_3, field_4_6, field_7_9, priority) != -1)
				{
					pos.resize(pos.size() + 1);
					pos[pos.size() - 1] = F.AIHelp_789x(field_1_3, field_4_6, field_7_9, priority);
					prty.resize(prty.size() + 1);
					prty[prty.size() - 1] = priority;
				}
				if (F.AIHelp_147x(field_1_3, field_4_6, field_7_9, priority) != -1)
				{
					pos.resize(pos.size() + 1);
					pos[pos.size() - 1] = F.AIHelp_147x(field_1_3, field_4_6, field_7_9, priority);
					prty.resize(prty.size() + 1);
					prty[prty.size() - 1] = priority;
				}
				if (F.AIHelp_258x(field_1_3, field_4_6, field_7_9, priority) != -1)
				{
					pos.resize(pos.size() + 1);
					pos[pos.size() - 1] = F.AIHelp_258x(field_1_3, field_4_6, field_7_9, priority);
					prty.resize(prty.size() + 1);
					prty[prty.size() - 1] = priority;
				}
				if (F.AIHelp_369x(field_1_3, field_4_6, field_7_9, priority) != -1)
				{
					pos.resize(pos.size() + 1);
					pos[pos.size() - 1] = F.AIHelp_369x(field_1_3, field_4_6, field_7_9, priority);
					prty.resize(prty.size() + 1);
					prty[prty.size() - 1] = priority;
				}
				if (F.AIHelp_357x(field_1_3, field_4_6, field_7_9, priority) != -1)
				{
					pos.resize(pos.size() + 1);
					pos[pos.size() - 1] = F.AIHelp_357x(field_1_3, field_4_6, field_7_9, priority);
					prty.resize(prty.size() + 1);
					prty[prty.size() - 1] = priority;
				}
				if (F.AIHelp_159x(field_1_3, field_4_6, field_7_9, priority) != -1)
				{
					pos.resize(pos.size() + 1);
					pos[pos.size() - 1] = F.AIHelp_159x(field_1_3, field_4_6, field_7_9, priority);
					prty.resize(prty.size() + 1);
					prty[prty.size() - 1] = priority;
				}
				if (pos.size() != 0)
				{
					int mark = 0;
					for (int i = 0; i < pos.size(); i++)
					{
						if (prty[i] == 1)
						{
							mark = 1;
							return pos[i];
						}
					}
					if (mark == 0)
					{
						return pos[0];
					}
				}
				if (F.AIHelp_159xox(field_1_3, field_4_6, field_7_9, priority, positions) != -1)
				{
					return F.AIHelp_159xox(field_1_3, field_4_6, field_7_9, priority, positions);
				}
				if (F.AIHelp_357xox(field_1_3, field_4_6, field_7_9, priority, positions) != -1)
				{
					return F.AIHelp_357xox(field_1_3, field_4_6, field_7_9, priority, positions);
				}
				if (positions[i] == 5)
				{
					return positions[i];
					f = 1;
					break;
				}
			}
			if (f == 0)
			{
				priority = 0;
				pos.resize(0);
				prty.resize(0);
				for (int i = 0; i < positions.size(); i++)
				{
					if (F.AIHelp_123x(field_1_3, field_4_6, field_7_9, priority) != -1)
					{
						pos.resize(pos.size() + 1);
						pos[pos.size() - 1] = F.AIHelp_123x(field_1_3, field_4_6, field_7_9, priority);
						prty.resize(prty.size() + 1);
						prty[prty.size() - 1] = priority;
					}
					if (F.AIHelp_456x(field_1_3, field_4_6, field_7_9, priority) != -1)
					{
						pos.resize(pos.size() + 1);
						pos[pos.size() - 1] = F.AIHelp_456x(field_1_3, field_4_6, field_7_9, priority);
						prty.resize(prty.size() + 1);
						prty[prty.size() - 1] = priority;
					}
					if (F.AIHelp_789x(field_1_3, field_4_6, field_7_9, priority) != -1)
					{
						pos.resize(pos.size() + 1);
						pos[pos.size() - 1] = F.AIHelp_789x(field_1_3, field_4_6, field_7_9, priority);
						prty.resize(prty.size() + 1);
						prty[prty.size() - 1] = priority;
					}
					if (F.AIHelp_147x(field_1_3, field_4_6, field_7_9, priority) != -1)
					{
						pos.resize(pos.size() + 1);
						pos[pos.size() - 1] = F.AIHelp_147x(field_1_3, field_4_6, field_7_9, priority);
						prty.resize(prty.size() + 1);
						prty[prty.size() - 1] = priority;
					}
					if (F.AIHelp_258x(field_1_3, field_4_6, field_7_9, priority) != -1)
					{
						pos.resize(pos.size() + 1);
						pos[pos.size() - 1] = F.AIHelp_258x(field_1_3, field_4_6, field_7_9, priority);
						prty.resize(prty.size() + 1);
						prty[prty.size() - 1] = priority;
					}
					if (F.AIHelp_369x(field_1_3, field_4_6, field_7_9, priority) != -1)
					{
						pos.resize(pos.size() + 1);
						pos[pos.size() - 1] = F.AIHelp_369x(field_1_3, field_4_6, field_7_9, priority);
						prty.resize(prty.size() + 1);
						prty[prty.size() - 1] = priority;
					}
					if (F.AIHelp_357x(field_1_3, field_4_6, field_7_9, priority) != -1)
					{
						pos.resize(pos.size() + 1);
						pos[pos.size() - 1] = F.AIHelp_357x(field_1_3, field_4_6, field_7_9, priority);
						prty.resize(prty.size() + 1);
						prty[prty.size() - 1] = priority;
					}
					if (F.AIHelp_159x(field_1_3, field_4_6, field_7_9, priority) != -1)
					{
						pos.resize(pos.size() + 1);
						pos[pos.size() - 1] = F.AIHelp_159x(field_1_3, field_4_6, field_7_9, priority);
						prty.resize(prty.size() + 1);
						prty[prty.size() - 1] = priority;
					}
					if (pos.size() != 0)
					{
						int mark = 0;
						for (int i = 0; i < pos.size(); i++)
						{
							if (prty[i] == 1)
							{
								mark = 1;
								return pos[i];
							}
						}
						if (mark == 0)
						{
							return pos[0];
						}
					}
					if (F.AIHelp_159xox(field_1_3, field_4_6, field_7_9, priority, positions) != -1)
					{
						return F.AIHelp_159xox(field_1_3, field_4_6, field_7_9, priority, positions);
					}
					if (F.AIHelp_357xox(field_1_3, field_4_6, field_7_9, priority, positions) != -1)
					{
						return F.AIHelp_357xox(field_1_3, field_4_6, field_7_9, priority, positions);
					}
					if (positions[i] == 1 || positions[i] == 3 || positions[i] == 7 || positions[i] == 9)
					{
						return positions[i];
						f = 1;
						break;
					}
				}
			}
			if (f == 0)
			{
				priority = 0;
				pos.resize(0);
				prty.resize(0);
				for (int i = 0; i < positions.size(); i++)
				{
					if (F.AIHelp_123x(field_1_3, field_4_6, field_7_9, priority) != -1)
					{
						pos.resize(pos.size() + 1);
						pos[pos.size() - 1] = F.AIHelp_123x(field_1_3, field_4_6, field_7_9, priority);
						prty.resize(prty.size() + 1);
						prty[prty.size() - 1] = priority;
					}
					if (F.AIHelp_456x(field_1_3, field_4_6, field_7_9, priority) != -1)
					{
						pos.resize(pos.size() + 1);
						pos[pos.size() - 1] = F.AIHelp_456x(field_1_3, field_4_6, field_7_9, priority);
						prty.resize(prty.size() + 1);
						prty[prty.size() - 1] = priority;
					}
					if (F.AIHelp_789x(field_1_3, field_4_6, field_7_9, priority) != -1)
					{
						pos.resize(pos.size() + 1);
						pos[pos.size() - 1] = F.AIHelp_789x(field_1_3, field_4_6, field_7_9, priority);
						prty.resize(prty.size() + 1);
						prty[prty.size() - 1] = priority;
					}
					if (F.AIHelp_147x(field_1_3, field_4_6, field_7_9, priority) != -1)
					{
						pos.resize(pos.size() + 1);
						pos[pos.size() - 1] = F.AIHelp_147x(field_1_3, field_4_6, field_7_9, priority);
						prty.resize(prty.size() + 1);
						prty[prty.size() - 1] = priority;
					}
					if (F.AIHelp_258x(field_1_3, field_4_6, field_7_9, priority) != -1)
					{
						pos.resize(pos.size() + 1);
						pos[pos.size() - 1] = F.AIHelp_258x(field_1_3, field_4_6, field_7_9, priority);
						prty.resize(prty.size() + 1);
						prty[prty.size() - 1] = priority;
					}
					if (F.AIHelp_369x(field_1_3, field_4_6, field_7_9, priority) != -1)
					{
						pos.resize(pos.size() + 1);
						pos[pos.size() - 1] = F.AIHelp_369x(field_1_3, field_4_6, field_7_9, priority);
						prty.resize(prty.size() + 1);
						prty[prty.size() - 1] = priority;
					}
					if (F.AIHelp_357x(field_1_3, field_4_6, field_7_9, priority) != -1)
					{
						pos.resize(pos.size() + 1);
						pos[pos.size() - 1] = F.AIHelp_357x(field_1_3, field_4_6, field_7_9, priority);
						prty.resize(prty.size() + 1);
						prty[prty.size() - 1] = priority;
					}
					if (F.AIHelp_159x(field_1_3, field_4_6, field_7_9, priority) != -1)
					{
						pos.resize(pos.size() + 1);
						pos[pos.size() - 1] = F.AIHelp_159x(field_1_3, field_4_6, field_7_9, priority);
						prty.resize(prty.size() + 1);
						prty[prty.size() - 1] = priority;
					}
					if (pos.size() != 0)
					{
						int mark = 0;
						for (int i = 0; i < pos.size(); i++)
						{
							if (prty[i] == 1)
							{
								mark = 1;
								return pos[i];
							}
						}
						if (mark == 0)
						{
							return pos[0];
						}
					}
					if (F.AIHelp_159xox(field_1_3, field_4_6, field_7_9, priority, positions) != -1)
					{
						return F.AIHelp_159xox(field_1_3, field_4_6, field_7_9, priority, positions);
					}
					if (F.AIHelp_357xox(field_1_3, field_4_6, field_7_9, priority, positions) != -1)
					{
						return F.AIHelp_357xox(field_1_3, field_4_6, field_7_9, priority, positions);
					}
					if (positions[i] == 2 || positions[i] == 4 || positions[i] == 6 || positions[i] == 8)
					{
						return positions[i];
						f = 1;
						break;
					}
				}
			}
			break;
		case 5:
			priority = 0;
			pos.resize(0);
			prty.resize(0);
			f = 0;
			for (int i = 0; i < positions.size(); i++)
			{
				if (F.AIHelp_123x(field_1_3, field_4_6, field_7_9, priority) != -1)
				{
					pos.resize(pos.size() + 1);
					pos[pos.size() - 1] = F.AIHelp_123x(field_1_3, field_4_6, field_7_9, priority);
					prty.resize(prty.size() + 1);
					prty[prty.size() - 1] = priority;
				}
				if (F.AIHelp_456x(field_1_3, field_4_6, field_7_9, priority) != -1)
				{
					pos.resize(pos.size() + 1);
					pos[pos.size() - 1] = F.AIHelp_456x(field_1_3, field_4_6, field_7_9, priority);
					prty.resize(prty.size() + 1);
					prty[prty.size() - 1] = priority;
				}
				if (F.AIHelp_789x(field_1_3, field_4_6, field_7_9, priority) != -1)
				{
					pos.resize(pos.size() + 1);
					pos[pos.size() - 1] = F.AIHelp_789x(field_1_3, field_4_6, field_7_9, priority);
					prty.resize(prty.size() + 1);
					prty[prty.size() - 1] = priority;
				}
				if (F.AIHelp_147x(field_1_3, field_4_6, field_7_9, priority) != -1)
				{
					pos.resize(pos.size() + 1);
					pos[pos.size() - 1] = F.AIHelp_147x(field_1_3, field_4_6, field_7_9, priority);
					prty.resize(prty.size() + 1);
					prty[prty.size() - 1] = priority;
				}
				if (F.AIHelp_258x(field_1_3, field_4_6, field_7_9, priority) != -1)
				{
					pos.resize(pos.size() + 1);
					pos[pos.size() - 1] = F.AIHelp_258x(field_1_3, field_4_6, field_7_9, priority);
					prty.resize(prty.size() + 1);
					prty[prty.size() - 1] = priority;
				}
				if (F.AIHelp_369x(field_1_3, field_4_6, field_7_9, priority) != -1)
				{
					pos.resize(pos.size() + 1);
					pos[pos.size() - 1] = F.AIHelp_369x(field_1_3, field_4_6, field_7_9, priority);
					prty.resize(prty.size() + 1);
					prty[prty.size() - 1] = priority;
				}
				if (F.AIHelp_357x(field_1_3, field_4_6, field_7_9, priority) != -1)
				{
					pos.resize(pos.size() + 1);
					pos[pos.size() - 1] = F.AIHelp_357x(field_1_3, field_4_6, field_7_9, priority);
					prty.resize(prty.size() + 1);
					prty[prty.size() - 1] = priority;
				}
				if (F.AIHelp_159x(field_1_3, field_4_6, field_7_9, priority) != -1)
				{
					pos.resize(pos.size() + 1);
					pos[pos.size() - 1] = F.AIHelp_159x(field_1_3, field_4_6, field_7_9, priority);
					prty.resize(prty.size() + 1);
					prty[prty.size() - 1] = priority;
				}
				if (pos.size() != 0)
				{
					int mark = 0;
					for (int i = 0; i < pos.size(); i++)
					{
						if (prty[i] == 1)
						{
							mark = 1;
							return pos[i];
						}
					}
					if (mark == 0)
					{
						return pos[0];
					}
				}
				if (F.AIHelp_159xox(field_1_3, field_4_6, field_7_9, priority, positions) != -1)
				{
					return F.AIHelp_159xox(field_1_3, field_4_6, field_7_9, priority, positions);
				}
				if (F.AIHelp_357xox(field_1_3, field_4_6, field_7_9, priority, positions) != -1)
				{
					return F.AIHelp_357xox(field_1_3, field_4_6, field_7_9, priority, positions);
				}
				if (positions[i] == 1 || positions[i] == 3 || positions[i] == 7 || positions[i] == 9)
				{
					return positions[i];
					f = 1;
					break;
				}
			}
			if (f == 0)
			{
				if (F.AIHelp_123x(field_1_3, field_4_6, field_7_9, priority) != -1)
				{
					pos.resize(pos.size() + 1);
					pos[pos.size() - 1] = F.AIHelp_123x(field_1_3, field_4_6, field_7_9, priority);
					prty.resize(prty.size() + 1);
					prty[prty.size() - 1] = priority;
				}
				if (F.AIHelp_456x(field_1_3, field_4_6, field_7_9, priority) != -1)
				{
					pos.resize(pos.size() + 1);
					pos[pos.size() - 1] = F.AIHelp_456x(field_1_3, field_4_6, field_7_9, priority);
					prty.resize(prty.size() + 1);
					prty[prty.size() - 1] = priority;
				}
				if (F.AIHelp_789x(field_1_3, field_4_6, field_7_9, priority) != -1)
				{
					pos.resize(pos.size() + 1);
					pos[pos.size() - 1] = F.AIHelp_789x(field_1_3, field_4_6, field_7_9, priority);
					prty.resize(prty.size() + 1);
					prty[prty.size() - 1] = priority;
				}
				if (F.AIHelp_147x(field_1_3, field_4_6, field_7_9, priority) != -1)
				{
					pos.resize(pos.size() + 1);
					pos[pos.size() - 1] = F.AIHelp_147x(field_1_3, field_4_6, field_7_9, priority);
					prty.resize(prty.size() + 1);
					prty[prty.size() - 1] = priority;
				}
				if (F.AIHelp_258x(field_1_3, field_4_6, field_7_9, priority) != -1)
				{
					pos.resize(pos.size() + 1);
					pos[pos.size() - 1] = F.AIHelp_258x(field_1_3, field_4_6, field_7_9, priority);
					prty.resize(prty.size() + 1);
					prty[prty.size() - 1] = priority;
				}
				if (F.AIHelp_369x(field_1_3, field_4_6, field_7_9, priority) != -1)
				{
					pos.resize(pos.size() + 1);
					pos[pos.size() - 1] = F.AIHelp_369x(field_1_3, field_4_6, field_7_9, priority);
					prty.resize(prty.size() + 1);
					prty[prty.size() - 1] = priority;
				}
				if (F.AIHelp_357x(field_1_3, field_4_6, field_7_9, priority) != -1)
				{
					pos.resize(pos.size() + 1);
					pos[pos.size() - 1] = F.AIHelp_357x(field_1_3, field_4_6, field_7_9, priority);
					prty.resize(prty.size() + 1);
					prty[prty.size() - 1] = priority;
				}
				if (F.AIHelp_159x(field_1_3, field_4_6, field_7_9, priority) != -1)
				{
					pos.resize(pos.size() + 1);
					pos[pos.size() - 1] = F.AIHelp_159x(field_1_3, field_4_6, field_7_9, priority);
					prty.resize(prty.size() + 1);
					prty[prty.size() - 1] = priority;
				}
				if (pos.size() != 0)
				{
					int mark = 0;
					for (int i = 0; i < pos.size(); i++)
					{
						if (prty[i] == 1)
						{
							mark = 1;
							return pos[i];
						}
					}
					if (mark == 0)
					{
						return pos[0];
					}
				}
				if (F.AIHelp_159xox(field_1_3, field_4_6, field_7_9, priority, positions) != -1)
				{
					return F.AIHelp_159xox(field_1_3, field_4_6, field_7_9, priority, positions);
				}
				if (F.AIHelp_357xox(field_1_3, field_4_6, field_7_9, priority, positions) != -1)
				{
					return F.AIHelp_357xox(field_1_3, field_4_6, field_7_9, priority, positions);
				}
				for (int i = 0; i < positions.size(); i++)
				{
					if (positions[i] == 2 || positions[i] == 4 || positions[i] == 6 || positions[i] == 8)
					{
						return positions[i];
						f = 1;
						break;
					}
				}
			}
			break;
		}

	}
};