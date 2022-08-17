#include <stdio.h>

void display_options();
int * accounts();
int * balance();
int * accountnum();
int transaction();
int changePass();
int remainingBalance();
int transfer();
int pass = 0;
int numbers[3];
int bal[3];

int main()
{
    char ask;
    printf("\n\n");
    printf("                         /$$      /$$ /$$     /$$       /$$$$$$$   /$$$$$$  /$$   /$$ /$$   /$$\n");
    printf("                        | $$$    /$$$|  $$   /$$/      | $$__  $$ /$$__  $$| $$$ | $$| $$  /$$/\n");
    printf("                        | $$$$  /$$$$ |  $$ /$$/       | $$  | $$| $$  | $$| $$$$| $$| $$ /$$/ \n");
    printf("                        | $$ $$/$$ $$  |  $$$$/        | $$$$$$$ | $$$$$$$$| $$ $$ $$| $$$$$/  \n");
    printf("                        | $$  $$$| $$   |  $$/         | $$__  $$| $$__  $$| $$  $$$$| $$  $$  \n");
    printf("                        | $$ | $ | $$    | $$          | $$  | $$| $$  | $$| $$|  $$$| $$|  $$ \n");
    printf("                        | $$ |/  | $$    | $$          | $$$$$$$/| $$  | $$| $$ |  $$| $$ |  $$\n");
    printf("                        |__/     |__/    |__/          |_______/ |__/  |__/|__/  |__/|__/  |__/\n");
    
    while(ask!='E'){
        int opt;
        int * numbers = accounts();
        int * bal = balance();
        int * accnumbers = accountnum();
        
        printf("\n\nPlease enter your password: ");
        scanf("%d", &pass);
        opt=0;
        
        while(opt!=5){
            int * numbers = accounts();
            int * bal = balance();
            int * accnumbers = accountnum();
            if(pass == numbers[0]){
                printf("\n************************************");
                printf("\nHello Mr.Muzammil");
                printf("\nAccount Number: %d", accnumbers[0]);
                display_options();
                printf("\nPlease choose an option: ");
                scanf(" %d", &opt);
                if(opt == 1){
                    transaction();
                }
                else if(opt == 2){
                    changePass();
                }
                else if(opt == 3){
                    remainingBalance();
                }
                else if(opt == 4){
                    transfer();
                }
                else if(opt == 5){
                    
                }
                else{
                    printf("\nPlease choose a valid option...\n");
                }
            }
            else if(pass == numbers[1]){
                printf("\n************************************");
                printf("\nHello Mr.Hamza");
                printf("\nAccount Number: %d", accnumbers[1]);
                display_options();
                printf("\nPlease choose an option: ");
                scanf(" %d", &opt);
                if(opt == 1){
                    transaction();
                }
                else if(opt == 2){
                    changePass();
                }
                else if(opt == 3){
                    remainingBalance();
                }
                else if(opt == 4){
                    transfer();
                }
                else if(opt == 5){
                    
                }
                else{
                    printf("\nPlease choose a valid option...\n");
                }
            }
            else if(pass == numbers[2]){
                printf("\n************************************");
                printf("\nHello Mr.Sami");
                printf("\nAccount Number: %d", accnumbers[2]);
                display_options();
                printf("\nPlease choose an option: ");
                scanf(" %d", &opt);
                if(opt == 1){
                    transaction();
                }
                else if(opt == 2){
                    changePass();
                }
                else if(opt == 3){
                    remainingBalance();
                }
                else if(opt == 4){
                    transfer();
                }
                else if(opt == 5){
                    
                }
                else{
                    printf("\nPlease choose a valid option...\n");
                }
            }
            else{
                printf("\nPlease enter a valid password\n");
                break;
            }
        }
        printf("\nEnter E to exit or any other key to continue: ");
        scanf(" %c", &ask);
    }
}

void display_options()
{
    printf("\n\n");
    printf("1. To perform transactions\n");
    printf("2. To change your password\n");
    printf("3. To see the remaining balance\n");
    printf("4. To transfer in another account\n");
    printf("5. Logout\n");
    printf("************************************\n");
}
int* accounts()
{
    static int numbers[] = {5698, 5278, 2364};
    return numbers;
}
int* balance()
{
    static int bal[] = {100000, 10000, 1000};
    return bal;
}
int* accountnum()
{
    static int accnumbers[] = {200003, 200013, 200019};
    return accnumbers;
}

int transaction(){
    int opt2, amount, amount2, userAmount;
    int * bal = balance();
    int * numbers = accounts();
    
    printf("1. Withdraw from your account\n");
    printf("2. Deposit in your account\n\n");
    
    printf("Please choose an option: ");
    scanf("%d", &opt2);
    
    if(opt2 == 1){
        if(pass==numbers[0]){
            printf("Please enter the amount you want to withdraw: ");
            scanf("%d", &amount);
            if(amount > bal[0]){
                printf("You can't withdraw more than your balance: $%d\n", userAmount);
            }
            else{
                bal[0] -= amount;
                printf("\nYour withdrawal of amount $%d is successfull\n", amount);
                printf("Your remaining balance is $%d\n\n", bal[0]);
            }
        }
        else if(pass==numbers[1]){
            printf("Please enter the amount you want to withdraw: ");
            scanf("%d", &amount);
            if(amount > bal[1]){
                printf("You can't withdraw more than your balance: $%d\n", userAmount);
            }
            else{
                bal[1] -= amount;
                printf("\nYour withdrawal of amount $%d is successfull\n", amount);
                printf("Your remaining balance is $%d\n\n", bal[1]);
            }
        }
        else if(pass==numbers[2]){
            printf("Please enter the amount you want to withdraw: ");
            scanf("%d", &amount);
            if(amount > bal[2]){
                printf("You can't withdraw more than your balance: $%d\n", userAmount);
            }
            else{
                bal[2] -= amount;
                printf("\nYour withdrawal of amount $%d is successfull\n", amount);
                printf("Your remaining balance is $%d\n\n", bal[2]);
            }
        }
    }
    else if(opt2 == 2){
        if(pass==numbers[0]){
            printf("Please enter the amount you want to deposit: ");
            scanf("%d", &amount2);
            if(amount2 < 0){
                printf("You can't deposit a negative value\n");
            }
            else{
                bal[0] += amount2;
                printf("Your deposit of amount $%d is successfull\n", amount2);
                printf("Your updated balance is $%d\n\n", bal[0]);
            }
        }
        else if(pass==numbers[1]){
            printf("Please enter the amount you want to deposit: ");
            scanf("%d", &amount2);
            if(amount2 < 0){
                printf("You can't deposit a negative value\n");
            }
            else{
                bal[1] += amount2;
                printf("Your deposit of amount $%d is successfull\n", amount2);
                printf("Your updated balance is $%d\n\n", bal[1]);
            }
        }
        else if(pass==numbers[2]){
            printf("Please enter the amount you want to deposit: ");
            scanf("%d", &amount2);
            if(amount2 < 0){
                printf("You can't deposit a negative value\n");
            }
            else{
                bal[2] += amount2;
                printf("Your deposit of amount $%d is successfull\n", amount2);
                printf("Your updated balance is $%d\n\n", bal[2]);
            }
        }
    }
    else{
        printf("\nPlease choose a valid option.\n");
    }
}

int changePass(){
    int newPass;
    int * numbers = accounts();
    if(pass==numbers[0]){
        printf("Please enter your new password: ");
        scanf(" %d", &newPass);
        
        numbers[0] = newPass;
        pass = newPass;
        printf("\n\nYour new Password is %d\n\n", newPass);
    }
    else if(pass==numbers[1]){
        printf("Please enter your new password: ");
        scanf(" %d", &newPass);
        
        numbers[1] = newPass;
        pass = newPass;
        printf("\n\nYour new Password is %d\n\n", newPass);
    }
    else if(pass==numbers[2]){
        printf("Please enter your new password: ");
        scanf(" %d", &newPass);
        
        numbers[2] = newPass;
        pass = newPass;
        printf("\n\nYour new Password is %d\n\n", newPass);
    }
    else{
        printf("The request cannot be processed at the moment. Please try again later...");
    }
}

int remainingBalance(){
    int * bal = balance();
    int * numbers = accounts();
    
    if(pass==numbers[0]){
        printf("Your remaining balance is: $%d\n\n", bal[0]);
    }
    else if(pass==numbers[1]){
        printf("Your remaining balance is: $%d\n\n", bal[1]);
    }
    else if(pass==numbers[2]){
        printf("Your remaining balance is: $%d\n\n", bal[2]);
    }
}

int transfer(){
    int * bal = balance();
    int * numbers = accounts();
    int * accnumbers = accountnum();
    int anum, tamount;
    
    if(pass==numbers[0]){
        printf("Please enter the beneficiary account number: ");
        scanf("%d", &anum);
        if(anum==accnumbers[1]){
                printf("\nName: Mr.Hamza\n");
        }
        else if(anum==accnumbers[2]){
            printf("\nName: Mr.Sami\n");
        }
        printf("Please enter the amount you want to transfer: ");
        scanf("%d", &tamount);
        
        if(tamount > bal[0]){
            printf("You can't transfer more than your current balance: $%d\n", bal[0]);
        }
        else{
            if(anum==accnumbers[1]){
                printf("\nThe amount of $%d has been transfered in Mr.Hamza's account successfully\n", tamount);
                bal[1] += tamount;
                bal[0] -= tamount;
            }
            else if(anum==accnumbers[2]){
                printf("\nThe amount of $%d has been transfered in Mr.Sami's account successfully\n", tamount);
                bal[2] += tamount;
                bal[0] -= tamount;
            }
            else{
                printf("\n\nPlease enter a valid account number...\n");
            }   
        }
        printf("Your updated balance: $%d\n", bal[0]);
    }
    else if(pass==numbers[1]){
        printf("Please enter the beneficiary account number: ");
        scanf("%d", &anum);
        if(anum==accnumbers[0]){
                printf("\nName: Mr.Muzammil\n");
        }
        else if(anum==accnumbers[2]){
            printf("\nName: Mr.Sami\n");
        }
        printf("Please enter the amount you want to transfer: ");
        scanf("%d", &tamount);
        
        if(tamount > bal[1]){
            printf("You can't transfer more than your current balance: $%d\n", bal[1]);
        }
        else{
            if(anum==accnumbers[0]){
                printf("\nThe amount of $%d has been transfered in Mr.Muzammil's account successfully\n", tamount);
                bal[0] += tamount;
                bal[1] -= tamount;
            }
            else if(anum==accnumbers[2]){
                printf("\nThe amount of $%d has been transfered in Mr.Sami's account successfully\n", tamount);
                bal[2] += tamount;
                bal[1] -= tamount;
            }
            else{
                printf("\n\nPlease enter a valid account number...\n");
            }   
        }
        printf("Your updated balance: $%d\n", bal[1]);
    }
    else if(pass==numbers[2]){
        printf("Please enter the beneficiary account number: ");
        scanf("%d", &anum);
        if(anum==accnumbers[0]){
                printf("\nName: Mr.Muzammil\n");
        }
        else if(anum==accnumbers[1]){
            printf("\nName: Mr.Hamza\n");
        }
        printf("Please enter the amount you want to transfer: ");
        scanf("%d", &tamount);
        
        if(tamount > bal[2]){
            printf("You can't transfer more than your current balance: $%d\n", bal[2]);
        }
        else{
            if(anum==accnumbers[0]){
                printf("\nThe amount of $%d has been transfered in Mr.Muzammil's account successfully\n", tamount);
                bal[0] += tamount;
                bal[2] -= tamount;
            }
            else if(anum==accnumbers[1]){
                printf("\nThe amount of $%d has been transfered in Mr.Hamza's account successfully\n", tamount);
                bal[1] += tamount;
                bal[2] -= tamount;
            }
            else{
                printf("\n\nPlease enter a valid account number...\n");
            }   
        }
        printf("Your updated balance: $%d\n", bal[2]);
    }
    else{
        printf("Your request cannot be processed at the moment. Please try again later...");
    }
}