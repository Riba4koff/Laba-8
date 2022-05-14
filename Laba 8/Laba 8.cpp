#include <iostream>
#include <C:\Users\Паша\source\repos\Laba 8\Laba 8\Header.h>
#include <Windows.h>
#include <conio.h>

using namespace std;

const int height = 10;
const int weight = 40;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
COORD position = { 0, 0 };

//Проверка, является ли введенное число типом инт
bool is_number(char number[]) {
	for (int i = 0; i < 100; i++) {
		if ((char)number[i] != -52 && number[i] != '\0') {
			if (!((char)number[i] >= 48 && (char)number[i] <= 57 && number[i]))
				return false;
		}
		else
			return true;
	}
}
//Перевод из чар числа в инт число
int char_to_int(char number[]) {
	int number_of_digits = 0;

	for (int i = 0; number[i] != '\0'; i++) {
		if ((char)number[i] != -52) {
			number_of_digits++;
		}
	}

	if (number_of_digits == 1) {
		return ((char)(number[0] - 48));
	}
	if (number_of_digits == 2) {
		return ((char)(number[0] - 48) * 10 + (char)(number[1] - 48));
	}
	if (number_of_digits == 3) {
		return (((char)(number[0] - 48) * 100) + (((char)(number[1])) - 48) * 10 + (char)(number[2]) - 48);
	}
	if (number_of_digits == 4) {
		return (((char)(number[0] - 48) * 1000) + (((char)(number[1])) - 48) * 100 + ((char)(number[2]) - 48)* 10 + ((char)(number[2]) - 48));
	}
	if (number_of_digits == 5) {
		return (((char)(number[0] - 48) * 10000) + (((char)(number[1])) - 48) * 1000 + ((char)(number[2]) - 48) * 100 + ((char)(number[2]) - 48) * 10 + ((char)(number[2]) - 48));
	}
	if (number_of_digits == 6) {
		return (((char)(number[0] - 48) * 100000) + (((char)(number[1])) - 48) * 10000 + ((char)(number[2]) - 48) * 1000 + ((char)(number[2]) - 48) * 100 + ((char)(number[2]) - 48) * 10 + ((char)(number[2]) - 48));
	}
}

void frame_from_main_and_end_screens(const int height, const int weight) {
	for (int i = 0; i <= weight; i++){
		cout << "-";
	}
	cout << "\n";
	for (int i = 0; i < height; i++){
		for (int j = 0; j <= weight; j++){
			if (j == 0 || j == weight) cout << "|";
			else cout << " ";
		}
		cout << "\n";
	}

	for (int i = 0; i <= weight; i++) {
		cout << "-";
	}

	cout << "\n";
	for (int i = 0; i < height - 9; i++) {
		for (int j = 0; j <= weight; j++) {
			if (j == 0 || j == weight && i != 8) cout << "|";
			else cout << " ";
		}
		cout << "\n";
	}

	for (int i = 0; i <= weight; i++) {
		cout << "-";
	}


}

void menu_frame(const int height, const int weight) {
	for (int i = 0; i <= weight; i++) {
		cout << "-";
	}
	cout << "\n";
	for (int i = 0; i < height+4; i++) {
		for (int j = 0; j <= weight; j++) {
			if (j == 0 || j == weight) cout << "|";
			else cout << " ";
		}
		cout << "\n";
	}

	for (int i = 0; i <= weight; i++) {
		cout << "-";
	}

	cout << "\n";
	for (int i = 0; i < height - 9; i++) {
		for (int j = 0; j <= weight; j++) {
			if (j == 0 || j == weight && i != 8) cout << "|";
			else cout << " ";
		}
		cout << "\n";
	}

	for (int i = 0; i <= weight; i++) {
		cout << "-";
	}


}
void mainScreen(const int height, const int weight, HANDLE hConsole, COORD position) {
	frame_from_main_and_end_screens(height, weight);

	position = { 15, 3 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Программа";

	position = { 7, 4 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Абстрактные  типы данных";

	position = { 7, 5 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Рыбаков Павел Алексеевич";

	position = { 15, 6 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Гр. 1092";


	position = { 8 , 12 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Esc - Выход, Enter - Далее";

	position = { 0, 13 };
	SetConsoleCursorPosition(hConsole, position);

}
void menuScreen(const int height, const int weight, HANDLE hConsole, COORD position) {
	menu_frame(height, weight);

	position = { 8, 1 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "1. Очистить список";
	position = { 8, 2 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "2. Проверить на пустоту";
	position = { 8, 3 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "3. Добавить в начало";
	position = { 8, 4 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "4. Добавить в конец";
	position = { 8, 5 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "5. Удалить с конца";
	position = { 8, 6 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "6. Удалить с начала";
	position = { 8, 7 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "7. Удалить по индексу";
	position = { 8, 8 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "8. Добавить по индексу";
	position = { 8, 9 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "9. Заполнить массив";
	position = { 8, 10 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "0. Вывести массив";
	position = { 8, 11 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "q. Вывести первый элемент";
	position = { 8, 12 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "w. Вывести последний элемент";
	position = { 8, 13 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "e. Индивидуальное задание";
	position = { 8, 14 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "r. Поиск элемента в списке";


	position = { 8 , 16 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Esc - Выход, Enter - Далее";

	position = { 0, 14 };
	SetConsoleCursorPosition(hConsole, position);

}
void endScreen(const int height, const int weight, HANDLE hConsole, COORD position) {
	frame_from_main_and_end_screens(height, weight);

	position = { 15, 3 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Программа";

	position = { 7, 4 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Абстрактные  типы данных";

	position = { 7, 5 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Рыбаков Павел Алексеевич";

	position = { 15, 6 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Гр. 1092";

	position = { 9, 8 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Завершила свою работу";


	position = { 8 , 12 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "Esc - Выход, Enter - Далее";

	position = { 0, 13 };
	SetConsoleCursorPosition(hConsole, position);

}

void lifeCycle(const int height, const int weight, COORD position, HANDLE hConsole, MyList<int> list) {

	bool life_cycle = true;
	char choise;
	bool is_menu = false;


	do {
		//ASCII "Esc" = 27, ASCII "Enter" = 13;
		
		if (!is_menu) {
			system("cls");
			mainScreen(height, weight, hConsole, position);
			life_cycle = ((choise = _getch()) == 27) ? 0 : 1;
		}
	

		if (choise == 27) {
			life_cycle = false;
			system("cls");
		}
		else if (choise == 13) {
			system("cls");

			menuScreen(height, weight, hConsole, position);
			is_menu = true;
			char local_choise = _getch();
			int data;
			char ch_data[20];
			char ch_index[20];
			char ch_size[20];
			int ind_size = list.GetSize();
			switch (local_choise) {
			//Очистить список - 1
			case 49:
				if (list.GetSize() == 0) {
					system("cls");
					cout << "List is empty\nPress any key...";
					_getch();
				}
				else {
					list.clear();
					system("cls");
					cout << "List was cleared\nPress any key...";
					_getch();
				}
				break;
			case 50:
			//Проверка на пустоту - 2
				if (list.GetSize() == 0) {
					system("cls");
					cout << "List is empty\nPress any key...";
					_getch();
				}
				else {
					system("cls");
					cout << "List is not empty\nPress any key...";
					_getch();
				}
				break;
			case 51:
			//Добавить в начало - 3
				do {
					system("cls");
					cout << "write data: ";
					cin >> ch_data;
				} while (!is_number(ch_data));
				data = char_to_int(ch_data);
				list.push_front(data);
				break;
			case 52:
			//Добавить в конец - 4
				do {
					system("cls");
					cout << "write data: ";
					cin >> ch_data;
				} while (!is_number(ch_data));
				data = char_to_int(ch_data);
				list.push_back(data);
				break;
			case 53:
			//Удалить с конца - 5
				if (list.GetSize() == 0) {
					system("cls");
					cout << "List is empty\nPress any key...";
					_getch();
				}
				else {
					system("cls");
					list.pop_back();
					cout << "Number was deleted\nPress any key";
					_getch();
				}
				break;
			case 54:
			//Удалить с начала - 6
				if (list.GetSize() == 0) {
					system("cls");
					cout << "List is empty\nPress any key...";
					_getch();
				}
				else {
					system("cls");
					list.pop_front();
					cout << "Number was deleted\nPress any key...";
					_getch();
				}
				break;
			case 55:
			//Удалить по индексу - 7
				if (list.GetSize() == 0) {
					system("cls");
					cout << "List is empty\nPress any key...";
					_getch();
				} 
				else {
					int index;
					system("cls");
					do {
						system("cls");
						cout << "write index: ";
						cin >> ch_index;
					} while (!is_number(ch_index));
					index = char_to_int(ch_index);
					list.removeAt(index);
				}
				break;
			case 56:
			//Добавить по индексу - 8
				int index;
				system("cls");
				do {
					system("cls");
					cout << "write index: ";
					cin >> ch_index;
					cout << "write data: ";
					cin >> ch_data;
				} while (!is_number(ch_data) && !is_number(ch_index));
				data = char_to_int(ch_data);
				index = char_to_int(ch_index);

				list.insert(data, index);
				break;
			case 57:
			//Заполнить массив - 9
				if (list.GetSize() != 0) {
					system("cls");
					cout << "List is not empty\nDo you really want filling array?\nPrevious data will be deleted\nPress enter to continue\nPress Esc to exit...";
					char local_ch = _getch();
					if (local_ch == 27) {
						
					}
					else if (local_ch == 13){
						int size;
						system("cls");
						list.clear();
						do {
							cout << "Write size array: ";
							cin >> ch_size;
						} while (!is_number(ch_size));
						size = char_to_int(ch_size);
						cout << "\n";
						for (int i = 0; i < size; i++){
							do {
								system("cls");
								cout << "write list[" << i << "]: ";
								cin >> ch_data;
							} while (!is_number(ch_data));
							data = char_to_int(ch_data);
							list.push_back(data);
						}
					}
				}
				else {
					int size;
					system("cls");
					do {
						cout << "Write size array: ";
						cin >> ch_size;
					} while (!is_number(ch_size));
					size = char_to_int(ch_size);
					cout << "\n";
					for (int i = 0; i < size; i++) {
						do {
							system("cls");
							cout << "write list[" << i << "]: ";
							cin >> ch_data;
						} while (!is_number(ch_data));
						data = char_to_int(ch_data);
						list.push_back(data);
					}
				}
				break;
			case 48:
			//Вывести массив - 0
				if (list.GetSize() == 0) {
					system("cls");
					cout << "List is empty\nPress any key...";
					_getch();
				}
				else {
					system("cls");
					for (int i = 0; i < list.GetSize(); i++){
						cout << list[i] << " ";
					}
					cout << "\nPress any key...";
					_getch();
				}
				break;
			case 113:
			//Вывести первый элемент - q
				if (list.GetSize() == 0) {
					system("cls");
					cout << "List is empty\nPress any key...";
					_getch();
				}
				else {
					system("cls");
					cout << "first element of the array: " << list[0] << "\nPress any key...";
					_getch();
				}
				break;
			case 119:
			//Вывести последний элемент - w
				if (list.GetSize() == 0) {
					system("cls");
					cout << "List is empty\nPress any key...";
					_getch();
				}
				else {
					system("cls");
					cout << "last element of the array: " << list[list.GetSize() - 1] << "\nPress any key...";
					_getch();
				}
				break;
			case 101:
			//Индивидуальное задание - e
				for (int i = 0; i < ind_size; i++) {
					list.push_back(list[ind_size - i - 1]);
				}
				break;
			case 114:
			//Поиск элемента в списке
				int find_elem;
				char ch_find_elem[20];
				do
				{
					system("cls");
					cout << "Enter the element you want to find: ";
					cin >> ch_find_elem;
				} while (!is_number(ch_find_elem));
				find_elem = char_to_int(ch_find_elem);
				for (int i = 0; i < list.GetSize(); i++){
					if (char_to_int(ch_find_elem) == list[i]) {
						system("cls");
						cout << "true";
						_getch();
						break;
					}
					else if (i == list.GetSize() - 1){
						system("cls");
						cout << "false";
						_getch();
					}
				}
				break;
			case 27:
				is_menu = false;
				break;
			}


			cout << "\n\n";
		}
		else {
			system("cls");
			cout << "Push 'Enter' or 'Esc'";
		}

	} while (life_cycle);

	endScreen(height, weight, hConsole, position);

	cout << "\n\n\n";
}

int main() {
	setlocale(LC_ALL, "rus");

	MyList<int> list;
	
	lifeCycle(height, weight, position, hConsole, list);

	return 0;
}