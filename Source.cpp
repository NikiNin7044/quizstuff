#include <iostream>
#include <thread>
#include <time.h>
using namespace std;
using namespace this_thread;
using namespace chrono;

int main()
{

	int choice; int loadvalue; int _;  int menuchoice; int difficulty = 1;
	int settingschoice; int settingschoice2; int colorchoice = 1;
	int questionnumber = 0; int answer;
	int lives = 3; int points = 0;
	int loadingvalue1 = 1;
	int loadingvalue100 = 100; int loadingvalue200 = 200;
	int loadingvalue300 = 300; int loadingvalue400 = 400;
	int loadingvalue500 = 500; int loadingvalue800 = 800;
	string playername = " "; string textcolor = "\x1b[0m";
	string norm = "\x1b[0m";
	string option1 = " "; string option2 = " ";
	string option3 = " "; string option4 = " ";
	bool startbool = false; bool settingsbool = true;
	bool questions = true; bool load = true;
	srand(time(NULL));

	cout << "YOU DON'T KNOW ";
	sleep_for(milliseconds(loadingvalue800));
	cout << "\'\x1b[92mI";
	sleep_for(milliseconds(loadingvalue800));
	cout << "T\x1b[0m\'";
	sleep_for(seconds(loadingvalue1));

	cout << "\n\nMENU.\n\n";
	sleep_for(milliseconds(loadingvalue500));
	cout << "[-1-] Start the Game.\n";
	sleep_for(milliseconds(loadingvalue500));
	cout << "[-2-] Settings.\n";
	sleep_for(milliseconds(loadingvalue500));
	cout << "[-3-] Rules.\n";
	sleep_for(milliseconds(loadingvalue500));
	cout << "[-4-] Quit.\n\n";
	sleep_for(milliseconds(loadingvalue500));
	cout << "Choose the Menu section...\n" <<
		"Write its position's number!\n\n";
	sleep_for(milliseconds(loadingvalue500));
	cout << "Insert the number : ";

	do
	{
		system("cls");
		settingsbool = true;

		cout << "YOU DON'T KNOW ";
		cout << "\'\x1b[92mI";
		cout << "T\x1b[0m\'";

		cout << "\n\nMENU.\n\n";
		cout << "[-1-] Start the Game.\n";
		cout << "[-2-] Settings.\n";
		cout << "[-3-] Rules.\n";
		cout << "[-4-] Quit.\n\n";
		cout << "Choose the Menu section...\n" <<
			"Write its position's number!\n\n";;
		cout << "Insert the number : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			system("cls");
			sleep_for(milliseconds(loadingvalue500));
			cout << "Please wait...\n\n\n";
			sleep_for(seconds(loadingvalue1));
			startbool = true;
			break;
		case 2:
			while (settingsbool == true)
			{
				system("cls");
				sleep_for(milliseconds(loadingvalue500));
				cout << "Settings.\n\n";
				sleep_for(milliseconds(loadingvalue500));
				cout << "[=1=] Player Name: " << playername << ".\n";
				sleep_for(milliseconds(loadingvalue500));
				cout << "[=2=] Difficulty: ";
				switch (difficulty)
				{
				case 1:
					cout << "Easy (8 questions).";
					break;
				case 2:
					cout << "Normal (10 questions).";
					break;
				case 3:
					cout << "Hard (12 questions).";
					break;
				}
				sleep_for(milliseconds(loadingvalue500));
				cout << "\n[=3=] Text color: ";
				switch (colorchoice)
				{
				case 1:
					cout << "Normal.";
					break;
				case 2:
					cout << "\x1b[36mCyan." << norm;
					break;
				case 3:
					cout << "\x1b[32mGreen (like Matrix)." << norm;
					break;
				case 4:
					cout << "\x1b[31mRed." << norm;
					break;
				}
				sleep_for(milliseconds(loadingvalue500));
				cout << "\n\nDo you wish to change anything?\n" <<
					"[1] Yes, let me change something.\n" <<
					"[2] No, get me back to the Menu.\n\n" <<
					"Your choice: ";
				cin >> settingschoice;
				switch (settingschoice)
				{
				case 1:
					sleep_for(milliseconds(loadingvalue500));
					cout << "Settings choice: ";
					cin >> settingschoice2;
					switch (settingschoice2)
					{
					case 1:
						sleep_for(milliseconds(loadingvalue500));
						cout << "New Player Name: ";
						cin >> playername;
						cout << "\n";
						break;
					case 2:
						sleep_for(milliseconds(loadingvalue500));
						cout <<
							"Available options:\n" <<
							"[!1!] Easy (8 questions).\n" <<
							"[!2!] Normal (10 questions).\n" <<
							"[!3!] Hard (12 questions).\n";
						cout << "Difficulty level: ";
						cin >> difficulty;
						switch (difficulty)
						{
						case 1:
						case 2:
						case 3:
							break;
						default:
							cout << "Error! Wrong input!";
							difficulty = 1;
							sleep_for(seconds(3));
							break;
						}
						break;
					case 3:
						sleep_for(milliseconds(loadingvalue500));
						cout <<
							"Available options:\n" <<
							"[+1+] \x1b[0mNormal.\n" << norm <<
							"[+2+] \x1b[36mCyan.\n" << norm <<
							"[+3+] \x1b[32mGreen (like Matrix).\n" << norm <<
							"[+4+] \x1b[31mRed.\n" << norm;
						cout << "\nColor: ";
						cin >> colorchoice;
						switch (colorchoice)
						{
						case 1:
							textcolor = "\x1b[0m";
							break;
						case 2:
							textcolor = "\x1b[36m";
							break;
						case 3:
							textcolor = "\x1b[32m";
							break;
						case 4:
							textcolor = "\x1b[31m";
							break;
						default:
							cout << "Error! Wrong input!";
							colorchoice = 1;
							sleep_for(seconds(3));
							break;
						}
						break;
					default:
						cout << "\nError. Wrong input!";
						sleep_for(seconds(3));
						break;
					}
					break;
				case 2:
					settingsbool = false;
					break;
				default:
					cout << "\nError. Wrong input!";
					sleep_for(seconds(3));
					break;
				}
			}
			break;
		case 3:
			system("cls");
			sleep_for(seconds(loadingvalue1));
			cout << "Rules.\n\n";
			sleep_for(milliseconds(loadingvalue500));
			cout << "[-I-] A Player gets points for correctly answering the questions!\n";
			sleep_for(milliseconds(loadingvalue500));
			cout << "[-II-] A Player advances in the Game for correctly answering the questions!\n";
			sleep_for(milliseconds(loadingvalue500));
			cout << "[-III-] A Player loses a life by answering incorrectly.\n\n";
			sleep_for(milliseconds(loadingvalue500));
			cout << "Write any number to return to Menu!\nNumber here: ";
			cin >> menuchoice;
			break;
		case 4:
			system("cls");
			cout << "Quiting the Game...\n";
			cout << ".......";
			for (loadvalue = 0; loadvalue < 3; ++loadvalue)
			{
				sleep_for(milliseconds(loadingvalue400));
				cout << "\rL";
				sleep_for(milliseconds(loadingvalue400));
				cout << "O";
				sleep_for(milliseconds(loadingvalue400));
				cout << "A";
				sleep_for(milliseconds(loadingvalue400));
				cout << "D";
				sleep_for(milliseconds(loadingvalue400));
				cout << "I";
				sleep_for(milliseconds(loadingvalue400));
				cout << "N";
				sleep_for(milliseconds(loadingvalue400));
				cout << "G";
				sleep_for(seconds(loadingvalue1));
				cout << "\r.......";
			}
			system("cls");
			switch (rand() % 101)
			{
			case 42:
			case 69:
				cout << "Lucky quit number, congratulations!\n";
				sleep_for(seconds(5));
				cout << "You get nothing. ";
				sleep_for(milliseconds(loadingvalue500));
				cout << "F";
				sleep_for(milliseconds(loadingvalue500));
				cout << "U";
				sleep_for(milliseconds(loadingvalue500));
				cout << "-";
				sleep_for(seconds(loadingvalue1));
				system("cls");
			}
			cout << "Quitting Complete.\nYou may close the console window now.";
			cin >> _;
			return 0;
			break;
		case 5:
			if (load == true)
			{
				load = false;
				loadingvalue1 = 0;
				loadingvalue100 = 0;
				loadingvalue200 = 0;
				loadingvalue300 = 0;
				loadingvalue400 = 0;
				loadingvalue500 = 0;
				loadingvalue800 = 0;
				cout << "\n\nActivated cheat \"No loads.\"";
				sleep_for(seconds(5));
			}
			else
			{
				load = true;
				loadingvalue1 = 1;
				loadingvalue100 = 100;
				loadingvalue200 = 200;
				loadingvalue300 = 300;
				loadingvalue400 = 400;
				loadingvalue500 = 500;
				loadingvalue800 = 800;
				cout << "\n\nDeactivated cheat \"No loads.\"";
				sleep_for(seconds(5));
			}
			break;
		default:
			cout << "\nError. Wrong input!";
			sleep_for(seconds(3));
			break;
		}
	} while (startbool != true);

	if (load == true)
	{
		cout << ".......";
		for (loadvalue = 0; loadvalue < 3; ++loadvalue)
		{
			sleep_for(milliseconds(loadingvalue400));
			cout << "\rL";
			sleep_for(milliseconds(loadingvalue400));
			cout << "O";
			sleep_for(milliseconds(loadingvalue400));
			cout << "A";
			sleep_for(milliseconds(loadingvalue400));
			cout << "D";
			sleep_for(milliseconds(loadingvalue400));
			cout << "I";
			sleep_for(milliseconds(loadingvalue400));
			cout << "N";
			sleep_for(milliseconds(loadingvalue400));
			cout << "G";
			sleep_for(seconds(loadingvalue1));
			cout << "\r.......";
		}
		for (loadvalue = 0; loadvalue < 1; ++loadvalue)
		{
			sleep_for(milliseconds(loadingvalue300));
			cout << "\rL";
			sleep_for(milliseconds(loadingvalue300));
			cout << "O";
			sleep_for(milliseconds(loadingvalue300));
			cout << "A";
			sleep_for(milliseconds(loadingvalue100));
			cout << "D";
			sleep_for(seconds(5));
			cout << "I";
			sleep_for(milliseconds(loadingvalue200));
			cout << "N";
			sleep_for(milliseconds(loadingvalue200));
			cout << "G";
			sleep_for(seconds(2));
		}
	}

	sleep_for(seconds(loadingvalue1));
	system("cls");
	sleep_for(seconds(loadingvalue1));

	cout << "Welcome, welcome. Your chosen difficulty is...";
	switch (difficulty)
	{
	case 1:
		sleep_for(seconds(loadingvalue1));
		cout << "Easy!\n\nGenerating 8 questions now...";
		break;
	case 2:
		sleep_for(seconds(loadingvalue1));
		cout << "Normal!\n\nGenerating 10 questions now...";
		break;
	case 3:
		sleep_for(seconds(loadingvalue1));
		cout << "Hard!\n\nGenerating 12 questions now...";
		break;
	default:
		sleep_for(seconds(2));
		cout << "\n\nW-wait, what?\n\nHow the fu-";
		sleep_for(seconds(loadingvalue1));
		system("cls");
		cin >> _;
		return 0;
		break;
	}

	sleep_for(seconds(5));
	do
	{
		questionnumber++;
		system("cls");
		sleep_for(seconds(2));
		cout << "Player: " << playername <<
			"|| Lives: " << lives <<
			"|| Points: " << points <<
			"\n[" << questionnumber <<
			"] Question: ";
		switch (questionnumber)
		{
		case 1:
			option1 = "[1] Python";
			option2 = "[2] C++";
			option3 = "[3] Ruby";
			option4 = "[4] PascalABC";

			sleep_for(seconds(2));
			cout << textcolor <<
				"What Programming Language is this program written on?"
				<< norm;
			sleep_for(seconds(loadingvalue1));
			cout << "\n" << option1;
			sleep_for(seconds(loadingvalue1));
			cout << "\t" << option2;;
			sleep_for(seconds(loadingvalue1));
			cout << "\n" << option3;
			sleep_for(seconds(loadingvalue1));
			cout << "\t" << option4;
			sleep_for(milliseconds(loadingvalue500));
			cout << "\nYour answer: ";
			cin >> answer;
			sleep_for(milliseconds(loadingvalue500));
			cout << "\n\nYour answer is";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(seconds(2));
			if (answer == 2)
			{
				cout << textcolor << "\nRIGHT!" << norm;
				sleep_for(milliseconds(loadingvalue500));
				cout << "\nYour choice was \"C++\"";
				points++;
				sleep_for(seconds(loadingvalue1));
				cout << "\nProceeding to the next Question.";
				break;
			}
			else
			{
				cout << textcolor << "\nWRONG!" << norm;
				lives--;
				sleep_for(milliseconds(loadingvalue500));
				cout << "\nYour choice was \"";
				sleep_for(seconds(loadingvalue1));
				cout << "\nProceeding to the next Question.";
				break;
			}
			break;
		case 2:
			option1 = "[1] Python";
			option2 = "[2] C++";
			option3 = "[3] Ruby";
			option4 = "[4] PascalABC";

			sleep_for(seconds(2));
			cout << textcolor <<
				"What Programming Language is this program written on?"
				<< norm;
			sleep_for(seconds(loadingvalue1));
			cout << "\n" << option1;
			sleep_for(seconds(loadingvalue1));
			cout << "\t" << option2;;
			sleep_for(seconds(loadingvalue1));
			cout << "\n" << option3;
			sleep_for(seconds(loadingvalue1));
			cout << "\t" << option4;
			sleep_for(milliseconds(loadingvalue500));
			cout << "\nYour answer: ";
			cin >> answer;
			sleep_for(milliseconds(loadingvalue500));
			cout << "\n\nYour answer is";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(seconds(2));
			if (answer == 2)
			{
				cout << textcolor << "\nRIGHT!" << norm;
				sleep_for(milliseconds(loadingvalue500));
				cout << "\nYour choice was \"C++\"";
				points++;
				sleep_for(seconds(loadingvalue1));
				cout << "\nProceeding to the next Question.";
				break;
			}
			else
			{
				cout << textcolor << "\nWRONG!" << norm;
				lives--;
				sleep_for(milliseconds(loadingvalue500));
				cout << "\nYour choice was \"";
				sleep_for(seconds(loadingvalue1));
				cout << "\nProceeding to the next Question.";
				break;
			}
			break;
		case 3:
			option1 = "[1] Python";
			option2 = "[2] C++";
			option3 = "[3] Ruby";
			option4 = "[4] PascalABC";

			sleep_for(seconds(2));
			cout << textcolor <<
				"What Programming Language is this program written on?"
				<< norm;
			sleep_for(seconds(loadingvalue1));
			cout << "\n" << option1;
			sleep_for(seconds(loadingvalue1));
			cout << "\t" << option2;;
			sleep_for(seconds(loadingvalue1));
			cout << "\n" << option3;
			sleep_for(seconds(loadingvalue1));
			cout << "\t" << option4;
			sleep_for(milliseconds(loadingvalue500));
			cout << "\nYour answer: ";
			cin >> answer;
			sleep_for(milliseconds(loadingvalue500));
			cout << "\n\nYour answer is";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(seconds(2));
			if (answer == 2)
			{
				cout << textcolor << "\nRIGHT!" << norm;
				sleep_for(milliseconds(loadingvalue500));
				cout << "\nYour choice was \"C++\"";
				points++;
				sleep_for(seconds(loadingvalue1));
				cout << "\nProceeding to the next Question.";
				break;
			}
			else
			{
				cout << textcolor << "\nWRONG!" << norm;
				lives--;
				sleep_for(milliseconds(loadingvalue500));
				cout << "\nYour choice was \"";
				sleep_for(seconds(loadingvalue1));
				cout << "\nProceeding to the next Question.";
				break;
			}
			break;
		case 4:
			option1 = "[1] Python";
			option2 = "[2] C++";
			option3 = "[3] Ruby";
			option4 = "[4] PascalABC";

			sleep_for(seconds(2));
			cout << textcolor <<
				"What Programming Language is this program written on?"
				<< norm;
			sleep_for(seconds(loadingvalue1));
			cout << "\n" << option1;
			sleep_for(seconds(loadingvalue1));
			cout << "\t" << option2;;
			sleep_for(seconds(loadingvalue1));
			cout << "\n" << option3;
			sleep_for(seconds(loadingvalue1));
			cout << "\t" << option4;
			sleep_for(milliseconds(loadingvalue500));
			cout << "\nYour answer: ";
			cin >> answer;
			sleep_for(milliseconds(loadingvalue500));
			cout << "\n\nYour answer is";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(seconds(2));
			if (answer == 2)
			{
				cout << textcolor << "\nRIGHT!" << norm;
				sleep_for(milliseconds(loadingvalue500));
				cout << "\nYour choice was \"C++\"";
				points++;
				sleep_for(seconds(loadingvalue1));
				cout << "\nProceeding to the next Question.";
				break;
			}
			else
			{
				cout << textcolor << "\nWRONG!" << norm;
				lives--;
				sleep_for(milliseconds(loadingvalue500));
				cout << "\nYour choice was \"";
				sleep_for(seconds(loadingvalue1));
				cout << "\nProceeding to the next Question.";
				break;
			}
			break;
		case 5:
			option1 = "[1] Python";
			option2 = "[2] C++";
			option3 = "[3] Ruby";
			option4 = "[4] PascalABC";

			sleep_for(seconds(2));
			cout << textcolor <<
				"What Programming Language is this program written on?"
				<< norm;
			sleep_for(seconds(loadingvalue1));
			cout << "\n" << option1;
			sleep_for(seconds(loadingvalue1));
			cout << "\t" << option2;;
			sleep_for(seconds(loadingvalue1));
			cout << "\n" << option3;
			sleep_for(seconds(loadingvalue1));
			cout << "\t" << option4;
			sleep_for(milliseconds(loadingvalue500));
			cout << "\nYour answer: ";
			cin >> answer;
			sleep_for(milliseconds(loadingvalue500));
			cout << "\n\nYour answer is";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(seconds(2));
			if (answer == 2)
			{
				cout << textcolor << "\nRIGHT!" << norm;
				sleep_for(milliseconds(loadingvalue500));
				cout << "\nYour choice was \"C++\"";
				points++;
				sleep_for(seconds(loadingvalue1));
				cout << "\nProceeding to the next Question.";
				break;
			}
			else
			{
				cout << textcolor << "\nWRONG!" << norm;
				lives--;
				sleep_for(milliseconds(loadingvalue500));
				cout << "\nYour choice was \"";
				sleep_for(seconds(loadingvalue1));
				cout << "\nProceeding to the next Question.";
				break;
			}
			break;
		case 6:
			option1 = "[1] Python";
			option2 = "[2] C++";
			option3 = "[3] Ruby";
			option4 = "[4] PascalABC";

			sleep_for(seconds(2));
			cout << textcolor <<
				"What Programming Language is this program written on?"
				<< norm;
			sleep_for(seconds(loadingvalue1));
			cout << "\n" << option1;
			sleep_for(seconds(loadingvalue1));
			cout << "\t" << option2;;
			sleep_for(seconds(loadingvalue1));
			cout << "\n" << option3;
			sleep_for(seconds(loadingvalue1));
			cout << "\t" << option4;
			sleep_for(milliseconds(loadingvalue500));
			cout << "\nYour answer: ";
			cin >> answer;
			sleep_for(milliseconds(loadingvalue500));
			cout << "\n\nYour answer is";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(seconds(2));
			if (answer == 2)
			{
				cout << textcolor << "\nRIGHT!" << norm;
				sleep_for(milliseconds(loadingvalue500));
				cout << "\nYour choice was \"C++\"";
				points++;
				sleep_for(seconds(loadingvalue1));
				cout << "\nProceeding to the next Question.";
				break;
			}
			else
			{
				cout << textcolor << "\nWRONG!" << norm;
				lives--;
				sleep_for(milliseconds(loadingvalue500));
				cout << "\nYour choice was \"";
				sleep_for(seconds(loadingvalue1));
				cout << "\nProceeding to the next Question.";
				break;
			}
			break;
		case 7:
			option1 = "[1] Python";
			option2 = "[2] C++";
			option3 = "[3] Ruby";
			option4 = "[4] PascalABC";

			sleep_for(seconds(2));
			cout << textcolor <<
				"What Programming Language is this program written on?"
				<< norm;
			sleep_for(seconds(loadingvalue1));
			cout << "\n" << option1;
			sleep_for(seconds(loadingvalue1));
			cout << "\t" << option2;;
			sleep_for(seconds(loadingvalue1));
			cout << "\n" << option3;
			sleep_for(seconds(loadingvalue1));
			cout << "\t" << option4;
			sleep_for(milliseconds(loadingvalue500));
			cout << "\nYour answer: ";
			cin >> answer;
			sleep_for(milliseconds(loadingvalue500));
			cout << "\n\nYour answer is";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(seconds(2));
			if (answer == 2)
			{
				cout << textcolor << "\nRIGHT!" << norm;
				sleep_for(milliseconds(loadingvalue500));
				cout << "\nYour choice was \"C++\"";
				points++;
				sleep_for(seconds(loadingvalue1));
				cout << "\nProceeding to the next Question.";
				break;
			}
			else
			{
				cout << textcolor << "\nWRONG!" << norm;
				lives--;
				sleep_for(milliseconds(loadingvalue500));
				cout << "\nYour choice was \"";
				sleep_for(seconds(loadingvalue1));
				cout << "\nProceeding to the next Question.";
				break;
			}
			break;
		case 8:
			if (difficulty == 1)
			{
				questions = false;
			}
			option1 = "[1] Python";
			option2 = "[2] C++";
			option3 = "[3] Ruby";
			option4 = "[4] PascalABC";

			sleep_for(seconds(2));
			cout << textcolor <<
				"What Programming Language is this program written on?"
				<< norm;
			sleep_for(seconds(loadingvalue1));
			cout << "\n" << option1;
			sleep_for(seconds(loadingvalue1));
			cout << "\t" << option2;;
			sleep_for(seconds(loadingvalue1));
			cout << "\n" << option3;
			sleep_for(seconds(loadingvalue1));
			cout << "\t" << option4;
			sleep_for(milliseconds(loadingvalue500));
			cout << "\nYour answer: ";
			cin >> answer;
			sleep_for(milliseconds(loadingvalue500));
			cout << "\n\nYour answer is";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(seconds(2));
			if (answer == 2)
			{
				cout << textcolor << "\nRIGHT!" << norm;
				sleep_for(milliseconds(loadingvalue500));
				cout << "\nYour choice was \"C++\"";
				points++;
				sleep_for(seconds(loadingvalue1));
				cout << "\nProceeding to the next Question.";
				break;
			}
			else
			{
				cout << textcolor << "\nWRONG!" << norm;
				lives--;
				sleep_for(milliseconds(loadingvalue500));
				cout << "\nYour choice was \"";
				sleep_for(seconds(loadingvalue1));
				cout << "\nProceeding to the next Question.";
				break;
			}
			break;
		case 9:
			option1 = "[1] Python";
			option2 = "[2] C++";
			option3 = "[3] Ruby";
			option4 = "[4] PascalABC";

			sleep_for(seconds(2));
			cout << textcolor <<
				"What Programming Language is this program written on?"
				<< norm;
			sleep_for(seconds(loadingvalue1));
			cout << "\n" << option1;
			sleep_for(seconds(loadingvalue1));
			cout << "\t" << option2;;
			sleep_for(seconds(loadingvalue1));
			cout << "\n" << option3;
			sleep_for(seconds(loadingvalue1));
			cout << "\t" << option4;
			sleep_for(milliseconds(loadingvalue500));
			cout << "\nYour answer: ";
			cin >> answer;
			sleep_for(milliseconds(loadingvalue500));
			cout << "\n\nYour answer is";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(seconds(2));
			if (answer == 2)
			{
				cout << textcolor << "\nRIGHT!" << norm;
				sleep_for(milliseconds(loadingvalue500));
				cout << "\nYour choice was \"C++\"";
				points++;
				sleep_for(seconds(loadingvalue1));
				cout << "\nProceeding to the next Question.";
				break;
			}
			else
			{
				cout << textcolor << "\nWRONG!" << norm;
				lives--;
				sleep_for(milliseconds(loadingvalue500));
				cout << "\nYour choice was \"";
				sleep_for(seconds(loadingvalue1));
				cout << "\nProceeding to the next Question.";
				break;
			}
			break;
		case 10:
			if (difficulty == 2)
			{
				questions = false;
			}
			option1 = "[1] Python";
			option2 = "[2] C++";
			option3 = "[3] Ruby";
			option4 = "[4] PascalABC";

			sleep_for(seconds(2));
			cout << textcolor <<
				"What Programming Language is this program written on?"
				<< norm;
			sleep_for(seconds(loadingvalue1));
			cout << "\n" << option1;
			sleep_for(seconds(loadingvalue1));
			cout << "\t" << option2;;
			sleep_for(seconds(loadingvalue1));
			cout << "\n" << option3;
			sleep_for(seconds(loadingvalue1));
			cout << "\t" << option4;
			sleep_for(milliseconds(loadingvalue500));
			cout << "\nYour answer: ";
			cin >> answer;
			sleep_for(milliseconds(loadingvalue500));
			cout << "\n\nYour answer is";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(seconds(2));
			if (answer == 2)
			{
				cout << textcolor << "\nRIGHT!" << norm;
				sleep_for(milliseconds(loadingvalue500));
				cout << "\nYour choice was \"C++\"";
				points++;
				sleep_for(seconds(loadingvalue1));
				cout << "\nProceeding to the next Question.";
				break;
			}
			else
			{
				cout << textcolor << "\nWRONG!" << norm;
				lives--;
				sleep_for(milliseconds(loadingvalue500));
				cout << "\nYour choice was \"";
				sleep_for(seconds(loadingvalue1));
				cout << "\nProceeding to the next Question.";
				break;
			}
			break;
		case 11:
			option1 = "[1] Python";
			option2 = "[2] C++";
			option3 = "[3] Ruby";
			option4 = "[4] PascalABC";

			sleep_for(seconds(2));
			cout << textcolor <<
				"What Programming Language is this program written on?"
				<< norm;
			sleep_for(seconds(loadingvalue1));
			cout << "\n" << option1;
			sleep_for(seconds(loadingvalue1));
			cout << "\t" << option2;;
			sleep_for(seconds(loadingvalue1));
			cout << "\n" << option3;
			sleep_for(seconds(loadingvalue1));
			cout << "\t" << option4;
			sleep_for(milliseconds(loadingvalue500));
			cout << "\nYour answer: ";
			cin >> answer;
			sleep_for(milliseconds(loadingvalue500));
			cout << "\n\nYour answer is";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(seconds(2));
			if (answer == 2)
			{
				cout << textcolor << "\nRIGHT!" << norm;
				sleep_for(milliseconds(loadingvalue500));
				cout << "\nYour choice was \"C++\"";
				points++;
				sleep_for(seconds(loadingvalue1));
				cout << "\nProceeding to the next Question.";
				break;
			}
			else
			{
				cout << textcolor << "\nWRONG!" << norm;
				lives--;
				sleep_for(milliseconds(loadingvalue500));
				cout << "\nYour choice was \"";
				sleep_for(seconds(loadingvalue1));
				cout << "\nProceeding to the next Question.";
				break;
			}
			break;
		case 12:
			questions = false;
			option1 = "[1] Python";
			option2 = "[2] C++";
			option3 = "[3] Ruby";
			option4 = "[4] PascalABC";

			sleep_for(seconds(2));
			cout << textcolor <<
				"What Programming Language is this program written on?"
				<< norm;
			sleep_for(seconds(loadingvalue1));
			cout << "\n" << option1;
			sleep_for(seconds(loadingvalue1));
			cout << "\t" << option2;;
			sleep_for(seconds(loadingvalue1));
			cout << "\n" << option3;
			sleep_for(seconds(loadingvalue1));
			cout << "\t" << option4;
			sleep_for(milliseconds(loadingvalue500));
			cout << "\nYour answer: ";
			cin >> answer;
			sleep_for(milliseconds(loadingvalue500));
			cout << "\n\nYour answer is";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(milliseconds(loadingvalue500));
			cout << ".";
			sleep_for(seconds(2));
			if (answer == 2)
			{
				cout << textcolor << "\nRIGHT!" << norm;
				sleep_for(milliseconds(loadingvalue500));
				cout << "\nYour choice was \"C++\"";
				points++;
				sleep_for(seconds(loadingvalue1));
				cout << "\nProceeding to the next Question.";
				break;
			}
			else
			{
				cout << textcolor << "\nWRONG!" << norm;
				lives--;
				sleep_for(milliseconds(loadingvalue500));
				cout << "\nYour choice was \"";
				sleep_for(seconds(loadingvalue1));
				cout << "\nProceeding to the next Question.";
				break;
			}
			break;
		default:
			break;
		}
	} while (questions != false && lives > 0);

	cout << "The End.";
	cin >> _;
	return 0;
}