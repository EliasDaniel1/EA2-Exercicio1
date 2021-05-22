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

  n_trocas = encode(msg, from_char, to_char, nova_msg);
  cout << nova_msg << endl;
	cout << msg << endl;
	cout << n_trocas << endl;
}

int encode(char *menssagem, char from_char, char to_char, char *nova_msg){
	int counter = 0;
	int msg_index = 0;
	while(menssagem[msg_index] != '\0'){
		if(menssagem[msg_index] == from_char){
			nova_msg[msg_index] = to_char;
			counter++;
		}
		else{
			nova_msg[msg_index] = menssagem[msg_index];
		}
		msg_index++;
	}
	return counter;
}