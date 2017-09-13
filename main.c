#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
___________.__               __                       
\__    ___/|__|_____   _____/  |_ __ _________  ____  
  |    |   |  \____ \ /    \   __\  |  \_  __ \/    \ 
  |    |   |  |  |_> >   |  \  | |  |  /|  | \/   |  \
  |____|   |__|   __/|___|  /__| |____/ |__|  |___|  /
              |__|        \/                       \/ 
*/

void dashboard(){

        char tab[4][255];
        strcpy(tab[0] , "1 ) Run Adminer on port 1234");
        strcpy(tab[1] , "2 ) Run Tipnturn with docker");
        strcpy(tab[2] , "3 ) Run tipnturn without docker");
	strcpy(tab[3] , "4 ) Run ungit");

        for(int i = 0; i<4 ;i++){
               printf("%s\n", tab[i]);
        }

}

int checkMenu(){

	int choice;
	scanf("%d", &choice);

	if(choice == 1) {
		system("php -S localhost:1234 /home/jenaye/dev/adminer-4.3.1.php");
	}else if (choice == 2) {
		system("cd /home/jenaye/dev/TipnTurn && sudo docker-compose up");
	}else if (choice == 3) {
		system("php /home/jenaye/dev/TipnTurn/tipnturn-api/bin/console server:start");
		system("cd /home/jenaye/dev/TipnTurn/tipnturn-front && npm start");
	}else if (choice == 4) {
		system("cd /home/jenaye/dev/github/Tipnturn-front && ungit");
	}else {
		printf("Close program");
		return -1;
	}
}

int main(void){

        dashboard();
	checkMenu();
        return 0;
}
