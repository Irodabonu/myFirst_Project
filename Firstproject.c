#include<stdio.h>
void null(int *param){
    *param = 0;
}
int main(){
    int nulle, age, years, salary;
    char name[100];
    printf("Enter your name\n");
    scanf("%s", &name );
    printf("Enter your age\n");
    scanf("%d", &age);
    if(age >= 18){
        printf("Responsive age for our demands\n");
    }
    else{
        printf("You are very little for us");
    }
    
    printf("Enter you company code number\n");
    int company;
    scanf("%d", &company);
    switch(company){
        
        case 1:
        printf("Your company is Accenture (Ireland)\n");
        break;
        case 2:
        printf("Your company is SAP(Germany)\n");
        break;
        case 3:
        printf("Your company is Capgemini (France)\n");
        break;
        case 4:
        printf("Your company is ATOS (France)\n");
        break;
        case 5:
        printf("ypur company is  T-Systems (Germany)\n");
        break;
        case 6:
        printf("Your company is  Computacenter (UK)\n");
        break;
        case 7:
        printf("Your company is Amadeus IT Group (Spain) \n");
        break;
        case 8:
        printf("Your company is Micro Focus (UK)\n");
        break;
        case 9:
        printf("Your company is Spotify Technology (Luxembourg) \n");
        break;
        case 10:
        printf("Your company is Sopra Steria (France) \n");
        break;
        default:
        printf("You are not from any company that we can be partner\n");
        break;
    }
   
printf("%s you are welcome Our payroll agency🙏 \n", name);
printf("How many months did you work\n");
scanf("%d", &years);
printf("Your per months salary\n");
scanf("%d", &salary);
nulle = salary * years;
printf("Your  Total salary was %d $\n", nulle);
printf("But we found your mistakes and Sorry for reduced your salary by agency\n");

    
    null(&nulle);
    printf("That is why your salary equalized to 😞 %d $\n", nulle);
    int real;
    printf(" But how much did you aim for🥹?\n");
    scanf("%d", &real);
    printf("It is your real salary %d $\n", real);
    printf("Sorry for it It was little joke 😜 to make fun our customers 😇\n");
    return 0;
}
