#include <iostream>
using namespace std;

// Dimensões do string buffer
#define B 256 // BYTES
#define KB 1 // KILOBYTES

// String buffer
char *string_buffer = new char[B * KB];

// Tamanho do string buffer
int string_buffer_size;

// Última cadeia criada
char **last_string;

// Cadeias criadas
char *strings[16];

// Número Atual de Cadeias
int string_num = 0;

// Obtém o tamanho atual do string buffer 
int getStringBufferSize
()
{
	string_buffer_size = 0;
	
	for(int i = 0; i < (B * KB); i++)
	{
		*(string_buffer + i) == '\0' ? i = (B * KB) : string_buffer_size++;  
	}

	return string_buffer_size + 1;
}


// Obtém o tamanho atual de uma cadeia
int getStringSize
(char *string_,char stop = '\0')
{
	int string_size = 0;

	for(int i = 0; i < (B * KB); i++)
	{
		*(string_ + i) == stop ? i = (B * KB) : string_size++;
	}

	return string_size + 1;
}


// Obtém o tamanho atual de uma (constante) cadeia
int getStringSize
(const char *string_,char stop = '\0',bool realS = 0)
{
	int string_size = 0;

	for(int i = 0; i < (B * KB); i++)
	{
		*(string_ + i) == stop ? i = (B * KB) : string_size++;
	}

	if(realS)
		return string_size;
	else
		return string_size + 1;
}


// Copiar de uma cadeia para outra
void copyTo
(char*root, char*dest, int del = 1)
{

	int root_size = getStringSize(root);

	for(int i = 0; i < root_size; i++)
	{
		dest[i] = root[i];
	}
}


/* A função realiza entrada de conteúdo para string buffer e
aloca dinamicamente uma array de caracteres */
void input
()
{
	cin.getline(string_buffer,(B * KB));
}


// Copia o conteúdo do buffer para o ponteiro especificado
void copyFromBuffer
(char *var)
{	
	for(int i = 0; i < getStringBufferSize(); i++)
	{
		*(var + i) = *(string_buffer + i);
	}
	
}


// Cria uma cadeia vazia
void createString
(char *&var,const char *text = "\0")
{

	int size = 0;

	if(*text != '\0'){
		
		size = getStringSize(text);

		var = new char[size];

		for(int i = 0; i < size; i++)
		{
			var[i] = text[i];
		}
	}
	else
		var = new char;

	strings[string_num] = var;

	string_num++;

}


// Cria uma cadeia e da entrada para ela
void createAndInputOnString
(char *&var)
{
	input();

	var = new char[getStringBufferSize()];
	
	last_string = &(var);

	copyFromBuffer(var);

	strings[string_num] = var;

	string_num++;

}


// Compara duas cadeias
bool compStrs
(char* s1,char* s2)
{
	int chars = 0;

	int size = getStringSize(s1);

	for(int i = 0 ; i < size ; i++)
	{
		if( *(s1 + i) == *(s2 + i))
			chars++;
	}

	if(chars == size)
		return 1;
	else
		return 0;
}


// Remove a última cadeia criada
void delLastString
()
{
	delete [] (*last_string);
}


// Remove uma cadeia especifica
void delThisString
(char *var)
{
	for(int i = 0 ; i < string_num ; i++)
	{
		if(compStrs(strings[i], var))
			delete [](var);

	}

	string_num--;
}


// Remove todas as cadeias criadas
void delStrings
()
{
	for(int i = 0 ; i < string_num ; i++)
	{
		if(strings[i] != 0)
			delete [](strings[i]);

	}

	string_num = 0;
}


// Mostra uma cadeia
void show
(char *text){cout << text << endl;}


// Mostra uma cadeia (constante)
void show
(const char *text){cout << text << endl;}