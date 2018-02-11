package prs;

public class OverridingMethods {

	public static void main(String[] args) {
		A objA = new A();
		System.out.println(objA.a);
		objA.someMethod();
		
		objA = new B();
		System.out.println(objA.a);
		objA.someMethod();
		
		B objB = new B();
		System.out.println(objB.a);
		objB.someMethod();
	}
}

class A{
	public int a = 10;
	public void someMethod(){
		System.out.println("In the class A");
	}
}

class B extends A{
	public int a = 20;
	public void someMethod(){
		System.out.println("In the class B");
	}
}
