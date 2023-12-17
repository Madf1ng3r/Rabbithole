#include<iostream>
#include<cstdlib>
#include<ctime>
#include<fstream>
#include<windows.h>
using namespace std;

int ROOK(char board[8][8], int i1, int j1, int i2, int j2)
{
	int count = 0;
	int k;
	if (i1 == i2 && j1 == j2)
		return 0;
	if (i1 == i2 || j1 == j2)
	{
		if (!(board[i2][j2] > 64 && board[i2][j2] < 91) && board[i2][j2] != 107)
		{
			if (j1 == j2 && i1 != i2)
			{
				if (i1 > i2)
				{
					k = i2 + 1;
					for (; k < i1; k++)
					{
						if (board[k][j1] == '_')
							count++;
					}
					if (count == abs(i1 - i2) - 1)
						return 1;
					else
						return 0;
				}
				if (i2 > i1)
				{
					k = i1 + 1;
					for (; k < i2; k++)
					{
						if (board[k][j1] == '_')
							count++;
					}
					if (count == abs(i2 - i1) - 1)
						return 1;
					else
						return 0;
				}
			}
			if (i1 == i2 && j1 != j2)
			{
				if (j1 > j2)
				{
					k = j2 + 1;
					for (; k < j1; k++)
					{
						if (board[i1][k] == '_')
							count++;
					}
					if (count == abs(j1 - j2) - 1)
						return 1;
					else
						return 0;
				}
				if (j2 > j1)
				{
					k = j1 + 1;
					for (; k < j2; k++)
					{
						if (board[i1][k] == '_')
							count++;
					}
					if (count == abs(j2 - j1) - 1)
						return 1;
					else
						return 0;
				}
			}
		}
		else
			return 0;
	}
	else
		return 0;
}
int rook(char board[8][8], int i1, int j1, int i2, int j2)
{
	int count = 0;
	int k;
	if (i1 == i2 && j1 == j2)
		return 0;
	if (i1 == i2 || j1 == j2)
	{
		if (!(board[i2][j2] > 97 && board[i2][j2] < 123) && board[i2][j2] != 75)
		{
			if (j1 == j2 && i1 != i2)
			{
				if (i1 > i2)
				{
					k = i2 + 1;
					for (; k < i1; k++)
					{
						if (board[k][j1] == '_')
							count++;
					}
					if (count == abs(i1 - i2) - 1)
						return 1;
					else
						return 0;
				}
				if (i2 > i1)
				{
					k = i1 + 1;
					for (; k < i2; k++)
					{
						if (board[k][j1] == '_')
							count++;
					}
					if (count == abs(i2 - i1) - 1)
						return 1;
					else
						return 0;
				}
			}
			if (i1 == i2 && j1 != j2)
			{
				if (j1 > j2)
				{
					k = j2 + 1;
					for (; k < j1; k++)
					{
						if (board[i1][k] == '_')
							count++;
					}
					if (count == abs(j1 - j2) - 1)
						return 1;
					else
						return 0;
				}
				if (j2 > j1)
				{
					k = j1 + 1;
					for (; k < j2; k++)
					{
						if (board[i1][k] == '_')
							count++;
					}
					if (count == abs(j2 - j1) - 1)
						return 1;
					else
						return 0;
				}
			}
		}
		else
			return 0;
	}
	else
		return 0;
}
int KNIGHT(char board[8][8], int i1, int j1, int i2, int j2)
{
	if (i1 == i2 && j1 == j2)
		return 0;
	if (!(board[i2][j2] > 64 && board[i2][j2] < 91) && board[i2][j2] != 107)
	{
		if (abs(i1 - i2) + abs(j1 - j2) == 3 && abs(i1 - i2) != 0 && abs(j1 - j2) != 0)
			return 1;
		else
			return 0;
	}
	else
		return 0;
}
int knight(char board[8][8], int i1, int j1, int i2, int j2)
{
	if (i1 == i2 && j1 == j2)
		return 0;
	if (!(board[i2][j2] > 97 && board[i2][j2] < 123) && board[i2][j2] != 75)
	{
		if (abs(i1 - i2) + abs(j1 - j2) == 3 && abs(i1 - i2) != 0 && abs(j1 - j2) != 0)
			return 1;
		else
			return 0;
	}
	else
		return 0;
}
int BISHOP(char board[8][8], int i1, int j1, int i2, int j2)
{
	int count = 0;
	int m;
	if (i1 == i2 && j1 == j2)
		return 0;
	if (abs(i1 - i2) == abs(j1 - j2))
	{
		if (!(board[i2][j2] > 64 && board[i2][j2] < 91) && board[i2][j2] != 107)
		{
			if (i2 > i1 && j2 > j1)
			{
				for (m = 1; m < abs(j1 - j2); m++)
					if (board[i1 + m][j1 + m] == '_')
						count++;
				if (count == abs(j1 - j2) - 1)
					return 1;
				else
					return 0;
			}
			if (i2<i1 && j2>j1)
			{
				for (m = 1; m < abs(j1 - j2); m++)
					if (board[i1 - m][j1 + m] == '_')
						count++;
				if (count == abs(j1 - j2) - 1)
					return 1;
				else
					return 0;
			}
			if (i2 < i1 && j2 < j1)
			{
				for (m = 1; m < abs(j1 - j2); m++)
					if (board[i1 - m][j1 - m] == '_')
						count++;
				if (count == abs(j1 - j2) - 1)
					return 1;
				else
					return 0;
			}
			if (i2 > i1 && j2 < j1)
			{
				for (m = 1; m < abs(j1 - j2); m++)
					if (board[i1 + m][j1 - m] == '_')
						count++;
				if (count == abs(j1 - j2) - 1)
					return 1;
				else
					return 0;
			}
		}
		else
			return 0;
	}
	else
		return 0;
}
int bishop(char board[8][8], int i1, int j1, int i2, int j2)
{
	int count = 0;
	int m;
	if (i1 == i2 && j1 == j2)
		return 0;
	if (abs(i1 - i2) == abs(j1 - j2))
	{
		if (!(board[i2][j2] > 97 && board[i2][j2] < 123) && board[i2][j2] != 75)
		{
			if (i2 > i1 && j2 > j1)
			{
				for (m = 1; m < abs(j1 - j2); m++)
					if (board[i1 + m][j1 + m] == '_')
						count++;
				if (count == abs(j1 - j2) - 1)
					return 1;
				else
					return 0;
			}
			if (i2<i1 && j2>j1)
			{
				for (m = 1; m < abs(j1 - j2); m++)
					if (board[i1 - m][j1 + m] == '_')
						count++;
				if (count == abs(j1 - j2) - 1)
					return 1;
				else
					return 0;
			}
			if (i2 < i1 && j2 < j1)
			{
				for (m = 1; m < abs(j1 - j2); m++)
					if (board[i1 - m][j1 - m] == '_')
						count++;
				if (count == abs(j1 - j2) - 1)
					return 1;
				else
					return 0;
			}
			if (i2 > i1 && j2 < j1)
			{
				for (m = 1; m < abs(j1 - j2); m++)
					if (board[i1 + m][j1 - m] == '_')
						count++;
				if (count == abs(j1 - j2) - 1)
					return 1;
				else
					return 0;
			}
		}
		else
			return 0;
	}
	else
		return 0;
}
int QUEEN(char board[8][8], int i1, int j1, int i2, int j2)
{
	int count = 0;
	int m;
	int k;
	if (i1 == i2 && j1 == j2)
		return 0;
	if (abs(i1 - i2) == abs(j1 - j2))
	{
		if (!(board[i2][j2] > 64 && board[i2][j2] < 91) && board[i2][j2] != 107)
		{
			if (i2 > i1 && j2 > j1)
			{
				for (m = 1; m < abs(j1 - j2); m++)
					if (board[i1 + m][j1 + m] == '_')
						count++;
				if (count == abs(j1 - j2) - 1)
					return 1;
				else
					return 0;
			}
			if (i2<i1 && j2>j1)
			{
				for (m = 1; m < abs(j1 - j2); m++)
					if (board[i1 - m][j1 + m] == '_')
						count++;
				if (count == abs(j1 - j2) - 1)
					return 1;
				else
					return 0;
			}
			if (i2 < i1 && j2 < j1)
			{
				for (m = 1; m < abs(j1 - j2); m++)
					if (board[i1 - m][j1 - m] == '_')
						count++;
				if (count == abs(j1 - j2) - 1)
					return 1;
				else
					return 0;
			}
			if (i2 > i1 && j2 < j1)
			{
				for (m = 1; m < abs(j1 - j2); m++)
					if (board[i1 + m][j1 - m] == '_')
						count++;
				if (count == abs(j1 - j2) - 1)
					return 1;
				else
					return 0;
			}
		}
		else
			return 0;
	}
	if (i1 == i2 || j1 == j2)
	{
		if (!(board[i2][j2] > 64 && board[i2][j2] < 91) && board[i2][j2] != 107)
		{
			if (j1 == j2 && i1 != i2)
			{
				if (i1 > i2)
				{
					k = i2 + 1;
					for (; k < i1; k++)
					{
						if (board[k][j1] == '_')
							count++;
					}
					if (count == abs(i1 - i2) - 1)
						return 1;
					else
						return 0;
				}
				if (i2 > i1)
				{
					k = i1 + 1;
					for (; k < i2; k++)
					{
						if (board[k][j1] == '_')
							count++;
					}
					if (count == abs(i2 - i1) - 1)
						return 1;
					else
						return 0;
				}
			}
			if (i1 == i2 && j1 != j2)
			{
				if (j1 > j2)
				{
					k = j2 + 1;
					for (; k < j1; k++)
					{
						if (board[i1][k] == '_')
							count++;
					}
					if (count == abs(j1 - j2) - 1)
						return 1;
					else
						return 0;
				}
				if (j2 > j1)
				{
					k = j1 + 1;
					for (; k < j2; k++)
					{
						if (board[i1][k] == '_')
							count++;
					}
					if (count == abs(j2 - j1) - 1)
						return 1;
					else
						return 0;
				}
			}
		}
		else
			return 0;
	}
	else
		return 0;
}
int queen(char board[8][8], int i1, int j1, int i2, int j2)
{
	int count = 0;
	int	m;
	int k;
	if (i1 == i2 && j1 == j2)
		return 0;
	if (abs(i1 - i2) == abs(j1 - j2))
	{
		if (!(board[i2][j2] > 97 && board[i2][j2] < 123) && board[i2][j2] != 75)
		{
			if (i2 > i1 && j2 > j1)
			{
				for (m = 1; m < abs(j1 - j2); m++)
					if (board[i1 + m][j1 + m] == '_')
						count++;
				if (count == abs(j1 - j2) - 1)
					return 1;
				else
					return 0;
			}
			if (i2<i1 && j2>j1)
			{
				for (m = 1; m < abs(j1 - j2); m++)
					if (board[i1 - m][j1 + m] == '_')
						count++;
				if (count == abs(j1 - j2) - 1)
					return 1;
				else
					return 0;
			}
			if (i2 < i1 && j2 < j1)
			{
				for (m = 1; m < abs(j1 - j2); m++)
					if (board[i1 - m][j1 - m] == '_')
						count++;
				if (count == abs(j1 - j2) - 1)
					return 1;
				else
					return 0;
			}
			if (i2 > i1 && j2 < j1)
			{
				for (m = 1; m < abs(j1 - j2); m++)
					if (board[i1 + m][j1 - m] == '_')
						count++;
				if (count == abs(j1 - j2) - 1)
					return 1;
				else
					return 0;
			}
		}
		else
			return 0;
	}
	if (i1 == i2 || j1 == j2)
	{
		if (!(board[i2][j2] > 97 && board[i2][j2] < 123) && board[i2][j2] != 75)
		{
			if (j1 == j2 && i1 != i2)
			{
				if (i1 > i2)
				{
					k = i2 + 1;
					for (; k < i1; k++)
					{
						if (board[k][j1] == '_')
							count++;
					}
					if (count == abs(i1 - i2) - 1)
						return 1;
					else
						return 0;
				}
				if (i2 > i1)
				{
					k = i1 + 1;
					for (; k < i2; k++)
					{
						if (board[k][j1] == '_')
							count++;
					}
					if (count == abs(i2 - i1) - 1)
						return 1;
					else
						return 0;
				}
			}
			if (i1 == i2 && j1 != j2)
			{
				if (j1 > j2)
				{
					k = j2 + 1;
					for (; k < j1; k++)
					{
						if (board[i1][k] == '_')
							count++;
					}
					if (count == abs(j1 - j2) - 1)
						return 1;
					else
						return 0;
				}
				if (j2 > j1)
				{
					k = j1 + 1;
					for (; k < j2; k++)
					{
						if (board[i1][k] == '_')
							count++;
					}
					if (count == abs(j2 - j1) - 1)
						return 1;
					else
						return 0;
				}
			}
		}
		else
			return 0;
	}
	else
		return 0;
}
int KING(char board[8][8], int i1, int j1, int i2, int j2, int c)
{
	int k;
	int count = 0;
	if (i1 == i2 && j1 == j2)
		return 0;
	if (!(board[i2][j2] > 64 && board[i2][j2] < 91) && board[i2][j2] != 107)
	{
		//Castling
		if (i1 == 7 && i2 == 7 && abs(j1 - j2) == 2 && c == 0)
		{
			if (j1 > j2)
			{
				k = j2;
				for (; k <= j1; k++)
				{
					if (board[i1][k] == '_')
						count++;
				}
				if (count == abs(j1 - j2))
				{
					if (board[i2][j2 - 1] == 'R')
					{
						board[i2][j2 - 1] = '_';
						board[i2][j2 + 1] = 'R';
						return 1;
					}
					if (board[i2][j2 - 2] == 'R')
					{
						board[i2][j2 - 2] = '_';
						board[i2][j2 + 1] = 'R';
						return 1;
					}
					else
						return 0;
				}
				else
					return 0;
			}
			if (j1 < j2)
			{
				k = j1;
				for (; k <= j2; k++)
				{
					if (board[i1][k] == '_')
						count++;
				}
				if (count == abs(j2 - j1))
				{
					if (board[i2][j2 + 1] == 'R')
					{
						board[i2][j2 + 1] = '_';
						board[i2][j2 - 1] = 'R';
						return 1;
					}
					if (board[i2][j2 + 2] == 'R')
					{
						board[i2][j2 + 2] = '_';
						board[i2][j2 - 1] = 'R';
						return 1;
					}
					else
						return 0;
				}
				else
					return 0;
			}
		}
		if (abs(i1 - i2) == abs(j1 - j2))
		{
			if (i2 > i1 && j2 > j1)
			{
				if (abs(i1 - i2) == 1 && abs(j1 - j2) == 1)
				{
					return 1;
				}
				else
					return 0;
			}
			if (i2<i1 && j2>j1)
			{
				if (abs(i1 - i2) == 1 && abs(j1 - j2) == 1)
				{
					return 1;
				}
				else
					return 0;
			}
			if (i2 < i1 && j2 < j1)
			{
				if (abs(i1 - i2) == 1 && abs(j1 - j2) == 1)
				{
					return 1;
				}
				else
					return 0;
			}
			if (i2 > i1 && j2 < j1)
			{
				if (abs(i1 - i2) == 1 && abs(j1 - j2) == 1)
				{
					return 1;
				}
				else
					return 0;
			}
		}
		if (i1 == i2 || j1 == j2)
		{
			if (j1 == j2 && i1 != i2)
			{
				if (i1 > i2 && abs(i1 - i2) == 1)
				{
					return 1;
				}
				if (i2 > i1 && abs(i1 - i2) == 1)
				{
					return 1;
				}
				else
					return 0;
			}
			if (i1 == i2 && j1 != j2)
			{
				if (j1 > j2 && abs(j1 - j2) == 1)
				{
					return 1;
				}
				if (j2 > j1 && abs(j1 - j2) == 1)
				{
					return 1;
				}
				else
					return 0;
			}
		}
		else
			return 0;
	}
	else
		return 0;
}
int king(char board[8][8], int i1, int j1, int i2, int j2, int c)
{
	int k;
	int count = 0;
	if (i1 == i2 && j1 == j2)
		return 0;
	if (!(board[i2][j2] > 97 && board[i2][j2] < 123) && board[i2][j2] != 75)
	{
		//Castling
		if (i1 == 0 && i2 == 0 && abs(j1 - j2) == 2 && c == 0)
		{
			if (j1 > j2)
			{
				k = j2;
				for (; k <= j1; k++)
				{
					if (board[i1][k] == '_')
						count++;
				}
				if (count == abs(j1 - j2))
				{
					if (board[i2][j2 - 1] == 'r')
					{
						board[i2][j2 - 1] = '_';
						board[i2][j2 + 1] = 'r';
						return 1;
					}
					if (board[i2][j2 - 2] == 'r')
					{
						board[i2][j2 - 2] = '_';
						board[i2][j2 + 1] = 'r';
						return 1;
					}
					else
						return 0;
				}
				else
					return 0;
			}
			if (j1 < j2)
			{
				k = j1;
				for (; k <= j2; k++)
				{
					if (board[i1][k] == '_')
						count++;
				}
				if (count == abs(j2 - j1))
				{
					if (board[i2][j2 + 1] == 'r')
					{
						board[i2][j2 + 1] = '_';
						board[i2][j2 - 1] = 'r';
						return 1;
					}
					if (board[i2][j2 + 2] == 'r')
					{
						board[i2][j2 + 2] = '_';
						board[i2][j2 - 1] = 'r';
						return 1;
					}
					else
						return 0;
				}
				else
					return 0;
			}
		}
		if (abs(i1 - i2) == abs(j1 - j2))
		{
			if (i2 > i1 && j2 > j1)
			{
				if (abs(i1 - i2) == 1 && abs(j1 - j2) == 1)
				{
					return 1;
				}
				else
					return 0;
			}
			if (i2<i1 && j2>j1)
			{
				if (abs(i1 - i2) == 1 && abs(j1 - j2) == 1)
				{
					return 1;
				}
				else
					return 0;
			}
			if (i2 < i1 && j2 < j1)
			{
				if (abs(i1 - i2) == 1 && abs(j1 - j2) == 1)
				{
					return 1;
				}
				else
					return 0;
			}
			if (i2 > i1 && j2 < j1)
			{
				if (abs(i1 - i2) == 1 && abs(j1 - j2) == 1)
				{
					return 1;
				}
				else
					return 0;
			}
		}
		if (i1 == i2 || j1 == j2)
		{
			if (j1 == j2 && i1 != i2)
			{
				if (i1 > i2 && abs(i1 - i2) == 1)
				{
					return 1;
				}
				if (i2 > i1 && abs(i1 - i2) == 1)
				{
					return 1;
				}
				else
					return 0;
			}
			if (i1 == i2 && j1 != j2)
			{
				if (j1 > j2 && abs(j1 - j2) == 1)
				{
					return 1;
				}
				if (j2 > j1 && abs(j1 - j2) == 1)
				{
					return 1;
				}
				else
					return 0;
			}
		}
		else
			return 0;
	}
	else
		return 0;
}
int PAWN(char board[8][8], int i1, int j1, int i2, int j2)
{
	if (i1 == i2 && j1 == j2)
		return 0;
	if (j1 != j2 && i1 == i2)
		return 0;
	if (i1 <= i2)
		return 0;
	if (board[i2][j2] > 97 && board[i2][j2] < 123 && board[i2][j2] != 107)
	{
		if (j1 != j2)
		{
			if (abs(j1 - j2) == 1)
			{
				if ((i2 < i1) && (abs(i1 - i2) == 1))
					return 1;
				else
					return 0;
			}
			else
				return 0;
		}
		else
			return 0;
	}
	else if (i1 == 6)
	{
		if (((abs(i1 - i2) == 2) && (j1 - j2 == 0)) || ((abs(i1 - i2) == 1) && (j1 - j2 == 0)))
			return 1;
		else
			return 0;
	}
	else if (j1 == j2 && abs(i1 - i2) == 1)
		return 1;
	//En Passant
	else if (board[i2 + 1][j2] == 'p' && board[i2][j2] == '_')
	{
		if (j1 != j2)
		{
			if (abs(j1 - j2) == 1)
			{
				if ((i2 < i1) && (abs(i1 - i2) == 1))
				{
					board[i2 + 1][j2] = '_';
					return 1;
				}
				else
					return 0;
			}
			else
				return 0;
		}
		else
			return 0;
	}
	else
		return 0;
}
int pawn(char board[8][8], int i1, int j1, int i2, int j2)
{
	if (i1 == i2 && j1 == j2)
		return 0;
	if (j1 != j2 && i1 == i2)
		return 0;
	if (i1 >= i2)
		return 0;
	if (board[i2][j2] > 64 && board[i2][j2] < 91 && board[i2][j2] != 75)
	{
		if (j1 != j2)
		{
			if (abs(j1 - j2) == 1)
			{
				if ((i2 > i1) && (abs(i1 - i2) == 1))
					return 1;
				else
					return 0;
			}
			else
				return 0;
		}
		else
			return 0;
	}
	else if (i1 == 1)
	{
		if (((abs(i1 - i2) == 2) && (j1 - j2 == 0)) || ((abs(i1 - i2) == 1) && (j1 - j2 == 0)))
			return 1;
		else
			return 0;
	}
	else if (j1 == j2 && abs(i1 - i2) == 1)
		return 1;
	//En Passant
	else if (board[i2 - 1][j2] == 'P' && board[i2][j2] == '_')
	{
		if (j1 != j2)
		{
			if (abs(j1 - j2) == 1)
			{
				if ((i2 > i1) && (abs(i1 - i2) == 1))
				{
					board[i2 - 1][j2] = '_';
					return 1;
				}
				else
					return 0;
			}
			else
				return 0;
		}
		else
			return 0;
	}
	else
		return 0;
}
int PAWNCheck(char board[8][8], int i1, int j1, int i2, int j2)
{
	if (board[i2][j2] > 97 && board[i2][j2] < 123)
	{
		if (j1 != j2)
		{
			if (abs(j1 - j2) == 1)
			{
				if ((i2 < i1) && (abs(i1 - i2) == 1))
					return 1;
				else
					return 0;
			}
			else
				return 0;
		}
		else
			return 0;
	}
	else
		return 0;
}
int KINGCheck(char board[8][8], int i1, int j1, int i2, int j2)
{
	if (!(board[i2][j2] > 64 && board[i2][j2] < 91))
	{
		if (abs(i1 - i2) == abs(j1 - j2))
		{
			if (i2 > i1 && j2 > j1)
			{
				if (abs(i1 - i2) == 1 && abs(j1 - j2) == 1)
				{
					return 1;
				}
				else
					return 0;
			}
			if (i2<i1 && j2>j1)
			{
				if (abs(i1 - i2) == 1 && abs(j1 - j2) == 1)
				{
					return 1;
				}
				else
					return 0;
			}
			if (i2 < i1 && j2 < j1)
			{
				if (abs(i1 - i2) == 1 && abs(j1 - j2) == 1)
				{
					return 1;
				}
				else
					return 0;
			}
			if (i2 > i1 && j2 < j1)
			{
				if (abs(i1 - i2) == 1 && abs(j1 - j2) == 1)
				{
					return 1;
				}
				else
					return 0;
			}
		}
		if (i1 == i2 || j1 == j2)
		{
			if (j1 == j2 && i1 != i2)
			{
				if (i1 > i2 && abs(i1 - i2) == 1)
				{
					return 1;
				}
				if (i2 > i1 && abs(i1 - i2) == 1)
				{
					return 1;
				}
				else
					return 0;
			}
			if (i1 == i2 && j1 != j2)
			{
				if (j1 > j2 && abs(j1 - j2) == 1)
				{
					return 1;
				}
				if (j2 > j1 && abs(j1 - j2) == 1)
				{
					return 1;
				}
				else
					return 0;
			}
		}
		else
			return 0;
	}
	else
		return 0;
}
int ROOKCheck(char board[8][8], int i1, int j1, int i2, int j2)
{
	int count = 0;
	int k;
	if (i1 == i2 || j1 == j2)
	{
		if (!(board[i2][j2] > 64 && board[i2][j2] < 91))
		{
			if (j1 == j2 && i1 != i2)
			{
				if (i1 > i2)
				{
					k = i2 + 1;
					for (; k < i1; k++)
					{
						if (board[k][j1] == '_')
							count++;
					}
					if (count == abs(i1 - i2) - 1)
						return 1;
					else
						return 0;
				}
				if (i2 > i1)
				{
					k = i1 + 1;
					for (; k < i2; k++)
					{
						if (board[k][j1] == '_')
							count++;
					}
					if (count == abs(i2 - i1) - 1)
						return 1;
					else
						return 0;
				}
			}
			if (i1 == i2 && j1 != j2)
			{
				if (j1 > j2)
				{
					k = j2 + 1;
					for (; k < j1; k++)
					{
						if (board[i1][k] == '_')
							count++;
					}
					if (count == abs(j1 - j2) - 1)
						return 1;
					else
						return 0;
				}
				if (j2 > j1)
				{
					k = j1 + 1;
					for (; k < j2; k++)
					{
						if (board[i1][k] == '_')
							count++;
					}
					if (count == abs(j2 - j1) - 1)
						return 1;
					else
						return 0;
				}
			}
		}
		else
			return 0;
	}
	else
		return 0;
}
int QUEENCheck(char board[8][8], int i1, int j1, int i2, int j2)
{
	int count = 0;
	int m;
	int k;
	if (abs(i1 - i2) == abs(j1 - j2))
	{
		if (!(board[i2][j2] > 64 && board[i2][j2] < 91))
		{
			if (i2 > i1 && j2 > j1)
			{
				for (m = 1; m < abs(j1 - j2); m++)
					if (board[i1 + m][j1 + m] == '_')
						count++;
				if (count == abs(j1 - j2) - 1)
					return 1;
				else
					return 0;
			}
			if (i2<i1 && j2>j1)
			{
				for (m = 1; m < abs(j1 - j2); m++)
					if (board[i1 - m][j1 + m] == '_')
						count++;
				if (count == abs(j1 - j2) - 1)
					return 1;
				else
					return 0;
			}
			if (i2 < i1 && j2 < j1)
			{
				for (m = 1; m < abs(j1 - j2); m++)
					if (board[i1 - m][j1 - m] == '_')
						count++;
				if (count == abs(j1 - j2) - 1)
					return 1;
				else
					return 0;
			}
			if (i2 > i1 && j2 < j1)
			{
				for (m = 1; m < abs(j1 - j2); m++)
					if (board[i1 + m][j1 - m] == '_')
						count++;
				if (count == abs(j1 - j2) - 1)
					return 1;
				else
					return 0;
			}
		}
		else
			return 0;
	}
	if (i1 == i2 || j1 == j2)
	{
		if (!(board[i2][j2] > 64 && board[i2][j2] < 91))
		{
			if (j1 == j2 && i1 != i2)
			{
				if (i1 > i2)
				{
					k = i2 + 1;
					for (; k < i1; k++)
					{
						if (board[k][j1] == '_')
							count++;
					}
					if (count == abs(i1 - i2) - 1)
						return 1;
					else
						return 0;
				}
				if (i2 > i1)
				{
					k = i1 + 1;
					for (; k < i2; k++)
					{
						if (board[k][j1] == '_')
							count++;
					}
					if (count == abs(i2 - i1) - 1)
						return 1;
					else
						return 0;
				}
			}
			if (i1 == i2 && j1 != j2)
			{
				if (j1 > j2)
				{
					k = j2 + 1;
					for (; k < j1; k++)
					{
						if (board[i1][k] == '_')
							count++;
					}
					if (count == abs(j1 - j2) - 1)
						return 1;
					else
						return 0;
				}
				if (j2 > j1)
				{
					k = j1 + 1;
					for (; k < j2; k++)
					{
						if (board[i1][k] == '_')
							count++;
					}
					if (count == abs(j2 - j1) - 1)
						return 1;
					else
						return 0;
				}
			}
		}
		else
			return 0;
	}
	else
		return 0;
}
int KNIGHTCheck(char board[8][8], int i1, int j1, int i2, int j2)
{
	if (!(board[i2][j2] > 64 && board[i2][j2] < 91))
	{
		if (abs(i1 - i2) + abs(j1 - j2) == 3 && abs(i1 - i2) != 0 && abs(j1 - j2) != 0)
			return 1;
		else
			return 0;
	}
	else
		return 0;
}
int BISHOPCheck(char board[8][8], int i1, int j1, int i2, int j2)
{
	int count = 0;
	int m;
	if (abs(i1 - i2) == abs(j1 - j2))
	{
		if (!(board[i2][j2] > 64 && board[i2][j2] < 91))
		{
			if (i2 > i1 && j2 > j1)
			{
				for (m = 1; m < abs(j1 - j2); m++)
					if (board[i1 + m][j1 + m] == '_')
						count++;
				if (count == abs(j1 - j2) - 1)
					return 1;
				else
					return 0;
			}
			if (i2<i1 && j2>j1)
			{
				for (m = 1; m < abs(j1 - j2); m++)
					if (board[i1 - m][j1 + m] == '_')
						count++;
				if (count == abs(j1 - j2) - 1)
					return 1;
				else
					return 0;
			}
			if (i2 < i1 && j2 < j1)
			{
				for (m = 1; m < abs(j1 - j2); m++)
					if (board[i1 - m][j1 - m] == '_')
						count++;
				if (count == abs(j1 - j2) - 1)
					return 1;
				else
					return 0;
			}
			if (i2 > i1 && j2 < j1)
			{
				for (m = 1; m < abs(j1 - j2); m++)
					if (board[i1 + m][j1 - m] == '_')
						count++;
				if (count == abs(j1 - j2) - 1)
					return 1;
				else
					return 0;
			}
		}
		else
			return 0;
	}
	else
		return 0;
}
bool KingInCheck(char board[8][8])
{
	//Position of King
	int i, j;
	int ki, kj;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (board[i][j] == 'k')
			{
				ki = i;
				kj = j;
			}
		}
	}
	//Check
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (board[i][j] > 64 && board[i][j] < 91)
			{
				if (board[i][j] == 'P')
					if (PAWNCheck(board, i, j, ki, kj))
						return true;
				if (board[i][j] == 'K')
					if (KINGCheck(board, i, j, ki, kj))
						return true;
				if (board[i][j] == 'R')
					if (ROOKCheck(board, i, j, ki, kj))
						return true;
				if (board[i][j] == 'Q')
					if (QUEENCheck(board, i, j, ki, kj))
						return true;
				if (board[i][j] == 'N')
					if (KNIGHTCheck(board, i, j, ki, kj))
						return true;
				if (board[i][j] == 'B')
					if (BISHOPCheck(board, i, j, ki, kj))
						return true;
			}
		}
	}
	return false;
}
bool PossibleMove(char board[8][8])
{
	//Position of King
	int i, j;
	int ki, kj;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (board[i][j] == 'k')
			{
				ki = i;
				kj = j;
			}
		}
	}

	int x = 0;
	int moves[16] = { 1,-1,1,0,1,1,0,1,-1,1,-1,0,-1,-1,0,-1 };
	for (int k = 0; k < 16; k++)
	{
		int TestRow = ki + moves[k];
		int TestColumn = kj + moves[k + 1];
		if (TestRow >= 0 && TestRow <= 7 && TestColumn >= 0 && TestColumn <= 7)
		{
			if (!(board[TestRow][TestColumn] > 97 && board[TestRow][TestColumn] < 123) && board[TestRow][TestColumn] != 75)
			{
				if (abs(ki - TestRow) == 1 || abs(kj - TestColumn) == 1)
				{
					x = 0;
					for (i = 0; i < 8; i++)
					{
						for (j = 0; j < 8; j++)
						{
							if (board[i][j] > 64 && board[i][j] < 91)
							{
								if (board[i][j] == 'P')
									if (PAWNCheck(board, i, j, TestRow, TestColumn))
									{
										x = 1;
										break;
									}
									else
										x = 0;
								if (board[i][j] == 'K')
									if (KINGCheck(board, i, j, TestRow, TestColumn))
									{
										x = 1;
										break;
									}
									else
										x = 0;
								if (board[i][j] == 'R')
									if (ROOKCheck(board, i, j, TestRow, TestColumn))
									{
										x = 1;
										break;
									}
									else
										x = 0;
								if (board[i][j] == 'Q')
									if (QUEENCheck(board, i, j, TestRow, TestColumn))
									{
										x = 1;
										break;
									}
									else
										x = 0;
								if (board[i][j] == 'N')
									if (KNIGHTCheck(board, i, j, TestRow, TestColumn))
									{
										x = 1;
										break;
									}
									else
										x = 0;
								if (board[i][j] == 'B')
									if (BISHOPCheck(board, i, j, TestRow, TestColumn))
									{
										x = 1;
										break;
									}
									else
										x = 0;
							}
						}
						if (x == 1)
							break;
					}
					if (x == 0)
						return true;
				}
			}
		}
		k++;
	}
	if (x == 1)
		return false;
}
bool CheckMate(char board[8][8])
{
	if (KingInCheck(board) == false)
	{
		return false;
	}
	if (KingInCheck(board) == true)
	{
		if (PossibleMove(board) == true)
		{
			return false;
		}
		if (PossibleMove(board) == false)
		{
			return true;
		}
	}
}
bool StaleMate(char board[8][8])
{
	//Position of King
	int i, j;
	int ki, kj;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (board[i][j] == 'k')
			{
				ki = i;
				kj = j;
			}
		}
	}

	int x = 0;
	int moves[16] = { 1,-1,1,0,1,1,0,1,-1,1,-1,0,-1,-1,0,-1 };
	for (int k = 0; k < 16; k++)
	{
		int TestRow = ki + moves[k];
		int TestColumn = kj + moves[k + 1];
		if (TestRow >= 0 && TestRow <= 7 && TestColumn >= 0 && TestColumn <= 7)
		{
			if (!(board[TestRow][TestColumn] > 97 && board[TestRow][TestColumn] < 123) && board[TestRow][TestColumn] != 75)
			{
				if (abs(ki - TestRow) == 1 || abs(kj - TestColumn) == 1)
				{
					x = 0;
					for (i = 0; i < 8; i++)
					{
						for (j = 0; j < 8; j++)
						{
							if (board[i][j] > 64 && board[i][j] < 91)
							{
								if (board[i][j] == 'P')
									if (PAWNCheck(board, i, j, TestRow, TestColumn))
									{
										x = 1;
										break;
									}
									else
										x = 0;
								if (board[i][j] == 'K')
									if (KINGCheck(board, i, j, TestRow, TestColumn))
									{
										x = 1;
										break;
									}
									else
										x = 0;
								if (board[i][j] == 'R')
									if (ROOKCheck(board, i, j, TestRow, TestColumn))
									{
										x = 1;
										break;
									}
									else
										x = 0;
								if (board[i][j] == 'Q')
									if (QUEENCheck(board, i, j, TestRow, TestColumn))
									{
										x = 1;
										break;
									}
									else
										x = 0;
								if (board[i][j] == 'N')
									if (KNIGHTCheck(board, i, j, TestRow, TestColumn))
									{
										x = 1;
										break;
									}
									else
										x = 0;
								if (board[i][j] == 'B')
									if (BISHOPCheck(board, i, j, TestRow, TestColumn))
									{
										x = 1;
										break;
									}
									else
										x = 0;
							}
						}
						if (x == 1)
							break;
					}
					if (x == 0)
						return false;
				}
			}
		}
		k++;
	}
	if (x == 1)
		return true;
}
int pawnCheck(char board[8][8], int i1, int j1, int i2, int j2)
{
	if (board[i2][j2] > 64 && board[i2][j2] < 91)
	{
		if (j1 != j2)
		{
			if (abs(j1 - j2) == 1)
			{
				if ((i2 > i1) && (abs(i1 - i2) == 1))
					return 1;
				else
					return 0;
			}
			else
				return 0;
		}
		else
			return 0;
	}
	else
		return 0;
}
int kingCheck(char board[8][8], int i1, int j1, int i2, int j2)
{
	if (!(board[i2][j2] > 97 && board[i2][j2] < 123))
	{
		if (abs(i1 - i2) == abs(j1 - j2))
		{
			if (i2 > i1 && j2 > j1)
			{
				if (abs(i1 - i2) == 1 && abs(j1 - j2) == 1)
				{
					return 1;
				}
				else
					return 0;
			}
			if (i2<i1 && j2>j1)
			{
				if (abs(i1 - i2) == 1 && abs(j1 - j2) == 1)
				{
					return 1;
				}
				else
					return 0;
			}
			if (i2 < i1 && j2 < j1)
			{
				if (abs(i1 - i2) == 1 && abs(j1 - j2) == 1)
				{
					return 1;
				}
				else
					return 0;
			}
			if (i2 > i1 && j2 < j1)
			{
				if (abs(i1 - i2) == 1 && abs(j1 - j2) == 1)
				{
					return 1;
				}
				else
					return 0;
			}
		}
		if (i1 == i2 || j1 == j2)
		{
			if (j1 == j2 && i1 != i2)
			{
				if (i1 > i2 && abs(i1 - i2) == 1)
				{
					return 1;
				}
				if (i2 > i1 && abs(i1 - i2) == 1)
				{
					return 1;
				}
				else
					return 0;
			}
			if (i1 == i2 && j1 != j2)
			{
				if (j1 > j2 && abs(j1 - j2) == 1)
				{
					return 1;
				}
				if (j2 > j1 && abs(j1 - j2) == 1)
				{
					return 1;
				}
				else
					return 0;
			}
		}
		else
			return 0;
	}
	else
		return 0;
}
int rookCheck(char board[8][8], int i1, int j1, int i2, int j2)
{
	int count = 0;
	int k;
	if (i1 == i2 || j1 == j2)
	{
		if (!(board[i2][j2] > 97 && board[i2][j2] < 123))
		{
			if (j1 == j2 && i1 != i2)
			{
				if (i1 > i2)
				{
					k = i2 + 1;
					for (; k < i1; k++)
					{
						if (board[k][j1] == '_')
							count++;
					}
					if (count == abs(i1 - i2) - 1)
						return 1;
					else
						return 0;
				}
				if (i2 > i1)
				{
					k = i1 + 1;
					for (; k < i2; k++)
					{
						if (board[k][j1] == '_')
							count++;
					}
					if (count == abs(i2 - i1) - 1)
						return 1;
					else
						return 0;
				}
			}
			if (i1 == i2 && j1 != j2)
			{
				if (j1 > j2)
				{
					k = j2 + 1;
					for (; k < j1; k++)
					{
						if (board[i1][k] == '_')
							count++;
					}
					if (count == abs(j1 - j2) - 1)
						return 1;
					else
						return 0;
				}
				if (j2 > j1)
				{
					k = j1 + 1;
					for (; k < j2; k++)
					{
						if (board[i1][k] == '_')
							count++;
					}
					if (count == abs(j2 - j1) - 1)
						return 1;
					else
						return 0;
				}
			}
		}
		else
			return 0;
	}
	else
		return 0;
}
int queenCheck(char board[8][8], int i1, int j1, int i2, int j2)
{
	int count = 0;
	int	m;
	int k;
	if (i1 == i2 && j1 == j2)
		return 0;
	if (abs(i1 - i2) == abs(j1 - j2))
	{
		if (!(board[i2][j2] > 97 && board[i2][j2] < 123))
		{
			if (i2 > i1 && j2 > j1)
			{
				for (m = 1; m < abs(j1 - j2); m++)
					if (board[i1 + m][j1 + m] == '_')
						count++;
				if (count == abs(j1 - j2) - 1)
					return 1;
				else
					return 0;
			}
			if (i2<i1 && j2>j1)
			{
				for (m = 1; m < abs(j1 - j2); m++)
					if (board[i1 - m][j1 + m] == '_')
						count++;
				if (count == abs(j1 - j2) - 1)
					return 1;
				else
					return 0;
			}
			if (i2 < i1 && j2 < j1)
			{
				for (m = 1; m < abs(j1 - j2); m++)
					if (board[i1 - m][j1 - m] == '_')
						count++;
				if (count == abs(j1 - j2) - 1)
					return 1;
				else
					return 0;
			}
			if (i2 > i1 && j2 < j1)
			{
				for (m = 1; m < abs(j1 - j2); m++)
					if (board[i1 + m][j1 - m] == '_')
						count++;
				if (count == abs(j1 - j2) - 1)
					return 1;
				else
					return 0;
			}
		}
		else
			return 0;
	}
	if (i1 == i2 || j1 == j2)
	{
		if (!(board[i2][j2] > 97 && board[i2][j2] < 123))
		{
			if (j1 == j2 && i1 != i2)
			{
				if (i1 > i2)
				{
					k = i2 + 1;
					for (; k < i1; k++)
					{
						if (board[k][j1] == '_')
							count++;
					}
					if (count == abs(i1 - i2) - 1)
						return 1;
					else
						return 0;
				}
				if (i2 > i1)
				{
					k = i1 + 1;
					for (; k < i2; k++)
					{
						if (board[k][j1] == '_')
							count++;
					}
					if (count == abs(i2 - i1) - 1)
						return 1;
					else
						return 0;
				}
			}
			if (i1 == i2 && j1 != j2)
			{
				if (j1 > j2)
				{
					k = j2 + 1;
					for (; k < j1; k++)
					{
						if (board[i1][k] == '_')
							count++;
					}
					if (count == abs(j1 - j2) - 1)
						return 1;
					else
						return 0;
				}
				if (j2 > j1)
				{
					k = j1 + 1;
					for (; k < j2; k++)
					{
						if (board[i1][k] == '_')
							count++;
					}
					if (count == abs(j2 - j1) - 1)
						return 1;
					else
						return 0;
				}
			}
		}
		else
			return 0;
	}
	else
		return 0;
}
int knightCheck(char board[8][8], int i1, int j1, int i2, int j2)
{
	if (!(board[i2][j2] > 97 && board[i2][j2] < 123))
	{
		if (abs(i1 - i2) + abs(j1 - j2) == 3 && abs(i1 - i2) != 0 && abs(j1 - j2) != 0)
			return 1;
		else
			return 0;
	}
	else
		return 0;
}
int bishopCheck(char board[8][8], int i1, int j1, int i2, int j2)
{
	int count = 0;
	int m;
	if (abs(i1 - i2) == abs(j1 - j2))
	{
		if (!(board[i2][j2] > 97 && board[i2][j2] < 123))
		{
			if (i2 > i1 && j2 > j1)
			{
				for (m = 1; m < abs(j1 - j2); m++)
					if (board[i1 + m][j1 + m] == '_')
						count++;
				if (count == abs(j1 - j2) - 1)
					return 1;
				else
					return 0;
			}
			if (i2<i1 && j2>j1)
			{
				for (m = 1; m < abs(j1 - j2); m++)
					if (board[i1 - m][j1 + m] == '_')
						count++;
				if (count == abs(j1 - j2) - 1)
					return 1;
				else
					return 0;
			}
			if (i2 < i1 && j2 < j1)
			{
				for (m = 1; m < abs(j1 - j2); m++)
					if (board[i1 - m][j1 - m] == '_')
						count++;
				if (count == abs(j1 - j2) - 1)
					return 1;
				else
					return 0;
			}
			if (i2 > i1 && j2 < j1)
			{
				for (m = 1; m < abs(j1 - j2); m++)
					if (board[i1 + m][j1 - m] == '_')
						count++;
				if (count == abs(j1 - j2) - 1)
					return 1;
				else
					return 0;
			}
		}
		else
			return 0;
	}
	else
		return 0;
}
bool kinginCheck(char board[8][8])
{
	//Position of King
	int i, j;
	int ki, kj;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (board[i][j] == 'K')
			{
				ki = i;
				kj = j;
			}
		}
	}
	//Check
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (board[i][j] > 97 && board[i][j] < 123)
			{
				if (board[i][j] == 'p')
					if (pawnCheck(board, i, j, ki, kj))
						return true;
				if (board[i][j] == 'k')
					if (kingCheck(board, i, j, ki, kj))
						return true;
				if (board[i][j] == 'r')
					if (rookCheck(board, i, j, ki, kj))
						return true;
				if (board[i][j] == 'q')
					if (queenCheck(board, i, j, ki, kj))
						return true;
				if (board[i][j] == 'n')
					if (knightCheck(board, i, j, ki, kj))
						return true;
				if (board[i][j] == 'b')
					if (bishopCheck(board, i, j, ki, kj))
						return true;
			}
		}
	}
	return false;
}
bool possiblemove(char board[8][8])
{
	//Position of King
	int i, j;
	int ki, kj;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (board[i][j] == 'K')
			{
				ki = i;
				kj = j;
			}
		}
	}

	int x = 0;
	int moves[16] = { 1,-1,1,0,1,1,0,1,-1,1,-1,0,-1,-1,0,-1 };
	for (int k = 0; k < 16; k++)
	{
		int TestRow = ki + moves[k];
		int TestColumn = kj + moves[k + 1];
		if (TestRow >= 0 && TestRow <= 7 && TestColumn >= 0 && TestColumn <= 7)
		{
			if (!(board[TestRow][TestColumn] > 64 && board[TestRow][TestColumn] < 91) && board[TestRow][TestColumn] != 107)
			{
				if (abs(ki - TestRow) == 1 || abs(kj - TestColumn) == 1)
				{
					x = 0;
					for (i = 0; i < 8; i++)
					{
						for (j = 0; j < 8; j++)
						{
							if (board[i][j] > 97 && board[i][j] < 123)
							{
								if (board[i][j] == 'p')
									if (pawnCheck(board, i, j, TestRow, TestColumn))
									{
										x = 1;
										break;
									}
									else
										x = 0;
								if (board[i][j] == 'k')
									if (kingCheck(board, i, j, TestRow, TestColumn))
									{
										x = 1;
										break;
									}
									else
										x = 0;
								if (board[i][j] == 'r')
									if (rookCheck(board, i, j, TestRow, TestColumn))
									{
										x = 1;
										break;
									}
									else
										x = 0;
								if (board[i][j] == 'q')
									if (queenCheck(board, i, j, TestRow, TestColumn))
									{
										x = 1;
										break;
									}
									else
										x = 0;
								if (board[i][j] == 'n')
									if (knightCheck(board, i, j, TestRow, TestColumn))
									{
										x = 1;
										break;
									}
									else
										x = 0;
								if (board[i][j] == 'b')
									if (bishopCheck(board, i, j, TestRow, TestColumn))
									{
										x = 1;
										break;
									}
									else
										x = 0;
							}
						}
						if (x == 1)
							break;
					}
					if (x == 0)
						return true;
				}
			}
		}
		k++;
	}
	if (x == 1)
		return false;
}
bool checkmate(char board[8][8])
{
	if (kinginCheck(board) == false)
	{
		return false;
	}
	if (kinginCheck(board) == true)
	{
		if (possiblemove(board) == true)
		{
			return false;
		}
		if (possiblemove(board) == false)
		{
			return true;
		}
	}
}
bool stalemate(char board[8][8])
{
	//Position of King
	int i, j;
	int ki, kj;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (board[i][j] == 'K')
			{
				ki = i;
				kj = j;
			}
		}
	}

	int x = 0;
	int moves[16] = { 1,-1,1,0,1,1,0,1,-1,1,-1,0,-1,-1,0,-1 };
	for (int k = 0; k < 16; k++)
	{
		int TestRow = ki + moves[k];
		int TestColumn = kj + moves[k + 1];
		if (TestRow >= 0 && TestRow <= 7 && TestColumn >= 0 && TestColumn <= 7)
		{
			if (!(board[TestRow][TestColumn] > 64 && board[TestRow][TestColumn] < 91) && board[TestRow][TestColumn] != 107)
			{
				if (abs(ki - TestRow) == 1 || abs(kj - TestColumn) == 1)
				{
					x = 0;
					for (i = 0; i < 8; i++)
					{
						for (j = 0; j < 8; j++)
						{
							if (board[i][j] > 97 && board[i][j] < 123)
							{
								if (board[i][j] == 'p')
									if (pawnCheck(board, i, j, TestRow, TestColumn))
									{
										x = 1;
										break;
									}
									else
										x = 0;
								if (board[i][j] == 'k')
									if (kingCheck(board, i, j, TestRow, TestColumn))
									{
										x = 1;
										break;
									}
									else
										x = 0;
								if (board[i][j] == 'r')
									if (rookCheck(board, i, j, TestRow, TestColumn))
									{
										x = 1;
										break;
									}
									else
										x = 0;
								if (board[i][j] == 'q')
									if (queenCheck(board, i, j, TestRow, TestColumn))
									{
										x = 1;
										break;
									}
									else
										x = 0;
								if (board[i][j] == 'n')
									if (knightCheck(board, i, j, TestRow, TestColumn))
									{
										x = 1;
										break;
									}
									else
										x = 0;
								if (board[i][j] == 'b')
									if (bishopCheck(board, i, j, TestRow, TestColumn))
									{
										x = 1;
										break;
									}
									else
										x = 0;
							}
						}
						if (x == 1)
							break;
					}
					if (x == 0)
						return false;
				}
			}
		}
		k++;
	}
	if (x == 1)
		return true;
}
bool WhiteHandshake(int Whiteseconds, int Blackseconds, char mode)
{
	char Handshake;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 13);
	cout << endl;
	cout << "Player Small/Black Turn: " << endl;
	SetConsoleTextAttribute(h, 2);
	cout << "Press y: For Handshake." << endl;
	cin >> Handshake;
	SetConsoleTextAttribute(h, 7);
	if (Handshake == 'y')
	{
		SetConsoleTextAttribute(h, 2);
		cout << "The Game is Draw!" << endl;
		SetConsoleTextAttribute(h, 7);
		if (mode == 'c')
		{
			if (Whiteseconds > Blackseconds)
			{
				cout << "White player took more time (" << Whiteseconds << " seconds) than Black player (" << Blackseconds << " seconds) overall." << endl;
			}
			if (Whiteseconds < Blackseconds)
			{
				cout << "White player took less time (" << Whiteseconds << " seconds) than Black player (" << Blackseconds << " seconds) overall." << endl;
			}
		}
		return true;
	}
	else
		return false;
}
bool BlackHandshake(int Whiteseconds, int Blackseconds, char mode)
{
	char Handshake;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 1);
	cout << endl;
	cout << "Player Big/White Turn: " << endl;
	SetConsoleTextAttribute(h, 2);
	cout << "Press y: For Handshake." << endl;
	cin >> Handshake;
	SetConsoleTextAttribute(h, 7);
	if (Handshake == 'y')
	{
		SetConsoleTextAttribute(h, 2);
		cout << "The Game is Draw!" << endl;
		SetConsoleTextAttribute(h, 7);
		if (mode == 'c')
		{
			if (Whiteseconds > Blackseconds)
			{
				cout << "Black player took less time (" << Blackseconds << " seconds) than White player (" << Whiteseconds << " seconds) overall." << endl;
			}
			if (Whiteseconds < Blackseconds)
			{
				cout << "Black player took more time (" << Blackseconds << " seconds) than White player (" << Whiteseconds << " seconds) overall." << endl;
			}
		}
		return true;
	}
	else
		return false;
}
void printBoard(char board[8][8])
{
	system("CLS");

	int i, j;
	int k = 8;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 1);
	cout << "For White Player: R = Rook, N = Knight, B = Bishop, Q = Queen, K = King, P = Pawn." << endl;
	SetConsoleTextAttribute(h, 13);
	cout << "For Black Player: r = Rook, n = Knight, b = Bishop, q = Queen, k = King, p = Pawn." << endl;
	cout << endl;
	SetConsoleTextAttribute(h, 6);
	cout << "Press p: To Pause and Save the Game." << endl;
	SetConsoleTextAttribute(h, 2);
	cout << "Press s: For Handshake." << endl;
	SetConsoleTextAttribute(h, 4);
	cout << "Press r: To Resign." << endl;
	cout << endl;
	SetConsoleTextAttribute(h, 8);
	cout << "   " << "a " << "b " << "c " << "d " << "e " << "f " << "g " << "h" << endl;
	cout << "   " << "_______________" << endl;
	for (i = 0; i < 8; i++)
	{
		cout << k << "  ";
		for (j = 0; j < 8; j++)
		{
			SetConsoleTextAttribute(h, 7);
			cout << board[i][j] << " ";
		}
		SetConsoleTextAttribute(h, 8);
		cout << " " << k << endl;
		k--;
	}
	SetConsoleTextAttribute(h, 8);
	cout << "   " << "_______________" << endl;
	cout << "   " << "a " << "b " << "c " << "d " << "e " << "f " << "g " << "h" << endl;
	cout << endl;
	SetConsoleTextAttribute(h, 7);
}
int chessmain()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	//Variables
	int i, j, i1, i2, j1, j2, count = 0, x = 0, temp2, Whiteseconds = 0, Blackseconds = 0, y = 0;
	char b, temp1, mode, resume, PlayerTurn;
	char board[8][8];
	bool yes;
	time_t black_start, black_end;
	time_t white_start, white_end;

	cout << "                    ________________________" << endl;
	cout << "                          Chess  Game" << endl;
	cout << "                    ________________________" << endl;
	cout << endl;
	do {
		cout << "Enter Game Type: " << endl;
		cout << endl;
		SetConsoleTextAttribute(h, 1);
		cout << "Press c: For Classical Mode." << endl;
		SetConsoleTextAttribute(h, 2);
		cout << "Press r: For Rapid Mode." << endl;
		SetConsoleTextAttribute(h, 4);
		cout << "Press b: For Blitz Mode." << endl;
		SetConsoleTextAttribute(h, 7);
		cin >> mode;
		if (mode == 'c' || mode == 'r' || mode == 'b')
			y = 1;
	} while (y != 1);

	system("CLS");

	do {
		cout << "Do you want to Resume the last Game: " << endl;
		cout << endl;
		SetConsoleTextAttribute(h, 2);
		cout << "Press y: For Yes." << endl;
		SetConsoleTextAttribute(h, 4);
		cout << "Press n: For No." << endl;
		SetConsoleTextAttribute(h, 7);
		cin >> resume;
		if (resume == 'y' || resume == 'n')
			y = 2;
	} while (y != 2);

	if (resume == 'y' && mode == 'c')
	{
		ifstream classicalmoves;
		classicalmoves.open("LoadClassicalGame.txt");
		for (i = 0; i < 8; i++)
		{
			for (j = 0; j < 8; j++)
			{
				classicalmoves >> board[i][j];
			}
		}

		ifstream Turnclassical;
		Turnclassical.open("ClassicalTurn.txt");
		Turnclassical >> PlayerTurn;

		ifstream ClassicalwhiteTime;
		ClassicalwhiteTime.open("ClassicalWhiteTime.txt");
		ClassicalwhiteTime >> Whiteseconds;
		ifstream ClassicalblackTime;
		ClassicalblackTime.open("ClassicalBlackTime.txt");
		ClassicalblackTime >> Blackseconds;
	}
	if (resume == 'y' && mode == 'r')
	{
		ifstream rapidmoves;
		rapidmoves.open("LoadRapidGame.txt");
		for (i = 0; i < 8; i++)
		{
			for (j = 0; j < 8; j++)
			{
				rapidmoves >> board[i][j];
			}
		}

		ifstream Turnrapid;
		Turnrapid.open("RapidTurn.txt");
		Turnrapid >> PlayerTurn;

		ifstream RapidwhiteTime;
		RapidwhiteTime.open("RapidWhiteTime.txt");
		RapidwhiteTime >> Whiteseconds;
		ifstream RapidblackTime;
		RapidblackTime.open("RapidBlackTime.txt");
		RapidblackTime >> Blackseconds;
	}
	if (resume == 'y' && mode == 'b')
	{
		ifstream blitzmoves;
		blitzmoves.open("LoadBlitzGame.txt");
		for (i = 0; i < 8; i++)
		{
			for (j = 0; j < 8; j++)
			{
				blitzmoves >> board[i][j];
			}
		}

		ifstream Turnblitz;
		Turnblitz.open("BlitzTurn.txt");
		Turnblitz >> PlayerTurn;

		ifstream BlitzwhiteTime;
		BlitzwhiteTime.open("BlitzWhiteTime.txt");
		BlitzwhiteTime >> Whiteseconds;
		ifstream BlitzblackTime;
		BlitzblackTime.open("BlitzBlackTime.txt");
		BlitzblackTime >> Blackseconds;
	}
	if (resume == 'n')
	{
		//Spaces
		for (i = 0; i < 8; i++)
		{
			for (j = 0; j < 8; j++)
			{
				board[i][j] = '_';
			}
		}
		//Black
		board[0][0] = 'r'; board[0][1] = 'n'; board[0][2] = 'b'; board[0][3] = 'q';
		board[0][4] = 'k'; board[0][5] = 'b'; board[0][6] = 'n'; board[0][7] = 'r';
		board[1][0] = 'p'; board[1][1] = 'p'; board[1][2] = 'p'; board[1][3] = 'p';
		board[1][4] = 'p'; board[1][5] = 'p'; board[1][6] = 'p'; board[1][7] = 'p';
		//White
		board[6][0] = 'P'; board[6][1] = 'P'; board[6][2] = 'P'; board[6][3] = 'P';
		board[6][4] = 'P'; board[6][5] = 'P'; board[6][6] = 'P'; board[6][7] = 'P';
		board[7][0] = 'R'; board[7][1] = 'N'; board[7][2] = 'B'; board[7][3] = 'Q';
		board[7][4] = 'K'; board[7][5] = 'B'; board[7][6] = 'N'; board[7][7] = 'R';
	}

	printBoard(board);

	if (resume == 'y' && PlayerTurn == 'w')
	{
		goto t1;
	}
	if (resume == 'y' && PlayerTurn == 'b')
	{
		goto t2;
	}

	do {
	t1:if (mode == 'c')
		white_start = clock();
	if (mode == 'r')
	{
		SetConsoleTextAttribute(h, 5);
		cout << "Time Left for Player White: " << 600 - Whiteseconds << " seconds" << endl;
		cout << endl;
		white_start = clock();
		SetConsoleTextAttribute(h, 7);
	}
	if (mode == 'b')
	{
		SetConsoleTextAttribute(h, 5);
		cout << "Time Left for Player White: " << 300 - Whiteseconds << " seconds" << endl;
		cout << endl;
		white_start = clock();
		SetConsoleTextAttribute(h, 7);
	}
	SetConsoleTextAttribute(h, 1);
	cout << "Player Big/White Turn: " << endl;
	SetConsoleTextAttribute(h, 7);
	cout << endl;
s1:cout << "Enter the Position of Element you want to move (x,y): ";
	cin >> temp1;
	if (temp1 == 'p' && mode == 'c')
	{
		ofstream classicalMoves;
		classicalMoves.open("LoadClassicalGame.txt");
		for (i = 0; i < 8; i++)
		{
			for (j = 0; j < 8; j++)
			{
				classicalMoves << board[i][j] << endl;
			}
		}
		classicalMoves.close();

		ofstream classicalTurn;
		classicalTurn.open("ClassicalTurn.txt");
		classicalTurn << 'w';
		classicalTurn.close();

		ofstream classicalwhiteTime;
		classicalwhiteTime.open("ClassicalWhiteTime.txt");
		classicalwhiteTime << Whiteseconds;
		classicalwhiteTime.close();
		ofstream classicalblackTime;
		classicalblackTime.open("ClassicalBlackTime.txt");
		classicalblackTime << Blackseconds;
		classicalblackTime.close();

		exit(1);
	}
	if (temp1 == 'p' && mode == 'r')
	{
		ofstream rapidMoves;
		rapidMoves.open("LoadRapidGame.txt");
		for (i = 0; i < 8; i++)
		{
			for (j = 0; j < 8; j++)
			{
				rapidMoves << board[i][j] << endl;
			}
		}
		rapidMoves.close();

		ofstream rapidTurn;
		rapidTurn.open("RapidTurn.txt");
		rapidTurn << 'w';
		rapidTurn.close();

		ofstream rapidwhiteTime;
		rapidwhiteTime.open("RapidWhiteTime.txt");
		rapidwhiteTime << Whiteseconds;
		rapidwhiteTime.close();
		ofstream rapidblackTime;
		rapidblackTime.open("RapidBlackTime.txt");
		rapidblackTime << Blackseconds;
		rapidblackTime.close();


		exit(1);
	}
	if (temp1 == 'p' && mode == 'b')
	{
		ofstream blitzMoves;
		blitzMoves.open("LoadBlitzGame.txt");
		for (i = 0; i < 8; i++)
		{
			for (j = 0; j < 8; j++)
			{
				blitzMoves << board[i][j] << endl;
			}
		}
		blitzMoves.close();

		ofstream blitzTurn;
		blitzTurn.open("BlitzTurn.txt");
		blitzTurn << 'w';
		blitzTurn.close();

		ofstream blitzwhiteTime;
		blitzwhiteTime.open("BlitzWhiteTime.txt");
		blitzwhiteTime << Whiteseconds;
		blitzwhiteTime.close();
		ofstream blitzblackTime;
		blitzblackTime.open("BlitzBlackTime.txt");
		blitzblackTime << Blackseconds;
		blitzblackTime.close();

		exit(1);
	}
	if (temp1 == 's')
	{
		yes = WhiteHandshake(Whiteseconds, Blackseconds, mode);
		if (yes == true)
		{
			exit(1);
		}
		if (yes == false)
		{
			SetConsoleTextAttribute(h, 4);
			cout << "Handshake Rejected." << endl;
			cout << endl;
			SetConsoleTextAttribute(h, 1);
			cout << "Player Big/White Turn: " << endl;
			SetConsoleTextAttribute(h, 7);
			cout << endl;
			goto s1;
		}
	}
	if (temp1 == 'r')
	{
		SetConsoleTextAttribute(h, 4);
		cout << "The Game is over, Player Small/Black Won!" << endl;
		SetConsoleTextAttribute(h, 7);
		exit(1);
	}
	cin >> temp2;
	if (!(temp1 > 96 && temp1 < 105))
	{
		SetConsoleTextAttribute(h, 4);
		cout << "INVALID POSITION, Try again." << endl;
		SetConsoleTextAttribute(h, 7);
		goto s1;
	}
	if (!(temp2 > 0 && temp2 < 9))
	{
		SetConsoleTextAttribute(h, 4);
		cout << "INVALID POSITION, Try again." << endl;
		SetConsoleTextAttribute(h, 7);
		goto s1;
	}
	if (temp1 == 'a')
		j1 = 0;
	else if (temp1 == 'b')
		j1 = 1;
	else if (temp1 == 'c')
		j1 = 2;
	else if (temp1 == 'd')
		j1 = 3;
	else if (temp1 == 'e')
		j1 = 4;
	else if (temp1 == 'f')
		j1 = 5;
	else if (temp1 == 'g')
		j1 = 6;
	else if (temp1 == 'h')
		j1 = 7;
	if (temp2 == 8)
		i1 = 0;
	else if (temp2 == 7)
		i1 = 1;
	else if (temp2 == 6)
		i1 = 2;
	else if (temp2 == 5)
		i1 = 3;
	else if (temp2 == 4)
		i1 = 4;
	else if (temp2 == 3)
		i1 = 5;
	else if (temp2 == 2)
		i1 = 6;
	else if (temp2 == 1)
		i1 = 7;
	b = board[i1][j1];
	if (!(b > 64 && b < 91) || i1 > 7 || j1 > 7 || i1 < 0 || j1 < 0)
	{
		SetConsoleTextAttribute(h, 4);
		cout << "INVALID POSITION, Try again." << endl;
		SetConsoleTextAttribute(h, 7);
		goto s1;
	}
	else
	{
		cout << "Enter the Position you want to move (x,y): ";
		cin >> temp1 >> temp2;
		if (!(temp1 > 96 && temp1 < 105))
		{
			SetConsoleTextAttribute(h, 4);
			cout << "INVALID POSITION, Try again." << endl;
			SetConsoleTextAttribute(h, 7);
			goto s1;
		}
		if (!(temp2 > 0 && temp2 < 9))
		{
			SetConsoleTextAttribute(h, 4);
			cout << "INVALID POSITION, Try again." << endl;
			SetConsoleTextAttribute(h, 7);
			goto s1;
		}
		if (temp1 == 'a')
			j2 = 0;
		else if (temp1 == 'b')
			j2 = 1;
		else if (temp1 == 'c')
			j2 = 2;
		else if (temp1 == 'd')
			j2 = 3;
		else if (temp1 == 'e')
			j2 = 4;
		else if (temp1 == 'f')
			j2 = 5;
		else if (temp1 == 'g')
			j2 = 6;
		else if (temp1 == 'h')
			j2 = 7;
		if (temp2 == 8)
			i2 = 0;
		else if (temp2 == 7)
			i2 = 1;
		else if (temp2 == 6)
			i2 = 2;
		else if (temp2 == 5)
			i2 = 3;
		else if (temp2 == 4)
			i2 = 4;
		else if (temp2 == 3)
			i2 = 5;
		else if (temp2 == 2)
			i2 = 6;
		else if (temp2 == 1)
			i2 = 7;
		if (i2 > 7 || j2 > 7 || i2 < 0 || j2 < 0)
		{
			SetConsoleTextAttribute(h, 4);
			cout << "INVALID POSITION, Try again." << endl;
			SetConsoleTextAttribute(h, 7);
			goto s1;
		}
		if (b == 'R')
		{
			if (ROOK(board, i1, j1, i2, j2))
			{
				board[i1][j1] = '_';
				board[i2][j2] = 'R';
				printBoard(board);
			}
			else
			{
				SetConsoleTextAttribute(h, 4);
				cout << "INVALID MOVE, try again." << endl;
				SetConsoleTextAttribute(h, 7);
				goto s1;
			}
		}
		if (b == 'N')
		{
			if (KNIGHT(board, i1, j1, i2, j2))
			{
				board[i1][j1] = '_';
				board[i2][j2] = 'N';
				printBoard(board);
			}
			else
			{
				SetConsoleTextAttribute(h, 4);
				cout << "INVALID MOVE, try again." << endl;
				SetConsoleTextAttribute(h, 7);
				goto s1;
			}
		}
		if (b == 'B')
		{
			if (BISHOP(board, i1, j1, i2, j2))
			{
				board[i1][j1] = '_';
				board[i2][j2] = 'B';
				printBoard(board);
			}
			else
			{
				SetConsoleTextAttribute(h, 4);
				cout << "INVALID MOVE, try again." << endl;
				SetConsoleTextAttribute(h, 7);
				goto s1;
			}
		}
		if (b == 'Q')
		{
			if (QUEEN(board, i1, j1, i2, j2))
			{
				board[i1][j1] = '_';
				board[i2][j2] = 'Q';
				printBoard(board);
			}
			else
			{
				SetConsoleTextAttribute(h, 4);
				cout << "INVALID MOVE, try again." << endl;
				SetConsoleTextAttribute(h, 7);
				goto s1;
			}
		}
		if (b == 'K')
		{
			if (KING(board, i1, j1, i2, j2, count))
			{
				board[i1][j1] = '_';
				board[i2][j2] = 'K';
				count++;
				printBoard(board);
			}
			else
			{
				SetConsoleTextAttribute(h, 4);
				cout << "INVALID MOVE, try again." << endl;
				SetConsoleTextAttribute(h, 7);
				goto s1;
			}
		}
		if (b == 'P')
		{
			if (PAWN(board, i1, j1, i2, j2))
			{
				board[i1][j1] = '_';
				board[i2][j2] = 'P';
				printBoard(board);
				if (i2 == 0)
				{
					char x;
					SetConsoleTextAttribute(h, 2);
					cout << "Promotion of Pawn!" << endl;
					cout << "Enter r to convert Pawn into Rook." << endl;
					cout << "Enter n to convert Pawn into Knight." << endl;
					cout << "Enter b to convert Pawn into Bishop." << endl;
					cout << "Enter q to convert Pawn into Queen." << endl;
					cin >> x;
					SetConsoleTextAttribute(h, 7);
					if (x == 'r')
					{
						board[i2][j2] = 'R';
					}
					if (x == 'n')
					{
						board[i2][j2] = 'N';
					}
					if (x == 'b')
					{
						board[i2][j2] = 'B';
					}
					if (x == 'q')
					{
						board[i2][j2] = 'Q';
					}
					printBoard(board);
				}
			}
			else
			{
				SetConsoleTextAttribute(h, 4);
				cout << "INVALID MOVE, try again." << endl;
				SetConsoleTextAttribute(h, 7);
				goto s1;
			}
		}
		if (CheckMate(board) == true)
		{
			SetConsoleTextAttribute(h, 4);
			cout << "It's a CheckMate!" << endl;
			cout << "The Game is over, Player Big/White Won!" << endl;
			SetConsoleTextAttribute(h, 7);
			exit(1);
		}
		if (StaleMate(board) == true)
		{
			SetConsoleTextAttribute(h, 2);
			cout << "It's a StaleMate!" << endl;
			cout << "The Game is Draw!" << endl;
			SetConsoleTextAttribute(h, 7);
			if (mode == 'c')
			{
				white_end = clock();
				Whiteseconds += (int)(white_end - white_start) / (int)(CLK_TCK);
				if (Whiteseconds > Blackseconds)
				{
					cout << "White player took more time (" << Whiteseconds << " seconds) than Black player (" << Blackseconds << " seconds) overall." << endl;
				}
				if (Whiteseconds < Blackseconds)
				{
					cout << "White player took less time (" << Whiteseconds << " seconds) than Black player (" << Blackseconds << " seconds) overall." << endl;
				}
			}
			exit(1);
		}
	}
	if (mode == 'c')
	{
		white_end = clock();
		Whiteseconds += (int)(white_end - white_start) / (int)(CLK_TCK);
	}
	if (mode == 'r')
	{
		white_end = clock();
		Whiteseconds += (int)(white_end - white_start) / (int)(CLK_TCK);
		if (Whiteseconds > 600)
		{
			SetConsoleTextAttribute(h, 4);
			cout << "Time is over, Player Small/Black Won!" << endl;
			SetConsoleTextAttribute(h, 7);
			exit(1);
		}
		else
		{
			Whiteseconds = Whiteseconds - 10;
		}
	}
	if (mode == 'b')
	{
		white_end = clock();
		Whiteseconds += (int)(white_end - white_start) / (int)(CLK_TCK);
		if (Whiteseconds > 300)
		{
			SetConsoleTextAttribute(h, 4);
			cout << "Time is over, Player Small/Black Won!" << endl;
			SetConsoleTextAttribute(h, 7);
			exit(1);
		}
	}
	cout << endl;

t2:if (mode == 'c')
black_start = clock();
if (mode == 'r')
{
	SetConsoleTextAttribute(h, 5);
	cout << "Time Left for Player Black: " << 600 - Blackseconds << " seconds" << endl;
	SetConsoleTextAttribute(h, 7);
	cout << endl;
	black_start = clock();
}
if (mode == 'b')
{
	SetConsoleTextAttribute(h, 5);
	cout << "Time Left for Player Black: " << 300 - Blackseconds << " seconds" << endl;
	SetConsoleTextAttribute(h, 7);
	cout << endl;
	black_start = clock();
}

SetConsoleTextAttribute(h, 13);
cout << "Player Small/Black Turn: " << endl;
SetConsoleTextAttribute(h, 7);
cout << endl;
s2:cout << "Enter the Position of Element you want to move (x,y): ";
cin >> temp1;
if (temp1 == 'p' && mode == 'c')
{
	ofstream classicalMoves;
	classicalMoves.open("LoadClassicalGame.txt");
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			classicalMoves << board[i][j] << endl;
		}
	}
	classicalMoves.close();

	ofstream classicalTurn;
	classicalTurn.open("ClassicalTurn.txt");
	classicalTurn << 'b';
	classicalTurn.close();

	ofstream classicalwhiteTime;
	classicalwhiteTime.open("ClassicalWhiteTime.txt");
	classicalwhiteTime << Whiteseconds;
	classicalwhiteTime.close();
	ofstream classicalblackTime;
	classicalblackTime.open("ClassicalBlackTime.txt");
	classicalblackTime << Blackseconds;
	classicalblackTime.close();

	exit(1);
}
if (temp1 == 'p' && mode == 'r')
{
	ofstream rapidMoves;
	rapidMoves.open("LoadRapidGame.txt");
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			rapidMoves << board[i][j] << endl;
		}
	}
	rapidMoves.close();

	ofstream rapidTurn;
	rapidTurn.open("RapidTurn.txt");
	rapidTurn << 'b';
	rapidTurn.close();

	ofstream rapidwhiteTime;
	rapidwhiteTime.open("RapidWhiteTime.txt");
	rapidwhiteTime << Whiteseconds;
	rapidwhiteTime.close();
	ofstream rapidblackTime;
	rapidblackTime.open("RapidBlackTime.txt");
	rapidblackTime << Blackseconds;
	rapidblackTime.close();

	exit(1);
}
if (temp1 == 'p' && mode == 'b')
{
	ofstream blitzMoves;
	blitzMoves.open("LoadBlitzGame.txt");
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			blitzMoves << board[i][j] << endl;
		}
	}
	blitzMoves.close();

	ofstream blitzTurn;
	blitzTurn.open("BlitzTurn.txt");
	blitzTurn << 'b';
	blitzTurn.close();

	ofstream blitzwhiteTime;
	blitzwhiteTime.open("BlitzWhiteTime.txt");
	blitzwhiteTime << Whiteseconds;
	blitzwhiteTime.close();
	ofstream blitzblackTime;
	blitzblackTime.open("BlitzBlackTime.txt");
	blitzblackTime << Blackseconds;
	blitzblackTime.close();

	exit(1);
}
if (temp1 == 's')
{
	yes = BlackHandshake(Whiteseconds, Blackseconds, mode);
	if (yes == true)
	{
		exit(1);
	}
	if (yes == false)
	{
		SetConsoleTextAttribute(h, 4);
		cout << "Handshake Rejected." << endl;
		cout << endl;
		SetConsoleTextAttribute(h, 13);
		cout << "Player Small/Black Turn: " << endl;
		SetConsoleTextAttribute(h, 7);
		cout << endl;
		goto s2;
	}
}
if (temp1 == 'r')
{
	SetConsoleTextAttribute(h, 4);
	cout << "The Game is over, Player Big/White Won!" << endl;
	SetConsoleTextAttribute(h, 7);
	exit(1);
}
cin >> temp2;
if (!(temp1 > 96 && temp1 < 105))
{
	SetConsoleTextAttribute(h, 4);
	cout << "INVALID POSITION, Try again." << endl;
	SetConsoleTextAttribute(h, 7);
	goto s2;
}
if (!(temp2 > 0 && temp2 < 9))
{
	SetConsoleTextAttribute(h, 4);
	cout << "INVALID POSITION, Try again." << endl;
	SetConsoleTextAttribute(h, 7);
	goto s2;
}
if (temp1 == 'a')
j1 = 0;
else if (temp1 == 'b')
j1 = 1;
else if (temp1 == 'c')
j1 = 2;
else if (temp1 == 'd')
j1 = 3;
else if (temp1 == 'e')
j1 = 4;
else if (temp1 == 'f')
j1 = 5;
else if (temp1 == 'g')
j1 = 6;
else if (temp1 == 'h')
j1 = 7;
if (temp2 == 8)
i1 = 0;
else if (temp2 == 7)
i1 = 1;
else if (temp2 == 6)
i1 = 2;
else if (temp2 == 5)
i1 = 3;
else if (temp2 == 4)
i1 = 4;
else if (temp2 == 3)
i1 = 5;
else if (temp2 == 2)
i1 = 6;
else if (temp2 == 1)
i1 = 7;
b = board[i1][j1];

if (!(b > 97 && b < 123) || i1 > 7 || j1 > 7 || i1 < 0 || j1 < 0)
{
	SetConsoleTextAttribute(h, 4);
	cout << "INVALID POSITION, Try again." << endl;
	SetConsoleTextAttribute(h, 7);
	goto s2;
}
else
{
	cout << "Enter the Position you want to move (x,y): ";
	cin >> temp1 >> temp2;
	if (!(temp1 > 96 && temp1 < 105))
	{
		SetConsoleTextAttribute(h, 4);
		cout << "INVALID POSITION, Try again." << endl;
		SetConsoleTextAttribute(h, 7);
		goto s2;
	}
	if (!(temp2 > 0 && temp2 < 9))
	{
		SetConsoleTextAttribute(h, 4);
		cout << "INVALID POSITION, Try again." << endl;
		SetConsoleTextAttribute(h, 7);
		goto s2;
	}
	if (temp1 == 'a')
		j2 = 0;
	else if (temp1 == 'b')
		j2 = 1;
	else if (temp1 == 'c')
		j2 = 2;
	else if (temp1 == 'd')
		j2 = 3;
	else if (temp1 == 'e')
		j2 = 4;
	else if (temp1 == 'f')
		j2 = 5;
	else if (temp1 == 'g')
		j2 = 6;
	else if (temp1 == 'h')
		j2 = 7;
	if (temp2 == 8)
		i2 = 0;
	else if (temp2 == 7)
		i2 = 1;
	else if (temp2 == 6)
		i2 = 2;
	else if (temp2 == 5)
		i2 = 3;
	else if (temp2 == 4)
		i2 = 4;
	else if (temp2 == 3)
		i2 = 5;
	else if (temp2 == 2)
		i2 = 6;
	else if (temp2 == 1)
		i2 = 7;
	if (i2 > 7 || j2 > 7 || i2 < 0 || j2 < 0)
	{
		SetConsoleTextAttribute(h, 4);
		cout << "INVALID POSITION, Try again." << endl;
		SetConsoleTextAttribute(h, 7);
		goto s2;
	}
	if (b == 'r')
	{
		if (rook(board, i1, j1, i2, j2))
		{
			board[i1][j1] = '_';
			board[i2][j2] = 'r';
			printBoard(board);
		}
		else
		{
			SetConsoleTextAttribute(h, 4);
			cout << "INVALID MOVE, try again." << endl;
			SetConsoleTextAttribute(h, 7);
			goto s2;
		}
	}
	if (b == 'n')
	{
		if (knight(board, i1, j1, i2, j2))
		{
			board[i1][j1] = '_';
			board[i2][j2] = 'n';
			printBoard(board);
		}
		else
		{
			SetConsoleTextAttribute(h, 4);
			cout << "INVALID MOVE, try again." << endl;
			SetConsoleTextAttribute(h, 7);
			goto s2;
		}
	}
	if (b == 'b')
	{
		if (bishop(board, i1, j1, i2, j2))
		{
			board[i1][j1] = '_';
			board[i2][j2] = 'b';
			printBoard(board);
		}
		else
		{
			SetConsoleTextAttribute(h, 4);
			cout << "INVALID MOVE, try again." << endl;
			SetConsoleTextAttribute(h, 7);
			goto s2;
		}
	}
	if (b == 'q')
	{
		if (queen(board, i1, j1, i2, j2))
		{
			board[i1][j1] = '_';
			board[i2][j2] = 'q';
			printBoard(board);
		}
		else
		{
			SetConsoleTextAttribute(h, 4);
			cout << "INVALID MOVE, try again." << endl;
			SetConsoleTextAttribute(h, 7);
			goto s2;
		}
	}
	if (b == 'k')
	{
		if (king(board, i1, j1, i2, j2, count))
		{
			board[i1][j1] = '_';
			board[i2][j2] = 'k';
			count++;
			printBoard(board);
		}
		else
		{
			SetConsoleTextAttribute(h, 4);
			cout << "INVALID MOVE, try again." << endl;
			SetConsoleTextAttribute(h, 7);
			goto s2;
		}
	}
	if (b == 'p')
	{
		if (pawn(board, i1, j1, i2, j2))
		{
			board[i1][j1] = '_';
			board[i2][j2] = 'p';
			printBoard(board);
			if (i2 == 7)
			{
				SetConsoleTextAttribute(h, 2);
				char x;
				cout << "Promotion of Pawn!" << endl;
				cout << "Enter r to convert Pawn into Rook." << endl;
				cout << "Enter n to convert Pawn into Knight." << endl;
				cout << "Enter b to convert Pawn into Bishop." << endl;
				cout << "Enter q to convert Pawn into Queen." << endl;
				cin >> x;
				SetConsoleTextAttribute(h, 7);
				if (x == 'r')
				{
					board[i2][j2] = 'r';
				}
				if (x == 'n')
				{
					board[i2][j2] = 'n';
				}
				if (x == 'b')
				{
					board[i2][j2] = 'b';
				}
				if (x == 'q')
				{
					board[i2][j2] = 'q';
				}
				printBoard(board);
			}
		}
		else
		{
			SetConsoleTextAttribute(h, 4);
			cout << "INVALID MOVE, try again." << endl;
			SetConsoleTextAttribute(h, 7);
			goto s2;
		}
	}
	if (checkmate(board) == true)
	{
		SetConsoleTextAttribute(h, 4);
		cout << "It's a CheckMate!" << endl;
		cout << "The Game is over, Player Small/Black Won!" << endl;
		SetConsoleTextAttribute(h, 7);
		exit(1);
	}
	if (stalemate(board) == true)
	{
		SetConsoleTextAttribute(h, 2);
		cout << "It's a StaleMate!" << endl;
		cout << "The Game is Draw!" << endl;
		SetConsoleTextAttribute(h, 7);
		if (mode == 'c')
		{
			black_end = clock();
			Blackseconds += (int)(black_end - black_start) / (int)(CLK_TCK);
			if (Whiteseconds > Blackseconds)
			{
				cout << "Black player took less time (" << Blackseconds << " seconds) than White player (" << Whiteseconds << " seconds) overall." << endl;
			}
			if (Whiteseconds < Blackseconds)
			{
				cout << "Black player took more time (" << Blackseconds << " seconds) than White player (" << Whiteseconds << " seconds) overall." << endl;
			}
		}
		exit(1);
	}
}
if (mode == 'c')
{
	black_end = clock();
	Blackseconds += (int)(black_end - black_start) / (int)(CLK_TCK);
}
if (mode == 'r')
{
	black_end = clock();
	Blackseconds += (int)(black_end - black_start) / (int)(CLK_TCK);
	if (Blackseconds > 600)
	{
		SetConsoleTextAttribute(h, 4);
		cout << "Time is over, Player Big/White Won!" << endl;
		SetConsoleTextAttribute(h, 7);
		exit(1);
	}
	else
	{
		Blackseconds = Blackseconds - 10;
	}
}
if (mode == 'b')
{
	black_end = clock();
	Blackseconds += (int)(black_end - black_start) / (int)(CLK_TCK);
	if (Blackseconds > 300)
	{
		SetConsoleTextAttribute(h, 4);
		cout << "Time is over, Player Big/White Won!" << endl;
		SetConsoleTextAttribute(h, 7);
		exit(1);
	}
}
cout << endl;
	} while (1);
	return 0;
}