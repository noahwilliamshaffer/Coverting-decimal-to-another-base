void Convert_int_part(float val, int b) {
    int whole, i n;
    char digits[] ="123456789abcdefghijklmnopqrstuvwxyz";
    
     whole = val;
     
     i = 0;
     
     do {
        d[i] = whole % b;
        whole/=b;
        i++;
     } while(whole != 0);
     
     for(i--; i>= 0; i--)
        printf("%c", digits[d[i]]);
     printf("\n");
     
     }
