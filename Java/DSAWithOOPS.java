import java.util.Scanner;

class student {
    String name ; 
    int age ; 

    student(String name , int age)
    {
        this.name = name ; 
        this.age = age ;
    }
    public void study() 
    {
        System.out.println(name + " is Studying");
    }
}

class Car {
    String Brand ;
    String Model ;

    

    Car(String Brand, String Model) {
        this.Brand = Brand;
        this.Model = Model;
    }

    public void DisplayInfo()
    {
        System.out.println("Car Brand -: " + Brand + " With Model is -: " + Model);
    }
    
}

class Book{
    String Title ;
    String Author ;

    public Book() {
        Title = "Unknown";
        Author = "Unknown" ;
    }

    public Book(String title, String author) {
        this.Title = title;
        this.Author = author;
    }
    public void getDetails()
    {
        System.out.println("Book Name -: " + Title + "\nBook Author Name is -: " + Author);
    }

    
}

 class BankAccount  
 {
     private String accountHolderName ;
     private double balance ;

    public String getAccountHolderName() {
        return accountHolderName;
    }

     public double getBalance() {
         return balance;
     }
     public void setAccountHolderName(String accountHolderName) {
         this.accountHolderName = accountHolderName;
     }
     public void setBalance(double balance) {
         this.balance = balance;
     }
     public void balanceValidate (double balance)
     {
        if(balance == 0.0)
        {
            balance = 0.50 ;
        }
     }
 }

 class Shape  {

    public void draw(){
        System.out.println("Shape");
    }
    
}

 class Circle extends Shape {

    @Override
    public void draw(){
        System.out.println("Drawing Circle");
    }
 }

 class Rectangle extends Shape {

    @Override
    public void draw(){
        System.out.println("Drawing Rectangle");
    }
 }

 class Coding  {

    @SuppressWarnings("unused")
    String Language ;
    String DSA ;

    
    public void CodingInfo(String Language)
    {
        System.out.println("Coding language -: " + Language);
    }
    public void CodingInfo (String Language , String DSA )
    {
        System.out.println("Coding Language -: " + Language + " with Doing DSA " + DSA);
    }
    public void CodingInfo (String Language , String DSA , String recource )
    {
        System.out.println("Coding Language -: " + Language + " with Doing DSA " + DSA + " " + recource);
    }
}

public class DSAWithOOPS {
    public static void main(String[] args) {
        // first task code
        Scanner scan = new Scanner(System.in);
        String name = scan.nextLine();
        int age = scan.nextInt();
        student std = new student(name, age);
        std.study();

        // 2 task 
        String brand = scan.nextLine();
        String model = scan.nextLine();
        Car car = new Car(brand, model);
        car.DisplayInfo();

        // 3 task
        String author = scan.nextLine();
        String title = scan.nextLine();
        Book book = new Book(author , title);
        book.getDetails();

        String holdername = scan.nextLine();
        double amt = scan.nextDouble();
        BankAccount bank = new BankAccount();
        bank.setAccountHolderName(holdername);
        bank.setBalance(amt);
        
       
              

       

        // task 5

         Shape cir = new Circle();
        cir.draw();
        Shape rect = new Rectangle();
        rect.draw(); 

        // task 6

         String lang = scan.nextLine();
        String dsa = scan.nextLine();
        String recour = scan.nextLine();
        Coding code = new Coding();
       code.CodingInfo(lang);
       code.CodingInfo(lang, dsa);
       code.CodingInfo(lang, dsa, recour);

    }
}
