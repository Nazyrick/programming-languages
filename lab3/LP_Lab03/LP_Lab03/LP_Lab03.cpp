//UlasevichNazar2001
//УласевичНазар2001
//Уласевич2001Nazar


//55 6C 61 73 65 76 69 63 68 4E 61 7A 61 72 32 30 30 31
//D3 EB E0 F1 E5 E2 E8 F7 CD E0 E7 E0 F0 32 30 30 31
//D3 EB E0 F1 E5 E2 E8 F7 32 30 30 31 4E 61 7A 61 72

//UTF-8
//55 6C 61 73 65 76 69 63 68 4E 61 7A 61 72 32 30 30 31
//D0 A3 D0 BB D0 B0 D1 81 D0 B5 D0 B2 D0 B8 D1 87 D0 9D D0 B0 D0 B7 D0 B0 D1 80 32 30 30 31
//D0 A3 D0 BB D0 B0 D1 81 D0 B5 D0 B2 D0 B8 D1 87 32 30 30 31 4E 61 7A 61 72

//UTF-16
//55 00 6C 00 61 00 73 00 65 00 76 00 69 00 63 00 68 00 4E 00 61 00 7A 00 61 00 72 00 32 00 30 00 30 00 31
//23 04 3B 04 30 04 41 04 35 04 32 04 38 04 47 04 1D 04 30 04 37 04 30 04 40 00 32 00 30 00 30 00 31
//23 04 3B 04 30 04 41 04 35 04 32 04 38 04 47 00 32 00 30 00 30 00 31 00 4E 00 61 00 7A 00 61 00 72
#include <cstdlib>
#include <iostream>
using namespace std;
char* UpperW1251(char* destination, char* source)
{
	for (int i = 0; i < strlen(source); i++)
		if (((source[i] >= 97) && (source[i] <= 122)) || ((source[i] >= -32) && (source[i] <= -1)))
			destination[i] = source[i] - 32;
		else destination[i] = source[i];
	return destination;
}



char lf[] = "UlasevichNazar2001";
char rf[] = "УласевичНазар2001";
char lr[] = "Уласевич2001Nazar";

wchar_t Llp[] = L"UlasevichNazar2001";
wchar_t Lrp[] = L"УласевичНазар2001";
wchar_t Llr[] = L"Уласевич2001Nazar";

int main() {
	setlocale(LC_ALL,"Rus");
	cout << 'L' - 'l' << endl;
	cout << 'F' - 'f' << endl;
	cout << 'S' - 's' << endl;
	cout << 'Б' - 'б' << endl;
	cout << 'Г' - 'г' << endl;
	cout << 'Э' - 'э' << endl;

	char sourse[] = "12345sdfghjlйцгшщз";
	char destination[] = "1234567890123456789";
	UpperW1251(destination, sourse);
	
	std::cout << destination << std::endl;
	system("pause");
	getchar();
	return 0;

}
