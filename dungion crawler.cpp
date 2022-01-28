import Module;
#include <string>;
#include <iostream>;


using namespace std;

string d20_in;
int tbl_cmd;
int d20_retuen;

// calling to each tabel needs its own void so that the main is only het central controle loop
// i also need to find a way to make the tables cleaner so i dot need to add whitesapce at the front of arrays
void call(int d20_retuen, string Tabel_1[20])
{
	std::cin >> d20_in;
	d20_retuen = stoi(d20_in);
	cout << d20_retuen << '\n'; // takee this out whe it works more reliably
	cout << Tabel_1[d20_retuen] << "\n";
};

int main()
{
	cout << "selsect rolling tabel \n";
	cout << "table one = 1\n";
	cout << "table two = 2\n";
	cout << "tabel 3 = 4\n";
	cout << "monument tabel = 4 \n";
	int loop = 0;
	int choice = 0;
	while (loop != 10) {
		cout << "to prodice press 1, to leave the dungion press 2 \n";
		cin >> choice;
		if (choice != 1) {
			loop = 10;
		}
		cout << progression << '\n';
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file