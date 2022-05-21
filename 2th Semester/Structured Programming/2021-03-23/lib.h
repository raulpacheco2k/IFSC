#include <math.h>

float jurosComposto(float C, float I, int T){
  return C * (pow((1 + (I/100)), T));
}

int encontraPalavra(frase, palavra){
	for(i = 0; frase[i] != '\0'; i++) {
	    j++;

	    encontrei = FALSE;

	    if(palavra[j] != frase[i]){
	    	j = -1;
	        continue;
	    }

	    if(palavra[j+1] == '\0'){
	    	palavraEncontrada++;
	        j = -1;
	        encontrei = TRUE;
		}
	        
	    if(frase[i+1] != palavra[0] && encontrei){
	    	i--;
	    }
    }
}