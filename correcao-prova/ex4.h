float prova4(float A,float B,float C,char tipo){
    float media;
    switch(tipo){

case 'A':
case 'a':
    media = (A+B+C) / 3;
    break;

case 'H':
case 'h':
    media= 3/((1/A)+(1/B)+(1/C));
    break;

case 'P':
case 'p':
    media= (1*A + 2*B + 3*C)/ 6;
    break;

    }

    return media;

}
