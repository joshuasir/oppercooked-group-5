#include <stdio.h>
/* dummy struct
struct menu{
	char name[55];
	char price[55];
	char topping[55];
	char callories[55];
	char flavor[55];
	char size[55];
	menu *next;
	menu *prev;
}*head,*tail,*curr;
*/
int printOrder(){
	if(!head){
		printf("There is no Dessert or Drink on the list!\nPress Enter to continue\n");
        getchar();
        return 0;
	}
     int i=1;
     curr=head;
     char format[]="| %-5s | %-10s | %-5s | %-10s | %-5s | %-10s | %-5s |\n";
     printf(format,"No","Name","Price","Topping","Callories","Flavor","Size");
     for(int j=0;j<=75;j++){
           printf("-");
     }
     puts("");
     while(curr){
        printf(format,i,curr->name,curr->price,curr->topping,curr->callories,curr->flavor,curr->size); 
    	curr=curr->next;
    	i++;
	}
    return i;
}
menu *findMenu(int num){
	if(!head){
		return NULL
	}else{
		int i=1;
		curr=head;
		while(curr&&i<num){
			curr=curr->next;
			i++;
		}
		return curr;
	}
}
void Order(){
    int choose,quantity=printOrder();
    if(quantity){
        do{
        scanf("%d",&choose);
        getchar();
        }while(choose>quantity);
        cook(findMenu(choose));    //function cooking
        printf("Successfully add to order list!\n\nPress Enter to continue");
        getchar();}
    return;
}