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

    public void printInJava(String str)
    {
        System.out.printf("%s in Java code\n", str);
    }

    public int addInJava(int a, int b)
    {
        return (a+b);
    }

    public static void main(String[] args)
    {

        HelloJNI helloJNI = new HelloJNI();

        /* Java -> JNI -> C */
        helloJNI.sayHello();
        helloJNI.printValue(helloJNI.add(1, 5));

        System.out.printf("Before update, num=%d, str=%s\n", helloJNI.m_num, helloJNI.m_str);

        /* Java -> JNI -> Java */
        helloJNI.updateMySelf(321, "JNI Hello");
    }
}