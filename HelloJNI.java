public class HelloJNI
{
    static {
        System.load("/Users/jonathansun/Workspace/HelloJNI/c_hello/libhello.so");
    }

    private int m_num = 123;
    private String m_str = "Hello JNI";
    private native void updateMySelf(int num, String str);

    private native void sayHello();
    private native int add(int a, int b);
    private native void printValue(int value);

    public static void main(String[] args)
    {
        // new HelloJNI().sayHello();

        HelloJNI helloJNI = new HelloJNI();
        helloJNI.sayHello();

        helloJNI.printValue(helloJNI.add(1, 5));

        System.out.printf("Before update, num=%d, str=%s\n", helloJNI.m_num, helloJNI.m_str);
        helloJNI.updateMySelf(321, "JNI Hello");
        System.out.printf("After update, num=%d, str=%s\n", helloJNI.m_num, helloJNI.m_str);
    }
}