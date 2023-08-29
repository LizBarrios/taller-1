#include <stdio.h>
int esPrimo(int numero);

int main() 
{
  int contador = 0;  
  int fin;
  printf("ingrese un numero entero y positivo para darle sus numeros primos: \n");
  scanf("%d", &fin);
  for (int x = 0; x <= fin; x++) 
  {
    if (esPrimo(x)) 
    {
      contador++;
      printf("%d,", x);
    }
  }
  return 0;
}

int esPrimo(int numero) 
{
  if (numero == 0 || numero == 1) return 0;
  if (numero == 4) return 0;
  for (int x = 2; x < numero / 2; x++) 
  {
    if (numero % x == 0) return 0;
  }
  return 1;
}