#include <iostream>

using namespace std;
#define MAX_SIZE 255
char msg[MAX_SIZE];
char nova_msg[MAX_SIZE];

int encode(char *mensagem, char from_char, char to_char, char *nova_msg);

int main() {
	char from_char;
	char to_char;
	int n_trocas;

	cout << "Digite uma palavra: ";
	cin >> msg;
	cout << "Caractere a ser substituido: ";
	cin >> from_char;
	cout << "Caractere pelo qual deve ser substituido: ";
	cin >> to_char;
}