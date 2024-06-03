public class School {
    public static void main(String[] args) {
        Student student1 = new Student();
        // student1.rno = 47;
        // student1.name = "Rupayan Dirghangi";
        // student1.marks = 9.105f;
        System.out.println(student1.rno);
        System.out.println(student1.name);
        System.out.println(student1.marks);
        student1.changeName("Coding Enthusiast");
        student1.greeting();

        Student student2 = new Student(14, "Kunal Kushwaha", 9.6f);
        System.out.println(student2.rno);
        System.out.println(student2.name);
        System.out.println(student2.marks);

        Student student3 = new Student(student1);
        System.out.println(student3.rno);
        System.out.println(student3.name);
        System.out.println(student3.marks);

        Student random = new Student();
    }
}

class Student {
    int rno;
    String name;
    float marks;

    void greeting() {
        System.out.println("Hello my name is " + this.name);
    }

    void changeName(String newName) {
        name = newName;
    }

    // Default Constructor
    Student() {
        this.rno = 47;
        this.name = "Rupayan Dirghangi";
        this.marks = 9.105f;
    }

    // Parameterized Constructor
    Student(int rno, String name, float marks) {
        this.rno = rno;
        this.name = name;
        this.marks = marks;
    }

    // Copy Constructor
    Student(Student other) {
        this.rno = other.rno;
        this.name = other.name;
        this.marks = other.marks;
    }

    // Student() {
    // this(13, "Default Student", 100.0f);
    // }
}
