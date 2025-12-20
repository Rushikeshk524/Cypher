// -------------------------------
// CLASS LEVEL MODIFIERS
// -------------------------------
public class Example {   // 'public' → accessible from anywhere

    // -------------------------------
    // VARIABLE MODIFIERS
    // -------------------------------
    private static final String COLLEGE_NAME = "Tech University";
    // 'private' → accessible only in this class
    // 'static' → belongs to the class, not to an object
    // 'final' → cannot be changed

    protected int studentID; 
    // 'protected' → accessible within same package + subclasses

    public String studentName;
    // 'public' → accessible from anywhere

    // -------------------------------
    // CONSTRUCTOR
    // -------------------------------
    public Example(int id, String name) {
        this.studentID = id;
        this.studentName = name;
    }

    // -------------------------------
    // METHOD MODIFIERS
    // -------------------------------
    public void displayInfo() {
        System.out.println("Student ID: " + studentID);
        System.out.println("Student Name: " + studentName);
        System.out.println("College: " + COLLEGE_NAME);
    }
    public void Shownote(){
        secretNote();
    }

    private void secretNote() {
        System.out.println("This is a private method ? only accessible inside this class.");
    }

    static void showCollege() {
        System.out.println("College: " + COLLEGE_NAME);
    }

    final void greet() {
        System.out.println("Welcome to Java Learning!");
    }

    // -------------------------------
    // MAIN METHOD
    // -------------------------------
    public static void main(String[] args) {
        Example e1 = new Example(302, "Soham");
        e1.displayInfo();   // public method — accessible
        e1.secretNote();  //  private — not accessible outside the class
        Example.showCollege(); //  static — called using class name
        e1.greet();         //  final — can be called but not overridden
        king.display();
    }
}

class king{
    public static void display(){
        Example e2 = new Example(101, "Rushikesh");
        // e2.secretNote();
        e2.Shownote();
    }
}