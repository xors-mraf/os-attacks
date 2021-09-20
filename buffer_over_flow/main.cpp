#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
#define CHAR_SIZE 5
void foo(char * buffer){

char local_variable[CHAR_SIZE];

strcpy(local_variable,buffer);

return;

}

int main() {

char * buffer="buffer baraye neveshtan arraye";

cout << strlen(buffer);
foo(buffer);

return 0;

}
