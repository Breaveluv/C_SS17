#include <stdio.h>
#include <string.h>
#include <ctype.h>
 void input(char *a);
 void reverse(char *a, int *length,char *reverseString);
 void word(char *a, int *length);
 void compare(char *a);
 void addString (char *a);
 void upItem (char *a,int *length);
 int main () {
 	char a[100];
 	int choice;
 	int length;
 	char reverseString[100];
 	do {
 		 printf("\n MENU \n");
        printf("1. Nhap vao chuoi \n");
        printf("2. In ra chuoi dao nguoc \n");
        printf("3. Ðem so luong tu trong chuoi \n");
        printf("4. Nhap vao chuoi khac, so sanh chuoi do voi chuoi ban dau \n");
        printf("5. In hoa tat ca chu cai trong chuoi\n");
        printf("6. Nhap vao chuoi khac va them chuoi do vao chuoi ban dau \n");
        printf("7. Thoat   \n");
        printf("Hay nhap lua chon cua ban :");
        scanf("%d",&choice);
        fflush(stdin);
	 switch (choice){
	 	case 1 :
	 		input(a);
	 		break;
	 	case 2 :
	 		reverse(a,&length,reverseString);
	 		break;
	 	case 3 :
	 		word(a,&length);
	 		break;
	 	case 4 :
	 		compare(a);
	 		break;
	 	case 5 : 
		 	addString(a);
			break;
		case 6 :
		 	addString(a);
		
		default:
			break;
				 	 	
	 }
	 
	   }while (choice!=7);
	   
 }
    void input(char *a){
	  printf ("Hay nhap mot chuoi bat ki :  ");
      fgets(a,100,stdin);
      a[strcspn(a, "\n")] = '\0';
      
	}
 	void reverse (char *a, int *length, char *reverseString){
	  *length = (int)strlen(a);
	   for (int i = 0; i<*length; i++){
	  	*(reverseString +i)=*(a+ *length-i-1);
	  	  }
	   printf(" Chuoi dao nguoc  la : %s \n",reverseString);
	 }
	 void word(char *a, int *length){
	 	int count = 1 ;
	 	*length =(int)strlen(a);
	 	 for (int i =0 ; i< *length;i++){
	 	 	if(*(a+i)==' '){
	 	 		count++;
			  }
		  }
	 printf ("So phan tu trong chuoi la : %d",count);
	 }
	 void compare(char *a){
	 	int len;
	 	char b[100];
	 	printf("Nhap chuoi de so sanh : ");
	 	fgets(b,100,stdin);
	  
	  	if(strcmp(a, b)==0){
	  		printf("Hai chuoi giong nhau \n");
		  }else{
		  	printf("Hai chuoi khac nhau \n");
		  }
	 }
	 void upItem(char *a,int *length){
	 	  for(int i = 0;i< *length;i++){
	 	  	*(a+i)=toupper(*(a+i));
		   }
	 }
	 void addString(char *a){
	 	char b[100];
	 	int len;
	 	printf("Hay nhap chuoi de them: ");
	 	fgets(b, 100, stdin);
	 	len=(int)strlen(b);
	 	b[strcspn(b, "\n")] = '\0';
	 	
	 	strcat(a, b);
	 	printf("Chuoi sau khi them la %s", a);
	 	
	 }
