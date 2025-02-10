#include <stdio.h>
#include <string.h>
#include "function.h"
void menu (){
	int choice;
	while (1){
	printf ("***Store Management in C***\n");
	printf ("%+30s","Menu\n");
	printf ("[1] Hien thi danh sach\n");
	printf ("[2] Them thong tin vo danh sach\n");
	printf ("[3] Xoa thong tin theo id\n");
	printf ("Nhap lua chon cua ban: ");
	scanf ("%d",&choice);
	switch (choice){
		case 1:{
			break;
		}
		case 2:{
			add_product();
			break;
		}
		default: {
			printf ("Lua chon khong hop le\n");
			break;
		}
	}
}
}
void add_product (){
	int quantity;
	printf ("Nhap so luong san pham can them: ");
	scanf ("%d",&quantity);
	getchar();
	Product prd[quantity];
	for (int i =0; i<quantity;i++){
		printf ("Nhap ten san pham thu %d: ",i+1);
		fgets (prd[i].product_name, 50, stdin);
		printf ("Nhap so luong san pham thu %d: ",i+1);
		scanf ("%d",&prd[i].quantity);
	}
	printf ("Them thanh cong\n");
}
void display_products (){
	
}
