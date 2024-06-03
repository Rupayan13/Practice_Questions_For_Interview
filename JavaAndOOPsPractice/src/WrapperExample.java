public class WrapperExample {
    public static void main(String[] args) {
        int a = 10;
        // Integer num = new Integer(10);
        Integer x = 10;
        Integer y = 20;
        swap(x, y);
        System.out.println(x + " " + y);
        // It coudn't swap being the pass by references, because it will create with
        // final keyword
        // when final comes then we can't reassign the value
    }

    public static void swap(Integer a, Integer b) {
        int temp = a;
        a = b;
        b = temp;
    }
}
