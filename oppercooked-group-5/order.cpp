#include <stdio.h>

int validateQuan(int quantity){
    if(!quantity){
        printf("There is no Dessert or Drink on the list!\nPress Enter to continue\n");
        getchar();}
    return quantity;
}
void printOrder(int quantity){
     char format[]="| %-5s | %-10s | %-5s | %-10s | %-5s | %-10s | %-5s |\n";
     for(int i=0;i<quantity;i++){
        if(!i){
            printf(format,"No","Name","Price","Topping","Callories","Flavor","Size");
            for(int j=0;j<=75;j++){
                printf("-");
            }
            puts("");
        }
        printf(format,i+1,name,price,topping,callories,flavor,size); // name,price,topping,... ganti komponen struct nya( print urutan sesuai index ) 
    }
    return;
}
void Order(int quantity){
    int choose;
    if(validateQuan(quantity)){
        printOrder(quantity);
	    scanf("%d",&choose);
        getchar();
        cook(choose-1); //function cooking
        printf("Successfully add to order list!\n\nPress Enter to continue");
        getchar();}
    return;
}