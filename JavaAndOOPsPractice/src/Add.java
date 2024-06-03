import java.util.*;

class Operation {
    private int x = 0, y = 0;

    Operation(int a, int b) {
        x = a;
        y = b;
    }

    int add() {
        return x + y;
    }

}

public class Add {
    public static void main(String args[]) {
        Operation obj = new Operation(1, 2);
        int x = obj.add();
        System.out.println(x);
    }
}
