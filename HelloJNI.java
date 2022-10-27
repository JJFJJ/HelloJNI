public class HelloJNI
{
    static {
        System.load("/Users/jonathansun/Workspace/HelloJNI/c_hello/libhello.so");
    }

    private native void sayHello();
    private native int add(int a, int b);
    private native void printValue(int value);

    public static void main(String[] args)
    {
        // new HelloJNI().sayHello();

        HelloJNI helloJNI = new HelloJNI();
        helloJNI.sayHello();

        helloJNI.printValue(helloJNI.add(1, 5));
    }
}