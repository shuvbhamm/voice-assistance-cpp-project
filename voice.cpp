#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <ctime>

using namespace std;

main(){
    
    system("cls");

    cout<<"\n\n----------------WELCOME----------------\n"
        <<"---------I'M VIRTUAL ASSISTANT---------\n"
        <<"-----------MY NAME IS JARVIS-----------\n"
        <<"----------I'M HERE TO HELP YOU---------\n\n";

        string phrase = "welcome,     i am virtual assistant,     my name is jarvis,   i am here to help you";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);

        password:
        string password;
        cout<<"Enter password : ";
            phrase = "Enter Password";
            command = "espeak \"" + phrase + "\"";
            charCommand = command.c_str();
            system(charCommand);
        cin>>password;
        
        if(password=="seed"){
            cout<<"<-----Welcome Shubham------>\n"
                <<"<------How can i help you----->\n";
            
            string phrase = "Welcome,   शुभम ,   How can i help you ?";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);


            order:
            cout<<"=> ";
            string order;
            cin>>order;

            if(order=="google" or order=="Google" or order=="GOOGLE"){


                string phrase = "Opening google";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                cout<<phrase;
                system(charCommand);

                system("start https:\\www.google.com");
                

            }
            else if(order=="notepad" or order=="Notepad" or order=="NOTEPAD"){


                string phrase = "Opening notepad";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                cout<<phrase;
                system(charCommand);

                system("start notepad");
                

            }
            else{
                cout<<"Sorry I didn't understand your command, please write valid command \n";
                string phrase = "Sorry I didn't understand your command, please write valid command";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);

                goto order;
            }
        }
        else{
            cout<<"Incorrect password\n";
            string phrase = "Incorrect Password";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            goto password;
        }

}