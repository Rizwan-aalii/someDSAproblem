import java.util.ArrayList;


class Product {
    private String name;
    private int id;
    private double price;
    private int qty;

    public Product() {
        this.name = name;
        this.id = id;
        this.price = price;
        this.qty = qty;
    }

    // getters
    public String getName() { return name; }
    public int getId() { return id; }
    public double getPrice() { return price; }
    public int getQty() { return qty; }

    @Override
    public String toString() {
        return "Product Name: " + name +
               "\nProduct ID: " + id +
               "\nPrice: " + price +
               "\nQuantity: " + qty;
    }
}




class ShoppingApp {
    private ArrayList<Product> products = new ArrayList<>();

    public void addProduct(String name, int id, double price, int qty) {
        Product p = new Product();
        products.add(p);
        System.out.println("✅ Product Added: " + name);
    }

    public void searchProduct(int id) {
        boolean found = false;
        for(Product p : products) {
            if(p.getId() == id) {
                System.out.println("🔎 Product Found:\n" + p);
                found = true;
                break;
            }
        }
        if(!found) {
            System.out.println("❌ Product with ID " + id + " not found!");
        }
    }
}








public class ShoppingApps {
    public static void main(String[] args) {

        String name = "laptop";
        int id = 102 ;
        ShoppingApp app = new ShoppingApp();
        app.addProduct(name , id , 250000.00 , 10);
        app.addProduct("Computers" , 101 , 10000.00 , 14);


    }
}
