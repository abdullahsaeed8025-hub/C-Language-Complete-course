//#include<stdio.h>
//#include<string.h>
//void authenticateuser(){
//	char password[80];
//	int length;
//	printf("Enter a password to store:");
//	fgets(password,sizeof(password),stdin);
//	password[strcspn(password,"\n")]='\0';
//	length=strlen(password);
//	if(length<8){
//		printf("password too short");
//	}
//	else if(length>=8 && length<=12){
//		printf("Weak password\n");
//	}
//	else if(length>=13 && length<=16){
//		printf("medium password\n");
//	}
//	else{
//		printf("strong password\n");
//	}
//	login(password);
//}
//void login(char password[]){
//	char login[80];
//	printf("Enter Password to login:");
//	fgets(login,sizeof(login),stdin); 
//	login[strcspn(login,"\n")]='\0';
//	if(strcmp(password,login)==0){
//		printf("Login successfull\n");
//	}
//	else{
//		printf("login failed\n");
//	}
//}
//int main(){
//
//	int i;
//	authenticateuser();
//
//	return 0;
//}


