#include <stdio.h>

int Porownanie (int a, int b, int c, int d)


{
    int i = 1; 
    int zysk1 = a;
    int zysk2 = c;         
    
    
    
    while(1)
    {
        zysk1 = zysk1 + a*b/100;
        
        zysk2 = zysk2 + zysk2*d/100; 
        if (zysk2>=zysk1) 
        {
            printf("Ilość lat po których zysk Anny przekroczy wartość inwestycji Ewy: %i \n",i );
            printf("Ewa będzie wtedy miała %i, a Anna %i \n", zysk1, zysk2);
            break;
        }
        else {
            i++;
            continue;
        }
        
    }
}

int main()
{
    Porownanie(1000, 10, 1000, 5);
}