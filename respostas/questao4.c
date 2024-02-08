#include <stdio.h>

int main() {

  float SP=67836.43, RJ=36678.66, MG=29229.88, ES=27165.48, others=19849.53;
  float total = SP+RJ+MG+ES+others;
  float SP_percentual = (SP/total)*100;
  float RJ_percentual = (RJ/total)*100;
  float MG_percentual = (MG/total)*100;
  float ES_percentual= (ES/total)*100;
  float others_percentual = (others/total)*100;

  printf("percentual SP: %.2f%%\n", SP_percentual);
  printf("percentual RJ: %.2f%%\n", RJ_percentual);
  printf("percentual MG: %.2f%%\n", MG_percentual);
  printf("percentual ES: %.2f%%\n", ES_percentual);
  printf("percentual outros: %.2f%%\n", others_percentual);
  
}
