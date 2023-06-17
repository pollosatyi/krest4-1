#pragma once
class Field
{
private:
	char** _field;
public:
	Field();

	char GetCell(int row, int column);
	void CheckWin();
	bool IsCellEmpty(int row, int column);
	void SetCell(int row, int column, char symbol);
	void InitField();
	bool IsFieldFull();
	bool CheckFieldRowForWin(char);
	bool CheckFieldColumnForWin(char);
	bool CheckMainDiagonalForWin(char);
	bool CheckSecondaryDiagonal(char);
	bool CheckFieldForWin(char);
};


