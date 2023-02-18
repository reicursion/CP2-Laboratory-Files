#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

// create structure for Players
struct Players {
    // members of the Player structure
	string name, nickname;
	int age;
	int h1 = 0, h2 = 0;
	float avg;
};

// function breadcrumbs
void addRecord(Players p[5]);
void viewRecords(Players p[5]);
void computeAverage(Players p[5]);
void minMax(Players p[5], int mn);

// main function
int main() {
    // initialize structure Players
	struct Players p[5];

    // get input for the 5 players
	for (int x = 0; x < 5; x++) {
		cout << "Enter name for player " << x + 1 << ": ";
		getline(cin, p[x].name);
		cout << "Enter nickname for player " << x + 1 << ": ";
		getline(cin, p[x].nickname);
		cout << "Enter age for player " << x + 1 << ": ";
		cin >> p[x].age;
		cin.ignore(1, '\n');
	}

	int setter = 0;
	char pick;

	do {
        // title bar and the menu option
        cout << "=================================================" << endl;
        cout << "\t\t\tMENU" << endl;
        cout << "=================================================" << endl;
        cout << "[1] - Add  Record" << endl;
        cout << "[2] - View Players Records" << endl;
        cout << "[3] - Compute For The Average " << endl;
        cout << "[4] - Show The Player(s) Who Gets The Max Average." << endl;
        cout << "[5] - Show The Player(s) Who Gets The Min Average." << endl;
        cout << "[6] - Exit" << endl;
        cout << "Enter option: ";
        cin >> pick;

        // switch cases for each pick
		switch (pick) {
		case '1':
			addRecord(p);
			system("CLS");
			break;
		case '2':
			viewRecords(p);
			system("CLS");
			break;
		case '3':
			computeAverage(p);
			system("CLS");
			break;
		case '4':
			minMax(p, 1);
			system("CLS");
			break;
		case '5':
			minMax(p, 0);
			system("CLS");
			break;
		case '6':
			setter++;
			break;
		default:
			cout << "Please enter again.";
			system("CLS");
		}
	} while (setter == 0);

	cout << "Thank you for using the program!" << endl;
	return 0;
}

// function for option 1, add record
 void addRecord(Players p[5]){
	int setter = 0;
	int pick, score, y;
	do {
		for (int x = 0; x < 5; x++)
			cout << "[" << x + 1 << "] - " << p[x].name << endl;
		cout << "Enter player to add record to: ";
		cin >> pick;
		switch (pick) {
		case 1: case 2: case 3: case 4: case 5:
			y = pick - 1;
			setter++;
			break;
		default:
			cout << "Please enter again.";
			system("CLS");
		}
	} while (setter == 0);

	do {
		cout << "How many points did " << p[y].name << " score: ";
		cin >> score;

		if (score < 0)
			cout << "Please try again." << endl;
		else
			setter++;
	} while (setter == 1);


	if (score > p[y].h1 && score > p[y].h2) {

		if (p[y].h1 > p[y].h2)
			p[y].h2 = score;
		else
			p[y].h1 = score;
	}

	else if (score > p[y].h1)
		p[y].h1 = score;
	else if (score > p[y].h2)
		p[y].h2 = score;

	getch();
}

// function for option 2, view players records
void viewRecords(Players p[5]) {

	for (int x = 0; x < 5; x++) {
		cout << "Name: " << p[x].name << endl;
		cout << "Nickname: \"" << p[x].nickname << "\"" << endl;
		cout << "Age: " << p[x].age << endl;
		cout << "Highest Scores: " << p[x].h1 << " and " << p[x].h2 << endl;
		cout << endl;
	}
	getch();
}

// function for option 3, compute average
void computeAverage(Players p[5]) {
	for (int x = 0; x < 5; x++) {
		cout << "Name: " << p[x].name << endl;
		cout << "Nickname: \"" << p[x].nickname << "\"" << endl;
		p[x].avg = (p[x].h1 * 1.0 + p[x].h2 * 1.0) / 2;
		cout << "Average High Score: " << p[x].avg << endl;

		cout << endl;
	}
	getch();
}

// function for option4 and 5, getting the minimum and maximum average
void minMax(Players p[5], int mm) {

	float temp, copy[5];

	for (int x = 0; x < 5; x++)
		copy[x] = p[x].avg;


	for (int o = 0; o < 5; o++) {
		for (int v = o + 1; v < 5; v++) {
			if (copy[o] > copy[v]) {

				temp = copy[o];
				copy[o] = copy[v];
				copy[v] = temp;
			}
		}
	}

	float avg;
	if (mm == 1)
		avg = copy[4];
	else
		avg = copy[0];

	int z = 0;
	for (z; z < 5; z++) {
		if (p[z].avg == avg)
			break;
	}

	cout << p[z].name << " scored the ";
	if (mm == 1)
		cout << "highest";
	else
		cout << "lowest";
	cout << " average with " << p[z].avg << " points." << endl;

	getch();
}