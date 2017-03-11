// java Car Car.class
// output: Car
// final 方法不能被重写，但这里是private不可见，如果改为public将报错
class Car extends Vehicle
{
    public static void main (String[] args)
    {
        new  Car().run();
    }
    private final void run()
    {
        System.out.println ("Car");
    }
}
class Vehicle
{
    // OK
    private final void run()
    {
        System.out.println("Vehicle");
    }

    // // Error!
    // public final void run()
    // {
    //     System.out.println("Vehicle");
    // }
}
