// Beecrowd 1168 | LED

    #include<stdio.h>

    int QuantidadeLeds(const char str[]){
        int QtLeds = 0;
        
        for (int i = 0; str[i] != '\0'; i++){
            if (str[i] == '0'){
                QtLeds = QtLeds + 6;
            }
            if (str[i] == '1'){
                QtLeds = QtLeds + 2;
            }
            if (str[i] == '2'){
                QtLeds = QtLeds + 5;
            }
            if (str[i] == '3'){
                QtLeds = QtLeds + 5;
            }
            if (str[i] == '4'){
                QtLeds = QtLeds + 4;
            }
            if (str[i] == '5'){
                QtLeds = QtLeds + 5;
            }
            if (str[i] == '6'){
                QtLeds = QtLeds + 6;
            }
            if (str[i] == '7'){
                QtLeds = QtLeds + 3;
            }
            if (str[i] == '8'){
                QtLeds = QtLeds + 7;
            }
            if (str[i] == '9'){
                QtLeds = QtLeds + 6;
            }
        }

        return QtLeds;
    }

    int main(void){
        int n;
        char str[102];

        scanf("%d", &n);

        while (n--){
            scanf("%s", str);

            printf("%d leds\n", QuantidadeLeds(str));
        }
        
        return 0;
    }