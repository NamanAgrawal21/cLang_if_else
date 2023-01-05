#include <stdio.h>
void main()
{
    int amt,note2000,note500,note200,note100,note50,note20,note10,note5,note2,note1;
    note2000=note500=note200=note100=note50=note20=note10=note5=note2=note1=0;
    printf("Enter the amount:");
    scanf("%d",&amt);
    if(amt>=2000)
     { note2000=amt/2000;
      amt=amt-(note2000*2000);
     }
    if(amt>=500)
     { note500=amt/500;
      amt=amt-(note500*500);
     }
     if(amt>=100)
     { note100=amt/100;
      amt=amt-(note100*100);
     }
     if(amt>=50)
     { note50=amt/50;
      amt=amt-(note50*50);
     }
     if(amt>=20)
     { note20=amt/20;
      amt=amt-(note20*20);
     }
     if(amt>=10)
     { note10=amt/10;
      amt=amt-(note10*10);
     }
     if(amt>=5)
     { note5=amt/5;
      amt=amt-(note5*5);
     }
     if(amt>=2)
     { note2=amt/2;
      amt=amt-(note2*2);
     }
     if(amt==1)
      note1=amt;
    printf("note2000=%d\nnote500=%d\nnote200=%d\nnote100=%d\nnote50=%d\nnote20=%d\nnote10=%d\nnote5=%d\nnote2=%d\nnote1=%d",note2000,note500,note200,note100,note50,note10,note5,note2,amt);
}