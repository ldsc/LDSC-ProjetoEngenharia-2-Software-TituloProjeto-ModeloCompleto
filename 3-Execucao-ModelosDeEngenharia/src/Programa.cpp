
/** Este programa exemplifica a estrutura/layout de um programa típico em C++ */

// Inclui o arquivo "CAplicacao.h" que tem a declaração da classe CAplicacao
#include "CAplicacao.h"

/// A função main(), retorna um inteiro, se chama main() e nao tem nenhum parametro
int main ()
{
  CAplicacao ap;  // Cria objeto do tipo CAplicacao com nome ap

  ap.Run ();	  // Executa o método Run() do objeto ap

  return 0;	  // A função main() deve retornar um inteiro 
                  // o zero indica que o programa terminou bem.
}

