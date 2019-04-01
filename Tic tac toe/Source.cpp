#include <iostream>
#include <string>
#include <iostream>
#include <iomanip>
int line; int column; int sentence;
using namespace std;
void Print(string **tf, int nf, int mf)
{

	cout << endl;
	cout << setw(5) << "1" << setw(6) << "2" << setw(6) << "3" << setw(6) << "4" << setw(6) << "5" << endl<<"\n";
	cout <<" "<<"|-----|-----|-----|-----|-----|\n";
    cout<<" "<< "|     |     |     |     |     |\n";
    cout <<"1"<< "|  "<<tf[0][0]<<"  |  " << tf[0][1] << "  |  " << tf[0][2] << "  |  " << tf[0][3] << "  |  " << tf[0][4] << "  |\n";
	cout << " " << "|     |     |     |     |     |\n";
	cout << " " << "|-----|-----|-----|-----|-----|\n";
	cout << " " << "|     |     |     |     |     |\n";
	cout << "2" << "|  " << tf[1][0] << "  |  " << tf[1][1] << "  |  " << tf[1][2] << "  |  " << tf[1][3] << "  |  " << tf[1][4] << "  |\n";
	cout << " " << "|     |     |     |     |     |\n";
	cout << " " << "|-----|-----|-----|-----|-----|\n";
	cout << " " << "|     |     |     |     |     |\n";
	cout << "3" << "|  " << tf[2][0] << "  |  " << tf[2][1] << "  |  " << tf[2][2] << "  |  " << tf[2][3] << "  |  " << tf[2][4] << "  |\n";
	cout << " " << "|     |     |     |     |     |\n";
	cout << " " << "|-----|-----|-----|-----|-----|\n";
	cout << " " << "|     |     |     |     |     |\n";
	cout << "4" << "|  " << tf[3][0] << "  |  " << tf[3][1] << "  |  " << tf[3][2] << "  |  " << tf[3][3] << "  |  " << tf[3][4] << "  |\n";
	cout << " " << "|     |     |     |     |     |\n";
	cout << " " << "|-----|-----|-----|-----|-----|\n";
	cout << " " << "|     |     |     |     |     |\n";
	cout << "5" << "|  " << tf[4][0] << "  |  " << tf[4][1] << "  |  " << tf[4][2] << "  |  " << tf[4][3] << "  |  " << tf[4][4] << "  |\n";
	cout << " " << "|     |     |     |     |     |\n";
	cout << " " << "|-----|-----|-----|-----|-----|\n";
}
int Correct_input_check(string **tf, int nf, int mf)
{
	if (nf > 5 || mf > 5 || nf < 0 || mf < 0)
	{
		cout << "Вы вышли за границу сетки!!!" << endl;
		return 0;
	}
	else if (tf[nf][mf] != " ")
	{
		cout << "Ошибка ввода, поле уже занято, выберите новое поле" << endl;
		sentence = 0;
		return sentence;
		
	}
	else
	{
		sentence = 1;
		return sentence;
		
	}
}
void X_Choice(string **tf, int nf, int mf)
{
	
	if (Correct_input_check(tf, nf, mf) == 0)
	{
		Print(tf, 5, 5);
		cout << "Введите новые значения строки и столбца"<<endl;
		cout << "Строка:";
		cin >> nf;
		cout << "Столбец:";
		cin >> mf;
		Correct_input_check(tf, nf-1, mf-1);
		X_Choice(tf, nf-1, mf-1);
	}
	else
	{
		tf[nf][mf]="X";
		
	}
	
}
void O_Choice(string **tf, int nf, int mf)
{
	if (Correct_input_check(tf, nf, mf) == 0)
	{
		Print(tf, 5, 5);
		cout << "Введите новые значения строки и столбца"<<endl;
		cout << "Строка:";
		cin >> nf;
		cout << "Столбец:";
		cin >> mf;
		Correct_input_check(tf, nf-1, mf-1);
		O_Choice(tf, nf-1, mf-1);
	}
	else
	{
		tf[nf][mf] = "O";
	
	}

}
void X_Win_Condition(string **tf)
{
	//Победа при 5 "Х" в ряд строка
	int k = 0;//1
	if (tf[k][0] == "X"&& tf[k][1] == "X"&& tf[k][2] == "X"&& tf[k][3] == "X" && tf[k][4] == "X")
	{
		cout << "Игрок 1 победил!!!!" << endl;
		system("pause");
		exit(0);
	}
	k++;//2
	if (tf[k][0] == "X"&& tf[k][1] == "X"&& tf[k][2] == "X"&& tf[k][3] == "X" && tf[k][4] == "X")
	{
		cout << "Игрок 1 победил!!!!" << endl;
		system("pause");
		exit(0);
	}
	k++;//3
	if (tf[k][0] == "X"&& tf[k][1] == "X"&& tf[k][2] == "X"&& tf[k][3] == "X" && tf[k][4] == "X")
	{
		cout << "Игрок 1 победил!!!!" << endl;
		system("pause");
		exit(0);
	}
	k++;//4
	if (tf[k][0] == "X"&& tf[k][1] == "X"&& tf[k][2] == "X"&& tf[k][3] == "X" && tf[k][4] == "X")
	{
		cout << "Игрок 1 победил!!!!" << endl;
		system("pause");
		exit(0);
	}
	k++;//5
	if (tf[k][0] == "X"&& tf[k][1] == "X"&& tf[k][2] == "X"&& tf[k][3] == "X" && tf[k][4] == "X")
	{
		cout << "Игрок 1 победил!!!!" << endl;
		system("pause");
		exit(0);
	}
	//Победа при 5 "Х" в ряд столбец
	k = 0;//1
	if (tf[0][k] == "X"&& tf[1][k] == "X"&& tf[2][k] == "X"&& tf[3][k] == "X" && tf[4][k] == "X")
	{
		cout << "Игрок 1 победил!!!!" << endl;
		system("pause");
		exit(0);
	}
	k++;//2
	if (tf[0][k] == "X"&& tf[1][k] == "X"&& tf[2][k] == "X"&& tf[3][k] == "X" && tf[4][k] == "X")
	{
		cout << "Игрок 1 победил!!!!" << endl;
		system("pause");
		exit(0);
	}
	k++;//3
	if (tf[0][k] == "X"&& tf[1][k] == "X"&& tf[2][k] == "X"&& tf[3][k] == "X" && tf[4][k] == "X")
	{
		cout << "Игрок 1 победил!!!!" << endl;
		system("pause");
		exit(0);
	}
	k++;//4
	if (tf[0][k] == "X"&& tf[1][k] == "X"&& tf[2][k] == "X"&& tf[3][k] == "X" && tf[4][k] == "X")
	{
		cout << "Игрок 1 победил!!!!" << endl;
		system("pause");
		exit(0);
	}
	k++;//5
	if (tf[0][k] == "X"&& tf[1][k] == "X"&& tf[2][k] == "X"&& tf[3][k] == "X" && tf[4][k] == "X")
	{
		cout << "Игрок 1 победил!!!!" << endl;
		system("pause");
		exit(0);
	}
	//Победа при 5 "X" в диагонали
	if (tf[0][0] == "X"&& tf[1][1] == "X"&& tf[2][2] == "X"&& tf[3][3] == "X" && tf[4][4] == "X")
	{
		cout << "Игрок 1 победил!!!!" << endl;
		system("pause");
		exit(0);
	}
	//Победа при 5 "X" обратной диагонали
	if (tf[4][0] == "X"&& tf[3][1] == "X"&& tf[2][2] == "X"&& tf[1][3] == "X" && tf[0][4] == "X")
	{
		cout << "Игрок 1 победил!!!!" << endl;
		system("pause");
		exit(0);
	}
}
void Y_Win_Condition(string **tf)
{
	//Победа при 5 "O" в ряд строка
	int k = 0;//1
	if (tf[k][0] == "O"&& tf[k][1] == "O"&& tf[k][2] == "O"&& tf[k][3] == "O" && tf[k][4] == "O")
	{
		cout << "Игрок 2 победил!!!!" << endl;
		system("pause");
		exit(0);
	}
	k++;//2
	if (tf[k][0] == "O"&& tf[k][1] == "O"&& tf[k][2] == "O"&& tf[k][3] == "O" && tf[k][4] == "O")
	{
		cout << "Игрок 2 победил!!!!" << endl;
		system("pause");
		exit(0);
	}
	k++;//3
	if (tf[k][0] == "O"&& tf[k][1] == "O"&& tf[k][2] == "O"&& tf[k][3] == "O" && tf[k][4] == "O")
	{
		cout << "Игрок 2 победил!!!!" << endl;
		system("pause");
		exit(0);
	}
	k++;//4
	if (tf[k][0] == "O"&& tf[k][1] == "O"&& tf[k][2] == "O"&& tf[k][3] == "O" && tf[k][4] == "O")
	{
		cout << "Игрок 2 победил!!!!" << endl;
		system("pause");
		exit(0);
	}
	k++;//5
	if (tf[k][0] == "O"&& tf[k][1] == "O"&& tf[k][2] == "O"&& tf[k][3] == "O" && tf[k][4] == "O")
	{
		cout << "Игрок 2 победил!!!!" << endl;
		system("pause");
		exit(0);
	}
	//Победа при 5 "O" в ряд столбец
	k = 0;//1
	if (tf[0][k] == "O"&& tf[1][k] == "O"&& tf[2][k] == "O"&& tf[3][k] == "O" && tf[4][k] == "O")
	{
		cout << "Игрок 2 победил!!!!" << endl;
		system("pause");
		exit(0);
	}
	k++;//2
	if (tf[0][k] == "O"&& tf[1][k] == "O"&& tf[2][k] == "O"&& tf[3][k] == "O" && tf[4][k] == "O")
	{
		cout << "Игрок 2 победил!!!!" << endl;
		system("pause");
		exit(0);
	}
	k++;//3
	if (tf[0][k] == "O"&& tf[1][k] == "O"&& tf[2][k] == "O"&& tf[3][k] == "O" && tf[4][k] == "O")
	{
		cout << "Игрок 2 победил!!!!" << endl;
		system("pause");
		exit(0);
	}
	k++;//4
	if (tf[0][k] == "O"&& tf[1][k] == "O"&& tf[2][k] == "O"&& tf[3][k] == "O" && tf[4][k] == "O")
	{
		cout << "Игрок 2 победил!!!!" << endl;
		system("pause");
		exit(0);
	}
	k++;//5
	if (tf[0][k] == "O"&& tf[1][k] == "O"&& tf[2][k] == "O"&& tf[3][k] == "O" && tf[4][k] == "O")
	{
		cout << "Игрок 2 победил!!!!" << endl;
		system("pause");
		exit(0);
	}
	//Победа при 5 "O" в диагонали
	if (tf[0][0] == "O"&& tf[1][1] == "O"&& tf[2][2] == "O"&& tf[3][3] == "O" && tf[4][4] == "O")
	{
		cout << "Игрок 2 победил!!!!" << endl;
		system("pause");
		exit(0);
	}
	// Победа при 5 "O" обратной диагонали
	if (tf[4][0] == "O" && tf[3][1] == "O"&& tf[2][2] == "O"&& tf[1][3] == "O" && tf[0][4] == "O")
	{
		cout << "Игрок 2 победил!!!!" << endl;
		system("pause");
		exit(0);
	}
}
int main() 
{
	
	setlocale(LC_ALL, "Russian");
	string **GameField = new string *[5];
	cout << "Добро пожаловать в игру 'Крестики-Нолики'" << endl << "\n\n\n";
	for (int i = 0; i < 5; i++)
		GameField[i] = new string[5];

		for (int i= 0; i < 5; i++) {
			for (int j = 0; j < 5; j++)
				GameField[i][j] = " ";
	}
		Print(GameField, 5, 5);
		for (int i = 0; i < 100; i++)
		{
			cout << "Игрок 1 ставит крестик : Выберите клетку, куда хотите вставить крестик" << endl;
			cout << "Строка:";
			cin >> line;
			cout << "Столбец:";
			cin >> column;
			cout << endl;
			X_Choice(GameField, line - 1, column - 1);
			Print(GameField, 5, 5);
			X_Win_Condition(GameField);
			cout << "Игрок 2 ставит нолик : Выберите клетку, куда хотите вставить нолик" << endl;
			cout << "Строка:";
			cin >> line;
			cout << "Столбец:";
			cin >> column;
			cout << endl;
			O_Choice(GameField, line - 1, column - 1);
			Print(GameField, 5, 5);
			Y_Win_Condition(GameField);
		}
		system("pause");
		return 0;
}
