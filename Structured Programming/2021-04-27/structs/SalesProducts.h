int salesProductsLastArray = 0;

#define MAX_SALES_PRODUCTS 5000

struct SaleProduct {
    int id;
    int saleId;
    int productId;
    float price;
    int quantity;
};

struct SaleProduct SalesProducts[MAX_SALES_PRODUCTS];