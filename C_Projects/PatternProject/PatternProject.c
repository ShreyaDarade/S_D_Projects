/*******************************************************************************
 * S.G.M.P
 * @File : PatternProject.c
 * @Brief: Demonstration of different patterns using c programming language
 * @Author: Shreya S. Darade(daradeshreya85@gmail.com)
 * @Date: 31-Aug-2025(Sunday) 14:45:35 PM
 * ***************************************************************************/

//Header
#include <stdio.h>

// Global variable definition
int ole = 0;
int ile = 0;
char toPrintCharacter;

// ===================== Function Declarations =====================

void Pattern_101(void);
void Pattern_102(void);
void Pattern_103(void);
void Pattern_104(void);
void Pattern_105(void);
void Pattern_106(void);
void Pattern_107(void);
void Pattern_108(void);
void Pattern_109(void);
void Pattern_110(void);




void Pattern_201(void);
void Pattern_202(void);
void Pattern_203(void);
void Pattern_204(void);
void Pattern_205(void);
void Pattern_206(void);
void Pattern_207(void);
void Pattern_208(void);
void Pattern_209(void);
void Pattern_210(void);
void Pattern_211(void);
void Pattern_212(void);
void Pattern_213(void);
void Pattern_214(void);
void Pattern_215(void);


void Pattern_301(void);
void Pattern_302(void);
void Pattern_303(void);
void Pattern_304(void);
void Pattern_305(void);
void Pattern_306(void);
void Pattern_307(void);
void Pattern_308(void);
void Pattern_309(void);
void Pattern_310(void);
void Pattern_311(void);


void Pattern_401(void);
void Pattern_402(void);
void Pattern_403(void);
void Pattern_404(void);
void Pattern_405(void);
void Pattern_406(void);
void Pattern_407(void);
void Pattern_408(void);
void Pattern_409(void);
void Pattern_410(void);
void Pattern_411(void);
void Pattern_412(void);
void Pattern_413(void);
void Pattern_414(void);
void Pattern_415(void);



void Pattern_501(void);
void Pattern_502(void);
void Pattern_503(void);
void Pattern_504(void);
void Pattern_505(void);
void Pattern_506(void);
void Pattern_507(void);
void Pattern_508(void);
void Pattern_509(void);
void Pattern_510(void);
void Pattern_511(void);
void Pattern_512(void);
void Pattern_513(void);
void Pattern_514(void);
void Pattern_515(void);


void Pattern_601(void);
void Pattern_602(void);
void Pattern_603(void);
void Pattern_604(void);
void Pattern_605(void);
void Pattern_606(void);
void Pattern_607(void);
void Pattern_608(void);
void Pattern_609(void);
void Pattern_610(void);
void Pattern_611(void);
void Pattern_612(void);
void Pattern_613(void);
void Pattern_614(void);
void Pattern_615(void);


void Pattern_701(void);  
void Pattern_702(void); 
void Pattern_703(void); 
void Pattern_704(void); 
void Pattern_705(void);
void Pattern_706(void); 
void Pattern_707(void); 
void Pattern_708(void); 
void Pattern_709(void); 
void Pattern_710(void);
void Pattern_711(void); 
void Pattern_712(void); 
void Pattern_713(void); 
void Pattern_714(void); 
void Pattern_715(void);


void Pattern_801(void); 
void Pattern_802(void); 
void Pattern_803(void); 
void Pattern_804(void); 
void Pattern_805(void);
void Pattern_806(void); 
void Pattern_807(void); 
void Pattern_808(void); 
void Pattern_809(void); 
void Pattern_810(void);
void Pattern_811(void); 
void Pattern_812(void); 
void Pattern_813(void); 
void Pattern_814(void); 
void Pattern_815(void);
void Pattern_816(void);


void Pattern_901(void);
void Pattern_902(void);
void Pattern_903(void);
void Pattern_904(void);
void Pattern_905(void);
void Pattern_906(void);
void Pattern_907(void);
void Pattern_908(void);
void Pattern_909(void);
void Pattern_910(void);
void Pattern_911(void);
void Pattern_912(void);
void Pattern_913(void); 
void Pattern_914(void); 
void Pattern_915(void);

// Entry Point Function
int main(void) 
{
    // code
    
    int assignChoice, patternChoice;

    printf("Select Assignment (1-9): ");
    scanf("%d", &assignChoice);

    switch(assignChoice) {

        case 1:
            printf("Select pattern (1-10): ");
            scanf("%d", &patternChoice);
            switch(patternChoice) {
                case 1:
                        Pattern_101();
                        break;
                case 2:
                        Pattern_102();
                         break; 
                case 3: 
                        Pattern_103();
                         break;
                case 4:
                        Pattern_104(); 
                        break; 
                case 5:
                        Pattern_105(); 
                        break;
                 case 6:
                        Pattern_106(); 
                        break;
                case  7:
                        Pattern_107();
                        break; 
                case  8:
                        Pattern_108();
                        break; 
                case  9:
                        Pattern_109();
                        break;
                case  10:
                        Pattern_110();
                        break; 
                default: printf("Invalid choice!\n");
            }
            break;

        case 2:
            printf("Select pattern (1-15): ");
            scanf("%d", &patternChoice);
            switch(patternChoice) {
                case 1:
                        Pattern_201(); 
                        break;
                case 2:
                        Pattern_202();
                        break; 
                case 3: 
                        Pattern_203();
                         break;
                case 4: 
                        Pattern_204(); 
                         break; 
                case 5: 
                        Pattern_205(); 
                        break; 
                case 6: 
                         Pattern_206(); 
                         break;
                case 7:
                         Pattern_207(); 
                         break; 
                case 8: 
                         Pattern_208(); 
                         break; 
                case 9: 
                        Pattern_209(); 
                          break;
                case 10: 
                         Pattern_210(); 
                          break; 
                case 11: 
                         Pattern_211(); 
                         break;
                case 12: 
                         Pattern_212(); 
                         break;
                case 13: 
                         Pattern_213(); 
                         break;
                case 14: 
                         Pattern_214(); 
                         break; 
                case 15: 
                         Pattern_215(); 
                         break;
                default: printf("Invalid choice!\n");
            }
            break;

       case 3:
            printf("Select pattern (1-11): ");
            scanf("%d", &patternChoice);
            switch(patternChoice) {
                case 1: 
                      Pattern_301(); 
                      break; 
                case 2: 
                      Pattern_302(); 
                      break; 
                case 3: 
                       Pattern_303();
                       break;
                case 4: 
                        Pattern_304(); 
                        break; 
                case 5: 
                        Pattern_305(); 
                        break; 
                case 6: 
                        Pattern_306(); 
                        break;
                case 7: 
                        Pattern_307(); 
                        break; 
                case 8: 
                        Pattern_308(); 
                        break; 
                case 9: 
                        Pattern_309(); 
                        break;
                case 10: 
                        Pattern_310();
                         break; 
                case 11: 
                        Pattern_311(); 
                        break;
                default: 
                        printf("Invalid choice!\n");
            }
            break;  

        case 4:
            printf("Select pattern (1-13): ");
            scanf("%d", &patternChoice);
            switch(patternChoice) {
                case 1: 
                    Pattern_401(); 
                    break; 
                case 2:
                 Pattern_402(); 
                 break; 
                case 3:
                 Pattern_403(); 
                 break;
                case 4: 
                    Pattern_404(); 
                    break; 
                case 5: 
                    Pattern_405(); 
                    break; 
                case 6: 
                    Pattern_406(); 
                    break;
                case 7: 
                    Pattern_407(); 
                    break; 
                case 8: 
                    Pattern_408(); 
                    break; 
                case 9: 
                    Pattern_409(); 
                    break;
                case 10: 
                    Pattern_410(); 
                    break; 
                case 11: 
                    Pattern_411(); 
                    break; 
                case 12: 
                    Pattern_412(); 
                    break;
                case 13: 
                    Pattern_413(); 
                    break;
                default: 
                    printf("Invalid  choice!\n");
            }
            break;

        case 5:
            printf("Select pattern (1-10): ");
            scanf("%d", &patternChoice);
            switch(patternChoice) {
                case 1: 
                      Pattern_501(); 
                      break; 
                case 2:
                       Pattern_502(); 
                       break; 
                case 3: 
                      Pattern_503(); 
                      break;
                case 4: 
                        Pattern_504(); 
                        break; 
                case 5: 
                       Pattern_505(); 
                       break; 
                case 6: 
                       Pattern_506(); 
                       break;
                case 7:  
                       Pattern_507(); 
                       break; 
                case 8: 
                       Pattern_508(); 
                       break; 
                case 9: 
                       Pattern_509(); 
                       break;
                case 10: 
                       Pattern_510(); 
                       break;
                default: 
                       printf("Invalid choice!\n");
            }
            break;

        case 6:
            printf("Select pattern (1-10): ");
            scanf("%d", &patternChoice);
            switch(patternChoice) {
                case 1: 
                       Pattern_601(); 
                       break; 
                case 2: 
                       Pattern_602(); 
                       break; 
                case 3: 
                       Pattern_603(); 
                       break;
                case 4: 
                        Pattern_604(); 
                        break; 
                case 5: 
                        Pattern_605(); 
                        break; 
                case 6: 
                        Pattern_606(); 
                        break;
                case 7: 
                        Pattern_607(); 
                        break; 
                case 8: 
                        Pattern_608(); 
                        break; 
                case 9: 
                       Pattern_609(); 
                       break;
                case 10: 
                        Pattern_610(); 
                        break;
                default: 
                    printf("Invalid choice!\n");
            }
            break;

        case 7:
            printf("Select pattern (1-10): ");
            scanf("%d", &patternChoice);
            switch(patternChoice) {
                case 1: 
                    Pattern_701(); 
                    break; 
                case 2: 
                    Pattern_702(); 
                    break; 
                case 3: 
                    Pattern_703(); 
                    break;
                case 4: 
                    Pattern_704(); 
                    break; 
                case 5: 
                    Pattern_705(); 
                    break; 
                case 6: 
                    Pattern_706(); 
                    break;
                case 7: 
                    Pattern_707(); 
                    break; 
                case 8: 
                    Pattern_708(); 
                    break; 
                case 9: 
                    Pattern_709(); 
                    break;
                case 10: 
                    Pattern_710(); 
                    break;
                default: 
                    printf("Invalid  choice!\n");
            }
            break;

        case 8:
            printf("Select pattern (1-16): ");
            scanf("%d", &patternChoice);
            switch(patternChoice) {
                case 1: 
                    Pattern_801(); 
                    break; 
                case 2: 
                    Pattern_802(); 
                    break;
                case 3: 
                    Pattern_803(); 
                    break;
                case 4: 
                    Pattern_804(); 
                    break; 
                case 5: 
                    Pattern_805(); 
                    break; 
                case 6: 
                    Pattern_806(); 
                    break;
                case 7: 
                    Pattern_807(); 
                    break; 
                case 8: 
                    Pattern_808(); 
                    break; 
                case 9: 
                    Pattern_809(); 
                    break;
                case 10: 
                    Pattern_810(); 
                    break; 
                case 11: 
                    Pattern_811(); 
                    break; 
                case 12: 
                    Pattern_812(); 
                    break;
                case 13: 
                    Pattern_813(); 
                    break; 
                case 14: 
                    Pattern_814(); 
                    break; 
                case 15: 
                    Pattern_815(); 
                    break;
                case 16: 
                    Pattern_816(); 
                    break;
                default: 
                    printf("Invalid  choice!\n");
            }
            break;

         case 9:
            printf("Select pattern (1-8): ");
            scanf("%d", &patternChoice);
            switch(patternChoice) {
                case 1: 
                      Pattern_901(); 
                      break; 
                case 2: 
                      Pattern_902(); 
                      break; 
                case 3: 
                      Pattern_903(); 
                      break;
                case 4: 
                      Pattern_904(); 
                      break; 
                case 5: 
                      Pattern_905(); 
                       break; 
                case 6: 
                       Pattern_906(); 
                       break;
                case 7: 
                       Pattern_907(); 
                       break; 
                case 8: 
                        Pattern_908(); 
                        break;
                default: 
                        printf("Invalid  choice!\n");
            }  
            break;  

        default:
            printf("Invalid assignment choice!\n");
    }

    printf("Program Execution Ended.\n");

    return 0;
}

// ===================== Function Definitions =====================

void Pattern_101(void)
 {
    //Outer Loop
    for(ole = 0;ole < 5; ole++)
    {
        //Outer Loopbody


        //Inner loop
        for(ile = 0;ile < 5; ile++)
        {
            //Inner loopbody

            printf("*  ");

        }


        printf("\n");
    }
 }
void Pattern_102(void)
 {
    //Outer Loop
    for(ole = 0;ole < 5; ole++)
    {
        //Outer Loopbody


        //Inner loop
        for(ile = 0;ile < 5; ile++)
        {
            //Inner loopbody

            printf("%c  ",toPrintCharacter);

        }

            toPrintCharacter = toPrintCharacter + 1;

        printf("\n");
    } 
 }
void Pattern_103(void)
 {
    //Outer Loop
    for(ole = 0;ole < 5; ole++)
    {
        //Outer Loopbody

        toPrintCharacter = 'E';



        //Inner loop
        for(ile = 0;ile < 5; ile++)
        {
            //Inner loopbody

            printf("%c  ",toPrintCharacter);

            toPrintCharacter = toPrintCharacter - 1;

        }   
            

            printf("\n");
        
    }
 }
void Pattern_104(void)
{
    //Outer Loop
    for(ole = 0; ole < 5; ole++)
    {
        //Outer Loopbody

        toPrintCharacter = 'A';


        //Inner Loop
        for(ile = 0; ile < 5; ile++)
        {
            //Inner Loopboday

            printf("%c   ",toPrintCharacter);

            toPrintCharacter = toPrintCharacter + 1;
        }

        printf("\n");
    }
}
void Pattern_105(void)
{
    //Outer loop
    for(ole = 0; ole < 5; ole++)
    {
        //Outer Loopbody


        //inner loop
        for(ile = 0; ile < 5; ile++)
        {
            //inner loopbody

            printf("%c     ",toPrintCharacter);
        }

        toPrintCharacter = toPrintCharacter - 1;

        printf("\n");
    }
} 
void Pattern_106(void) 
{
    //Outer Loop
    for(ole = 0;ole < 5; ole++)
    {
        //Outer Loopbody


        //Inner loop
        for(ile = 0;ile < 5; ile++)
        {
            //Inner loopbody

            printf("%c  ", toPrintCharacter);

        }

        toPrintCharacter = toPrintCharacter + 1;


        printf("\n");
    }
}
void Pattern_107(void)
{
    //Outer Loop
    for(ole = 0; ole < 5; ole++)
    {
        //Outer Loopbody

        toPrintCharacter = '5';

        //Inner Loop

        for(ile = 0; ile < 5; ile++)
        {
            //Inner Loopbody

            printf("%c   ",toPrintCharacter);

            toPrintCharacter = toPrintCharacter - 1; 

        }

        printf("\n");
    }
} 
void Pattern_108(void) 
{
    //Outer Loop
    for(ole = 0; ole < 5; ole++)
    {
        //Outer Loopbody

        toPrintCharacter = '1';

        //Inner Loop

        for(ile = 0; ile < 5; ile++)
        {
            //Inner Loopbody

            printf("%c   ",toPrintCharacter);

            toPrintCharacter = toPrintCharacter + 1; 

        }

        printf("\n");
    }
}
void Pattern_109(void) 
{
    //Outer Loop
    for(ole = 0;ole < 5; ole++)
    {
        //Outer Loopbody


        //Inner loop
        for(ile = 0;ile < 5; ile++)
        {
            //Inner loopbody

            printf("%c  ", toPrintCharacter);

        }

        toPrintCharacter = toPrintCharacter - 1;


        printf("\n");
    }
}
void Pattern_110(void) 
{
    //Outer Loop

    for(ole = 0; ole < 5; ole++)
    {
        //Outer Loopbody

        if(ole == 0 || ole == 4)
        {
            toPrintCharacter = '1';
            for(ile = 0; ile < 5; ile++)
            {
                printf("%c    ",toPrintCharacter);
            }
        }

        else if(ole == 1 || ole == 3)
        {
            toPrintCharacter = 'A';
            for(ile = 0; ile < 5; ile++)
            {
                printf("%c    ",toPrintCharacter);
                toPrintCharacter = toPrintCharacter + 1;
            }
        }

        else if(ole == 2)
        {
            toPrintCharacter = '*';
            for(ile = 0; ile < 5; ile++)
            {
                printf("%c    ",toPrintCharacter);
            }
        }

        printf("\n");
    }
}

void Pattern_201(void)
{
    //Outer Loop
    for(ole = 1; ole <= 6; ole++)
    {
        //Inner Loop
        for(ile = 1; ile <= ole; ile++)
        {
            printf("%c     ", toPrintCharacter);
        }

        printf("\n");
    }
}

void Pattern_202(void)
{
    //Outer Loop
    for(ole = 1; ole <= 5; ole++)
    {
        //Outer Loopbody

        //Inner Loop
        for(ile = 1; ile <= ole; ile++)
        {
            //Inner Loopbody
            printf("%d      ");
        }

    

        printf("\n");
    }

}

void Pattern_203(void)
{
    //Outer Loop
    for(ole = 1;ole <= 5; ole++)
    {
        //Outer Loopbody


        //Inner loop
        for(ile = 1;ile <= ole; ile++)
        {
            //Inner loopbody

            printf("%c  ", toPrintCharacter);

        }

        toPrintCharacter = toPrintCharacter + 1;


        printf("\n");
    }
}

void Pattern_204(void)
{
    //Outer Loop
    for(ole = 1;ole <= 5; ole++)
    {
        //Outer Loopbody


        //Inner loop
        for(ile = 1;ile <= ole; ile++)
        {
            //Inner loopbody

            printf("%c  ", toPrintCharacter);

        }

        toPrintCharacter = toPrintCharacter + 1;


        printf("\n");
    }
}

void Pattern_205(void)
{
     //Outer Loop
    for(ole = 1; ole <= 5; ole++)
    {
        //Outer Loopbody
        toPrintCharacter = 'A';

        //Inner Loop
        for(ile = 1; ile <= ole; ile++)
        {
            printf("%c\t", toPrintCharacter);
            toPrintCharacter = toPrintCharacter + 1;
        }

        printf("\n");
    }

}

void Pattern_206(void)
{
     //Outer Loop
    for(ole = 1; ole <= 6; ole++)
    {
        //Inner Loop
        for(ile = 1; ile <= (7 - ole); ile++)
        {
            //Inner loopbody
            printf("*  ");
        }

        printf("\n");
    }
}


void Pattern_207(void)
{
    //Outer Loop    
    for(ole = 1; ole <= 5; ole++)
    {   

        //Outer loopbody
        
        printf("  ");

         //Inner loop
        for(ile = 1; ile <= (6 - ole); ile++)
        {
            //Inner Loopbody

            printf("%d  ", (6 - ole));
        }

    
        printf("\n");
    }
}

void Pattern_208(void)
{
    // Outer loop
    for(ole = 1; ole <= 5; ole++)
    {
        //Outer Loopbody
        printf("  ");

        toPrintCharacter = 'A';

        // Inner loop
        for(ile = 1; ile <= (6 - ole); ile++)
        {
            //Inner Loopbody
            printf("%c ", toPrintCharacter);

            toPrintCharacter = toPrintCharacter + 1;
        }

        printf("\n");
    }
}

void Pattern_209(void)
{
    // Outer loop
    for(ole = 1; ole <= 5; ole++)
    {
        //Outer Loopbody
        
        printf("  ");

        toPrintCharacter = 'E';

        // Inner loop
        for(ile = 1; ile <= (6 - ole); ile++)
        {
            //Inner loopbody

            printf("%c  ", toPrintCharacter);
            toPrintCharacter--;
        }

        printf("\n");
    }
}

void Pattern_210(void)
{
    // Outer loop
    for(ole = 1; ole <= 5; ole++)
    {
        //Oter Loopbody
        printf("  ");

        // Inner Loop
        for(ile = 1; ile <= (6 - ole); ile++)
        {
            //Inner Loopbody
            printf("%c  ", toPrintCharacter);
        }

        toPrintCharacter++;

        printf("\n");
    }

}

void Pattern_211(void)
{
    // Outer loop
    for(ole = 1; ole <= 5; ole++)
    {
        //Outer Loopbody
        
        printf("  ");

        // Inner loop
        for(ile = 1; ile <= (6 - ole); ile++)
        {
            //Inner loopbody
            printf("%d  ", ile);
        }

        printf("\n");
    }
}

void Pattern_212(void)
{
    //Outer Loop
    for(ole = 1; ole <= 5; ole++)
    {
        //Outer Loopbody
        printf(" ");

        //Inner Loop
        for(ile = 1; ile <= (6 - ole); ile++)
        {  
            //Inner loopbody
            printf("%c ", toPrintCharacter);
        }

        toPrintCharacter = toPrintCharacter - 1;

        printf("\n");
    }

}

void Pattern_213(void)
{
    //Outer Loop
    for(ole = 1; ole <= 5; ole++)
    {
        //Outer Loopbody
        printf(" ");

        //Inner Loop
        for(ile = 5; ile >= ole; ile--)
        {
            printf("%d ", ile);
        }

        printf("\n");
    }
}

void Pattern_214(void)
{
    //Outer Loop
    for(ole = 1; ole <= 5; ole++)
    {
        //Inner Loop
        for(ile = 1; ile <= 6 - ole; ile++)
        {
            if(ile == ole)
                printf("\\ ");
            else if(ile < ole)
                printf("$ ");
            else
                printf("# ");
        }

        printf("\n");
    }

}

void Pattern_215(void)
{
    //Outer Loop
    for(ole = 1; ole <= 5; ole++)
    {
        //Inner Loop
        for(ile = 1; ile <= ole; ile++)
        {
            //Inner loopbody
            if(ile == 1)   
            {
                if(ole == 5)
                    printf("/ ");
                else
                    printf("| ");
            }
            else if((ole == 3 && ile == 3) || (ole == 4 && ile == 2))
            {
                printf("/ ");
            }
            else if((ole == 4 && ile > 2) || (ole == 5 && ile > 1))
            {
                printf("_ ");
            }
            else
            {
                printf("| ");
            }
        }

        printf("\n");
    }
}


void Pattern_301(void)
{
    //Outer Loop
    for(ole = 3; ole >= 0; ole--)
    {
        //Outer Loopbody
        for(ile = ole; ile <= 3; ile++)
        {
            
            printf("%d   ", ile);
        }
        printf("\n");
    }

    //Inner Loop
    for(ole = 1; ole <= 3; ole++)
    {
        //Inner Loopbody
        for(ile = ole; ile <= 3; ile++)
        {
            //Inner loopbody
            printf("%d   ", ile);
        }
        printf("\n");
    }
}
void Pattern_302(void)
{
    //Outer loop
    for(ole = 1; ole <= 5; ole++)
    {
        //Outer Loopbody
        for(ile = 1; ile <= ole; ile++)
        {
            
            printf("*  ");
        }
        printf("\n");
    }

    //Inner loop
    for(ole = 4; ole >= 1; ole--)
    {
        //Inner Loopbody
        for(ile = 1; ile <= ole; ile++)
        {
            //Inner loopbody
            printf("*  ");
        }
        printf("\n");
    }
}
void Pattern_303(void)
{
     //Outer Loop
    for(ole = 0; ole <= 3; ole++)
    {
        //Outer Loopbody
        for(ile = 3; ile >= 3 - ole; ile--)
        {
            
            printf("%d   ", ile);
        }
        printf("\n");
    }

    //Inner Loop
    for(ole = 2; ole >= 0; ole--)
    {
        //Inner Loopbody
        for(ile = 3; ile >= 3 - ole; ile--)
        {
            
            printf("%d   ", ile);
        }
        printf("\n");
    }
}
void Pattern_304(void)
{
    for (ole = 1; ole <= 5; ole++)
    {
        for (ile = 1; ile <= ole; ile++)
        {
            if (ole % 2 == 0)
            {
                printf("%d\t", ole - ile + 1);
            }
            else
            {
                printf("%d\t", ile);
            }
        }
        printf("\n");
    }

    
    for (ole = 4; ole >= 1; ole--)
    {
        for (ile = 1; ile <= ole; ile++)
        {
            if (ole % 2 == 0)
            {
                printf("%d\t", ole - ile + 1);
            }
            else
            {
                printf("%d\t", ile);
            }
        }
        printf("\n");
    }
}
void Pattern_305(void)
{
     for (ole = 1; ole <= 4; ole++)
    {
        for (ile = 1; ile <= ole; ile++)
        {
            printf("%c\t", 'E' - ole + ile); 
                   }
        printf("\n");
    }

    
    for (ole = 3; ole >= 1; ole--)
    {
        for (ile = 1; ile <= ole; ile++)
        {
            printf("%c\t", 'E' - ole + ile);
        }
        printf("\n");
    }
}
void Pattern_306(void)
{
    for (ole = 1; ole <= 4; ole++)
    {
        for (ile = 1; ile <= 4 - ole; ile++)
        {
            printf("\t");  
        }
        for (ile = 1; ile <= ole; ile++)
        {
            printf("%c\t", 'D' - ole + ile); 
        }
        printf("\n");
    }

    
    for (ole = 3; ole >= 1; ole--)
    {
        for (ile = 1; ile <= 4 - ole; ile++)
        {
            printf("\t");
        }
        for (ile = 1; ile <= ole; ile++)
        {
            printf("%c\t", 'D' - ole + ile);
        }
        printf("\n");
    }
}
void Pattern_307(void)
{
    for (ole = 1; ole <= 4; ole++)
    {
        for (ile = 1; ile <= 4 - ole; ile++)
        {
            printf("\t");   
        }
        for (ile = 3; ile >= 4 - ole; ile--)
        {
            printf("%d\t", ile);   
        }
        printf("\n");
    }

    
    
    for (ole = 3; ole >= 1; ole--)
    {
        for (ile = 1; ile <= 4 - ole; ile++)
        {
            printf("\t");
        }
        for (ile = 3; ile >= 4 - ole; ile--)
        {
            printf("%d\t", ile);
        }
        printf("\n");
    }
}
void Pattern_308(void)
{
    for (ole = 1; ole <= 5; ole++)
    {
        for (ile = 1; ile <= 5 - ole; ile++)
        {
            printf("\t");   // spaces
        }
        for (ile = 1; ile <= ole; ile++)
        {
            printf("*\t");
        }
        printf("\n");
    }


    for (ole = 4; ole >= 1; ole--)
    {
        for (ile = 1; ile <= 5 - ole; ile++)
        {
            printf("\t");
        }
        for (ile = 1; ile <= ole; ile++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}
void Pattern_309(void)
{
    for (ole = 1; ole <= 4; ole++)
    {
        for (ile = 1; ile <= 4 - ole; ile++)
        {
            printf("\t");   // spaces
        }
        for (ile = 0; ile < ole; ile++)
        {
            printf("%c\t", 'D' - ile);
        }
        printf("\n");
    }



    for (ole = 3; ole >= 1; ole--)
    {
        for (ile = 1; ile <= 4 - ole; ile++)
        {
            printf("\t");
        }
        for (ile = 0; ile < ole; ile++)
        {
            printf("%c\t", 'D' - ile);
        }
        printf("\n");
    }

}
void Pattern_310(void)
{
    for (ole = 3; ole >= 0; ole--)
    {
        for (ile = 1; ile <= ole; ile++)
        {
            printf("\t");  
        }
        for (ile = ole; ile <= 3; ile++)
        {
            printf("%d\t", ile);
        }
        printf("\n");
    }


    for (ole = 1; ole <= 3; ole++)
    {
        for (ile = 1; ile <= ole; ile++)
        {
            printf("\t");
        }
        for (ile = ole; ile <= 3; ile++)
        {
            printf("%d\t", ile);
        }
        printf("\n");
    }
}
void Pattern_311(void)
{
    for (ole = 0; ole <= 3; ole++)
    {
        for (ile = 0; ile <= ole; ile++)
        {
            printf("%c\t", 'D' - ile);
        }
        printf("\n");
    }

    for (ole = 1; ole <= 3; ole++)
    {
        for (ile = 0; ile <= 3 - ole; ile++)
        {
            printf("%c\t", 'D' - ile);
        }
        printf("\n");
    }
}





void Pattern_401(void)
{
    //Outer Loop
    for(ole = 0; ole < 7; ole++)
    {
        //Outer Loopbody
        toPrintCharacter = 'D';

        //Inner Loop
        for(ile = 0; ile < 7; ile++)
        {
            //Inner Loopbody
            if(ole <= 3)
            {
                if(ile <= ole)
                {
                    printf("%c  ", toPrintCharacter);
                    toPrintCharacter = toPrintCharacter - 1;
                }
                else
                    printf("   ");
            }
            else
            {
                if(ile <= 6 - ole)
                {
                    printf("%c  ", toPrintCharacter);
                    toPrintCharacter = toPrintCharacter - 1;
                }
                else
                    printf("   ");
            }
     }   }
}
void Pattern_402(void)
{
    //Outer Loop
    for(ole = 0; ole < 5; ole++)
    {   
        int toPrintNumber;
        //Outer Loopbody

        //Inner loop
        for(ile = 0; ile < 5 - ole; ile++)
        {
            //Inner loopbody
            printf("%d  ", toPrintNumber);
        }

        toPrintNumber = toPrintNumber + 1;

        printf("\n");
    }
}
void Pattern_403(void)
{
    int toPrintNumber;
    //Outer Loop
    for(ole = 1; ole <= 5; ole++)
    {
        //Outer Loopbody

        //Inner loop 
        for(ile = 1; ile <= 5 - ole; ile++)
        {
            printf("  ");  
        }

        toPrintNumber = ole;

        //Inner loop 
        for(ile = 1; ile <= ole; ile++)
        {
            printf("%d ", toPrintNumber);
        }   

        printf("\n");
    }
}
void Pattern_404(void)
{
    //Outer Loop
    for(ole = 1; ole <= 5; ole++)
    {
        //Outer Loopbody

        //Inner loop 
        for(ile = 1; ile <= 5 - ole; ile++)
        {
            printf("  ");   
        }

        toPrintCharacter = 'A';

        //Inner loop
        for(ile = 1; ile <= ole; ile++)
        {
            printf("%c ", toPrintCharacter);

            toPrintCharacter = toPrintCharacter + 1;
        }   

        printf("\n");
    }
}
void Pattern_405(void)
{
    int toPrintNumber;
    //Outer Loop
    for(ole = 0; ole < 5; ole++)
    {
        //Outer Loopbody

        //Inner loop 
        for(ile = 0; ile < ole; ile++)
        {
            printf("  ");   
        }

        toPrintNumber = 1;

        //Inner loop
        for(ile = 0; ile < 5 - ole; ile++)
        {
            printf("%d ", toPrintNumber);
            toPrintNumber = toPrintNumber + 1;
        }   

        printf("\n");
    }
}
void Pattern_406(void)
{   

    for(ole = 0; ole < 5; ole++)  // Rows
    {

        for(ile = 0; ile < 5 - ole - 1; ile++)
        {
            printf("\t");
        }


        for(ile = 0; ile <= ole; ile++)
        {
            printf("%c\t", 'A' + ole);
        }

        printf("\n");
    }


}

   
void Pattern_407(void)
{
    int arr[4][4] = {
        {1, 2, 4, 8},
        {7, 5, 1, 2},
        {4, 8, 7, 5},
        {1, 2, 4, 8}
    };


    for(ole = 0; ole < 4; ole++)   
    {
        for(ile = 0; ile < 4; ile++)   
        {
            printf("%d\t", arr[ole][ile]);
        }
        printf("\n");
    }

}

void Pattern_408(void)
{
    //Outer Loop
    for(ole = 0; ole < 5; ole++)
    {
        //Outer Loopbody

        //Inner loop 
        for(ile = 0; ile < ole; ile++)
        {
            printf("  ");   
        }

        toPrintCharacter = 'A';

        //Inner Loop 
        for(ile = 0; ile < 5 - ole; ile++)
        {
            printf("%c ", toPrintCharacter);
            toPrintCharacter = toPrintCharacter + 1;
        }

        printf("\n");
    }

}
void Pattern_409(void)
{
    //Outer Loop
    for(ole = 1; ole <= 5; ole++)
    {
        //Outer Loopbody

        //Inner loop 
        for(ile = 1; ile <= 5 - ole; ile++)
        {
            printf("  ");   
        }

        //Inner Loop
        for(ile = 1; ile <= ole; ile++)
        {
            printf("* ");
        }

        printf("\n");
    }

}
void Pattern_410(void)
{ 
    int toPrintNumber;
    //Outer Loop 
    for(ole = 1; ole <= 5; ole++)
    {

        for(ile = 1; ile < ole; ile++)
        {
            printf("  ");
        }

        toPrintNumber = 6 - ole;

        for(ile = 1; ile <= (6 - ole); ile++)
        {
            printf("%d ", toPrintNumber);
        }

        printf("\n");
    }
}
void Pattern_411(void)
{
    //Outer Loop
    for(ole = 1; ole <= 5; ole++)
    {

        for(ile = 1; ile < ole; ile++)
        {
            printf("  ");
        }

        for(ile = ole; ile <= 5; ile++)
        {
            printf("* ");
        }

        printf("\n");
    }

}
void Pattern_412(void)
{
    int toPrintNumber;
    //Outer Loop
    for(ole = 1; ole <= 5; ole++)
    {
    
        for(ile = ole; ile < 5; ile++)
        {
            printf("  ");
        }

        for(toPrintNumber = 1; toPrintNumber <= ole; toPrintNumber++)
        {
            printf("%d ", toPrintNumber);
        }

        printf("\n");
    }
}
void Pattern_413(void)
{
    //Outer Loop
    for(ole = 0; ole < 5; ole++)
    {
        for(ile = 0; ile < ole; ile++)
        {
            printf("  ");
        }

        toPrintCharacter = 'E' - ole;

     for(ile = ole; ile < 5; ile++)
        {
            printf("%c ", toPrintCharacter);
        }

        printf("\n");
    }
}


void Pattern_501(void)
{
    // Outer Loop for rows
    for(ole = 0; ole < 5; ole++)
    {
        // Inner loop for columns
        for(ile = 0; ile < 9; ile++) 
        {
            if(ile >= 4 - ole && ile <= 4 + ole)
            {
                printf("%d\t", (2 * ole + 1) - (ile - (4 - ole)));
            }
            else
            {
                printf("\t");
            }
        }

        printf("\n");
    }
}
void Pattern_502(void)
{
    // Outer Loop
    for(ole = 0; ole < 5; ole++)
    {
        //Outer Loopbody

        // Inner Loop
    for(ile = 0; ile < 9; ile++)
    {
        // Inner loopbody

        if(ile >= 4-ole && ile <= 4 + ole)
        {
            printf("*\t");
        }

        else
        {
            printf("\t");
        }
    }

    printf("\n");


    }



    printf("\n");
}
void Pattern_503(void)
{
    for(ole = 0; ole < 5; ole++)
    {
        for(ile = 0; ile < 9; ile++) 
        {
            if(ile >= 4 - ole && ile <= 4 + ole)
            {
                int num = ile - (4 - ole); 
                  
                  if(num <= ole)
                {
                    toPrintCharacter = 'A' + ole - num;
                }
            else
                {
                    toPrintCharacter = 'A' + num - ole;
                }

                    printf("%c\t", toPrintCharacter);
            }
            else
            {
                  printf("\t");
            }
        }
        printf("\n");
    }
}
void Pattern_504(void)
{
    // Outer loop for rows
    for(ole = 0; ole < 5; ole++)
    {
        // Inner loop for columns 
        for(ile = 0; ile < 9; ile++)
        {
            if(ile >= 4 - ole && ile <= 4 + ole)
            {

                if(ile <= 4)
                   { 
                    toPrintCharacter = 'A' + ole - (4 - ile); 
                   }
                else
                   { 
                    toPrintCharacter = 'A' + ole - (ile - 4);
                    } 

                printf("%c\t", toPrintCharacter);
            }
            else
            {
                printf("\t");
            }
        }

        printf("\n");
    }
}
void Pattern_505(void)
{
    int toPrintNumber;
    for(ole = 0; ole < 5; ole++) // rows
    {
        for(ile = 0; ile < 9; ile++) // col
        {
            if(ile >= 4 - ole && ile <= 4 + ole) 
            {
                if(ile <= 4)
                {
                    toPrintNumber = ile - (4 - ole) + 1;
                }
                else
                {
                    toPrintNumber = 4 + ole - ile + 1;
                }

                printf("%d\t", toPrintNumber);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}
void Pattern_506(void)
{
    for(ole = 0; ole < 5; ole++) // rows
    {
           for(ile = 0; ile < 9; ile++) // col
        {
            if(ile >= 4 - ole && ile <= 4 + ole) 
            {
                toPrintCharacter = 'A' + 2*ole - (ile - (4 - ole));


                printf("%c\t", toPrintCharacter);
            }
        else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}
void Pattern_507(void)
{
    for(ole = 0; ole < 5; ole++) // rows
    {
        for(ile = 0; ile < 9; ile++) // column
        {
            if(ile >= 4 - ole && ile <= 4 + ole) 
            {
                toPrintCharacter = 'A' + ole;

                   printf("%c\t", toPrintCharacter);
            }
            else
            {
                  printf("\t");
            }
        }
        printf("\n");
    }

}
void Pattern_508(void)
{
    int toPrintNumber;

    for(ole = 0; ole < 5; ole++) // rows
    {
        for(ile = 0; ile < 9; ile++) // col
        {
            if(ile >= 4 - ole && ile <= 4 + ole) 
            {
                toPrintNumber = 2 * ole + 1;

                     printf("%d\t", toPrintNumber);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}
void Pattern_509(void)
{
    int toPrintNumber;

    for(ole = 0; ole < 5; ole++) // rows
    {
        for(ile = 0; ile < 9; ile++) // col

        { 
            if(ile >= 4 - ole && ile <= 4 + ole) 
            {
        
        
                toPrintNumber = ile - (4 - ole) + 1;
                printf("%d\t", toPrintNumber);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}
void Pattern_510(void)
{
    int toPrintNumber;

     for(ole = 0; ole < 5; ole++) // rows
    {
        for(ile = 0; ile < 9; ile++) // column
        {
            if(ile >= ole && ile <= 8 - ole) 
            {
                toPrintNumber = 5 - ole;

                printf("%d\t", toPrintNumber);

            }
                else
            {
                  printf("\t");
            }
        }
        printf("\n");
    }
}

void Pattern_601(void)
{
    int toPrintNumber;

    for(ole = 0; ole < 5; ole++) 
    {
        for(ile = 0; ile < 9; ile++) 
        {
            if(ile >= ole && ile <= 8 - ole)
            {
                toPrintNumber = 9 - (2 * ole);

                printf("%d\t", toPrintNumber);
            }
            
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}
void Pattern_602(void)
{
    for(ole = 0; ole < 5; ole++) // rows
    {

        for(ile = 0; ile < (4 - ole); ile++)
        {
            printf("\t");
        }

        for(ile = 0; ile <= (2 * ole); ile++)  // col
        {
            if(ile <= ole)
            {
            
                printf("%d\t", ole - ile);
            }
            else
            {
        
                printf("%d\t", ile - ole);
            }
        }

        printf("\n");
    }
}
void Pattern_603(void)
{
    for(ole = 0; ole < 5; ole++) 
    {
        for(ile = 0; ile < 9; ile++) 

        {
    
            if(ile >= (4 - ole) && ile <= (4 + ole))
            {
                printf("%c\t", toPrintCharacter);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");



        toPrintCharacter = toPrintCharacter + 2;
    }
}
void Pattern_604(void)
{
    for(ole = 0; ole < 5; ole++)   

    {
        toPrintCharacter = 'A';    

        for(ile = 0; ile < 9; ile++) 
        {
            if(ile >= ole && ile <= (8 - ole))
            {
                printf("%c\t", toPrintCharacter);

                    toPrintCharacter++;
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }

}
void Pattern_605(void)
{ 
    int toPrintNumber;
    for(ole = 0; ole < 5; ole++)   
    {
        toPrintNumber = 1;  

        for(ile = 0; ile < 9; ile++)   
        {
            if(ile >= ole && ile <= (8 - ole))
            {
                printf("%d\t", toPrintNumber);
                toPrintNumber++;
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}
void Pattern_606(void)
{
    for(ole = 0; ole < 5; ole++)   // rows
    {
        toPrintCharacter = 'E' - ole;  

        for(ile = 0; ile < 9; ile++)  // col
        {
            if(ile >= ole && ile <= (8 - ole))
            {
               
                printf("%c\t", toPrintCharacter);
            }

            else
            {
                printf("\t");
            }
        }

        printf("\n");
    }
}
void Pattern_607(void)
{
    for(ole = 0; ole < 5; ole++)   // rows
    {
        for(ile = 0; ile < 9; ile++)   //  columns
        {
            if(ile >= ole && ile <= (8 - ole))
            {
               
                printf("*\t");
            }
            else
            {
                
                printf("\t");
            }
        }
        
        printf("\n");
    }
}
void Pattern_608(void)
{
    //rows
    for(ole = 0; ole < 5; ole++)
    {
        //columns
        for(ile = 0; ile < 9; ile++)
        {
            if(ile >= (4 - ole) && ile <= (4 + ole))
            {

                printf("%d\t", ole + 1);
            }
            else
            {

                printf("\t");
            }
        }
        
        printf("\n");
    }
}
void Pattern_609(void)
{
    // rows
    for(ole = 0; ole < 5; ole++)
    {
        toPrintCharacter = 'A';  

        //columns
        for(ile = 0; ile < 9; ile++)
        {
            if(ile >= (4 - ole) && ile <= (4 + ole))
            {
                printf("%c\t", toPrintCharacter);

                toPrintCharacter++;
            }
            else
            {
                printf("\t");
            }
        }
        
        printf("\n");
    }
}
void Pattern_610(void)
{
    for(ole = 0; ole < 5; ole++)
    {
    
        toPrintCharacter = 'I' - (ole * 2);

    
        for(ile = 0; ile < 9; ile++)
        {
            if(ile >= ole && ile <= (8 - ole))
            {

                printf("%c\t", toPrintCharacter);
            }
            else
            {
                
                printf("\t");
            }
        }
        printf("\n");
    }
}

void Pattern_701(void)
{
    for(ole = 0; ole < 5; ole++)
    {
        for(ile = 0; ile < 9; ile++)
        {
            if(ile == 4 - ole || ile == 4 + ole)    
            {
                printf("%d", 5 - ole);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
void Pattern_702(void)
{
    for(ole = 0; ole < 5; ole++)
    {
        for(ile = 0; ile < 9; ile++)
        {
            if(ile == ole || ile == 8 - ole)
            {
                printf("*");
            }

            else
            {
                
                printf("  ");
            }
        }
        printf("\n");
    }
}
void Pattern_703(void)
{
    for(ole = 0; ole < 5; ole++)
    {
        for(ile = 0; ile < 9; ile++)
        {
            if(ile == 4 - ole || ile == 4 + ole)   
            {
                printf("%c", 'E' - ole);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
void Pattern_704(void)
{
    for(ole = 0; ole < 5; ole++)
    {
        for(ile = 0; ile < 9; ile++)
        {
            if(ile == ole || ile == 8 - ole)
            {
                printf("%d", ole + 1);
            }
            else
            {
                
                printf("  ");
            }
        }
        printf("\n");
    }
}
void Pattern_705(void)
{
    for(ole = 0; ole < 5; ole++)
    {
        for(ile = 0; ile < 9; ile++)
        {
            if(ile == 4 - ole || ile == 4 + ole) 
            {
                printf("%d", ole + 1);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
void Pattern_706(void)
{
    for(ole = 0; ole < 5; ole++)
    {
        for(ile = 0; ile < 9; ile++)
        {
            if(ile == 4 - ole || ile == 4 + ole)   
            {
                printf("%c", 'A' + ole);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
void Pattern_707(void)
{
     for(ole = 0; ole < 5; ole++)
    {
        for(ile = 0; ile < 9; ile++)
        {
            if(ile == ole || ile == 8 - ole)
            {
                printf("%c", 'A' + ole);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

}
void Pattern_708(void)
{
    for(ole = 0; ole < 5; ole++)
    {
        for(ile = 0; ile < 9; ile++)
        {
            if(ile == 4 - ole || ile == 4 + ole)  
            {
                printf("*");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

}
void Pattern_709(void)
{
    for(ole = 0; ole < 5; ole++)
    {
        for(ile = 0; ile < 9; ile++)
        {
            if(ile == ole || ile == 8 - ole)
            {
                printf("%d", 5 - ole);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
void Pattern_710(void)
{
    for(ole = 0; ole < 5; ole++)
    {
        for(ile = 0; ile < 9; ile++)
        {
            if(ile == ole || ile == 8 - ole)
            {
                printf("%c", 'E' - ole);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}


void Pattern_801(void)
{
    // Local Variable Definition
    int toPrintCharacter = 'A';
    

    for(ole = 0; ole <= 8; ole ++)
    {
        // Outer Loop Body


        // Inner Loop
        for(ile = 0; ile <= 8; ile ++)
        {
            // Inner Loop Body

            if(ile == 12 - ole)
            {
                // True Block

                printf("%c   ",toPrintCharacter + (8 - ole));
            
            }
            else if(ile == (ole - 4) )
            {
                // True Block

                printf("%c   ", toPrintCharacter + (4 - ile));
            }
            else if(ile == 4 - ole || ile == 4 + ole)
            {
                // True Block

                printf("%c   ", toPrintCharacter + ole);
            }
            else 
            {
                // False Block

                printf("    ");
            }
        }
        
        printf("\n");
    }

    printf("\n\n");
}
void Pattern_802(void)
{
    // Outer Loop
    for(ole = 0; ole <= 8; ole++)
    {
        // Inner Loop
        for(ile = 0; ile <= 8; ile++)
        {
            
            if(ole <= 4 && (ile == 4 - ole || ile == 4 + ole))
            {
                printf("%d   ", ole + 1);
            }
        
        
            else if(ole > 4 && (ile == ole - 4 || ile == 12 - ole))
            {
                printf("%d   ", 9 - ole);
            }
            else
            {
                printf("    ");
            }
        }
        printf("\n");
    }

    printf("\n\n");
}
void Pattern_803(void)
{
    // Outer Loop
    for(ole = 0; ole <= 8; ole++)
    {
        // Inner Loop
        for(ile = 0; ile <= 8; ile++)
        {
        
            if(ole <= 4 && (ile == 4 - ole || ile == 4 + ole))
            {
                printf("%d   ", ole + 1);
            }
        
        
            else if(ole > 4 && (ile == ole - 4 || ile == 12 - ole))
            {
                printf("%d   ", 9 - ole);
            }
            else
            {
                printf("    ");
            }
        }
        printf("\n");
    }
}
void Pattern_804(void)
{
    // Outer Loop
    for(ole = 0; ole <= 8; ole++)
    {
        // Inner Loop
        for(ile = 0; ile <= 8; ile++)
        {
        
            if(ole <= 4 && (ile == 4 - ole || ile == 4 + ole))
            {
                printf("%d   ", 5 - ole);
            }
        
            else if(ole > 4 && (ile == ole - 4 || ile == 12 - ole))
            {
                printf("%d   ", ole - 3);
            }
            else
            {
                printf("    ");
            }
        }
        printf("\n");
    }

}
void Pattern_805(void)
{
    // Outer Loop
    for(ole = 0; ole <= 8; ole++)
    {
        // Inner Loop
        for(ile = 0; ile <= 8; ile++)
        {
            
            
            if(ole <= 4 && (ile == 4 - ole || ile == 4 + ole))
            {
                printf("*   ");
            }
            
            else if(ole > 4 && (ile == ole - 4 || ile == 12 - ole))
            {
                printf("*   ");
            }
            else
            {
                printf("    ");
            }
        }
        printf("\n");
    }
}
void Pattern_806(void)
{
    for(ole = 0; ole <= 4; ole++)
    {
        for(ile = 0; ile <= 8; ile++)
        {
            if(ile >= 4 - ole && ile <= 4 + ole)
            {
                if((ile + ole) % 2 == 0)
                {
                    printf("%d   ", ole + 1);
                }

                else
                {
                    printf("    ");
                }
            }
            
            else
            {
                printf("    ");
            }
        }
        printf("\n");
    }
}
void Pattern_807(void)
{
    for(ole = 0; ole <= 4; ole++)
    {
        for(ile = 0; ile <= 8; ile++)
        {
            
            
            if(ile >= ole && ile <= 8 - ole)
            {
                if((ile - ole) % 2 == 0)
                {
                    printf("%c   ", 'E' - ole);
                }
                else
                {
                    printf("    ");
                }
            }
            else
            {
                printf("    ");
            }
        }
        printf("\n");
    }
}
void Pattern_808(void)
{
    for(ole = 0; ole <= 4; ole++)
    {
        for(ile = 0; ile <= 8; ile++)
        {
            if(ile >= ole && ile <= 8 - ole)
            {
                if((ile - ole) % 2 == 0)
                {

                    printf("*   ");
                }
                else
                {
                    printf("    ");
                }
            }
            else
            {
                printf("    ");
            }
        }
        printf("\n");
    }
}
void Pattern_809(void)
{
    for(ole = 0; ole <= 4; ole++)
    {
        for(ile = 0; ile <= 8; ile++)
        {
            if(ile >= 4 - ole && ile <= 4 + ole)
            {
                if((ile - (4 - ole)) % 2 == 0)
                {
                    printf("%d   ", (ile - (4 - ole)) / 2 + 1);
                }
                else
                {
                    printf("    ");
                }
            }
            else
            {
                printf("    ");
            }
        }
        printf("\n");
    }
}
void Pattern_810(void)
{
    int ole = 0; 
    int ile = 0;

    printf("Program Execution Started.\n\n");

    for(ole = 0; ole <= 4; ole++)
    {
        for(ile = 0; ile <= 4; ile++)
        {
            if(ile < ole)
            {
                printf("    "); 
            }
            else
            {
                printf("%c   ", 'E' - (ile - ole)); 
            }
        }
        printf("\n");
    }

}
void Pattern_811(void)
{
    for(ole = 0; ole < 5; ole++)

    {
        for(ile = 0; ile < ole; ile++) 
            printf("  "); 


        for(ile = 0; ile < 5 - ole; ile++) 
        {
            printf("%c", 'A' + ile);

            if(ile != 5 - ole - 1)
            {
                printf("   "); 
            }
        }

        printf("\n");
    }
}
void Pattern_812(void)
{
    for(ole = 0; ole < 5; ole++) // Rows
    {
        for(ile = 0; ile < 5 - ole - 1; ile++) 
            printf("  "); 


        
        for(ile = 0; ile <= ole; ile++) 
        {
            printf("*");
            if(ile != ole)
                printf("   "); 
        }

        printf("\n");
    }
}
void Pattern_813(void)
{
    for(ole = 0; ole < 5; ole++) // Rows
    {
        for(ile = 0; ile < ole; ile++) 
            printf("  "); 

        for(ile = 0; ile < 5 - ole; ile++)
        {
            printf("%d", 5 - ole);
            if(ile != 5 - ole - 1)
                printf("   ");
        }

        printf("\n");
    }
}
void Pattern_814(void)
{
    for(ole = 0; ole < 5; ole++) 
    {
        for(ile = 0; ile < ole; ile++) 
            printf("  "); 

        for(ile = 0; ile < 5 - ole; ile++) 
        {
            printf("%d", 5 - ile - ole);
            if(ile != 5 - ole - 1)
                printf("   "); 
        }

        printf("\n");
    }

}
void Pattern_815(void)
{
    for(ole = 0; ole < 5; ole++) 
    {
        for(ile = 0; ile < 5 - ole - 1; ile++)
            printf("  "); 

        for(ile = 0; ile <= ole; ile++) 
        {
            printf("%c", 'A' + ole);

            if(ile != ole)
            {
                printf("   "); 
            }
        }

        printf("\n");
    }
}
void Pattern_816(void)
{
    for(ole = 0; ole < 5; ole++) // Rows
    {
        for(ile = 0; ile < 5 - ole - 1; ile++) 
            printf("  "); 

        for(ile = 0; ile <= ole; ile++) 
        {
            printf("%c", 'A' + ile);
            if(ile != ole)
                printf("   "); 
        }

        printf("\n");
    }

}


void Pattern_901(void)
{
    //Outer Loop
    for(ole = 1; ole <= 4; ole++)
    {
        for(ile = 1; ile <= 4 - ole; ile++)
        {
            printf("\t");
        }
        for(ile = 1; ile <= ole; ile++)
        {
            printf("*\t\t");
        }
        printf("\n");
    }

    //Inner Loop
    for(ole = 3; ole >= 1; ole--)
    {
        for(ile = 1; ile <= 4 - ole; ile++)
        {
            printf("\t");
        }
        for(ile = 1; ile <= ole; ile++)
        {
            printf("*\t\t");
        }
        printf("\n");
    }

}
void Pattern_902(void)
{
    //Outer Loop
    for(ole = 1; ole <= 4; ole++)
    {
        for(ile = 1; ile <= 4 - ole; ile++)
        {
            printf("\t");
        }
        for(ile = 1; ile <= ole; ile++)
        {
            printf("%c\t\t", 'A' + ole - 1);
        }
        printf("\n");
    }

    //Inner Loop
    for(ole = 3; ole >= 1; ole--)
    {
        for(ile = 1; ile <= 4 - ole; ile++)
        {
            printf("\t");
        }
        for(ile = 1; ile <= ole; ile++)
        {
            printf("%c\t\t", 'A' + ole - 1);
        }
        printf("\n");
    }
}
void Pattern_903(void)
{
    //Upper Half
    for(ole = 1; ole <= 4; ole++)
    {
        for(ile = 1; ile <= 4 - ole; ile++)
        {
            printf("\t");
        }
        for(ile = 1; ile <= ole; ile++)
        {
            printf("%d\t\t", ile);
        }
        printf("\n");
    }

    //Lower Half
    for(ole = 3; ole >= 1; ole--)
    {
        for(ile = 1; ile <= 4 - ole; ile++)
        {
            printf("\t");
        }
        for(ile = 1; ile <= ole; ile++)
        {
            printf("%d\t\t", ile + (4 - ole));
        }
        printf("\n");
    }

}
void Pattern_904(void)
{
    //Upper Half
    for(ole = 1; ole <= 4; ole++)
    {
        for(ile = 1; ile <= 4 - ole; ile++)
        {
            printf("\t");
        }
        for(ile = 1; ile <= ole; ile++)
        {
            printf("%d\t\t", ole);
        }
        printf("\n");
    }

    //Lower Half
    for(ole = 3; ole >= 1; ole--)
    {
        for(ile = 1; ile <= 4 - ole; ile++)
        {
            printf("\t");
        }
        for(ile = 1; ile <= ole; ile++)
        {
            printf("%d\t\t", ole);
        }
        printf("\n");
    }

}
void Pattern_905(void)
{
    //Upper Half
    for(ole = 1; ole <= 4; ole++)
    {
        for(ile = 1; ile <= 4 - ole; ile++)
        {
            printf("\t");
        }
        for(ile = 1; ile <= ole; ile++)
        {
            toPrintCharacter = 'A' + (ile - 1);
            printf("%c\t\t", toPrintCharacter);
        }
        printf("\n");
    }

    //Lower Half
    for(ole = 3; ole >= 1; ole--)
    {
        for(ile = 1; ile <= 4 - ole; ile++)
        {
            printf("\t");
        }
        for(ile = 1; ile <= ole; ile++)
        {
            toPrintCharacter = 'A' + (ile - 1) + (4 - ole);
            printf("%c\t\t", toPrintCharacter);
        }
        printf("\n");
    }

}
void Pattern_906(void)
{
    for(ole = 0; ole <= 6; ole++)
    {
        
        for(ile = 0; ile <= 6 - ole; ile++)
        {
            toPrintCharacter = 'A' + ile;
            printf("%c\t", toPrintCharacter);
        }

    
        for(ile = 0; ile < (2 * ole - 1); ile++)
        {
            printf("\t");
        }

        
        for(ile = 6 - ole; ile >= 0; ile--)
        {
            if(ole == 0 && ile == 6)  
            {
                continue;
            }
            toPrintCharacter = 'A' + ile;
            printf("%c\t", toPrintCharacter);
        }

        printf("\n");
    }

}
void Pattern_907(void)
{
    //Upper Half
    for(ole = 1; ole <= 4; ole++)
    {
        //Spaces
        for(ile = 1; ile <= 4 - ole; ile++)
        {
            printf("\t");
        }

        //Numbers
        for(ile = 1; ile <= ole; ile++)
        {
            printf("%d\t\t", ile);
        }
        printf("\n");
    }

    //Lower Half
    for(ole = 3; ole >= 1; ole--)
    {
        //Spaces
        for(ile = 1; ile <= 4 - ole; ile++)
        {
            printf("\t");
        }

        //Numbers
        for(ile = 1; ile <= ole; ile++)
        {
            printf("%d\t\t", ile);
        }
        printf("\n");
    }
}
void Pattern_908(void)
{
    //Outer Loop
    for(ole = 0; ole < 5; ole++)
    {
        
        for(ile = 0; ile < 5 - ole; ile++)
        {
            printf("*\t");
        }

    
        for(ile = 0; ile < (2 * ole - 1); ile++)
        {
            printf("\t");
        }

        
        if(ole != 0)
        {
            for(ile = 0; ile < 5 - ole; ile++)
            {
                printf("*\t");
            }
        }
        else
        {
            //First row prints 9 stars
            for(ile = 0; ile < 4; ile++)
            {
                printf("*\t");
            }
        }

        printf("\n");
    }

}




