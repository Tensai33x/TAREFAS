#include <stdio.h>
#include <conio.h>

void main()
{
  //valor � a vari�vel que
  //ser� apontada pelo ponteiro
  int valor = 27;
  
  //declara��o de vari�vel ponteiro
  int *ptr;
  
  //atribuindo o endere�o da vari�vel valor ao ponteiro
  ptr = &valor;
  
  printf("Utilizando ponteiros\n\n");
  printf ("Conteudo da variavel valor: %d\n", valor);
  printf ("Endere�o da variavel valor: %x \n", &valor);
  printf ("Conteudo da variavel ponteiro ptr: %x", ptr);
  
  getch();
  return(0);
}
