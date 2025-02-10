
struct Product{
	char product_id[10];
	char category_id [10];
	char product_name[50];
	int quantity;
	int price;
};
typedef struct Product Product;
struct category{
	char category_id[10];
	char category_name[10];
};
typedef struct category category;
struct order{	
	char order_id[10];
	char customer_id[20];
};
typedef struct order order;
struct Date{
	int month, day, year;
};
typedef struct Date Date;
