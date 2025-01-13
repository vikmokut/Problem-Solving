public class Main {
	public static void main (String[] args) {
		Calc solve = new Calc();

		solve.x = 7;
		solve.y = 9;
		solve.ops = '/';

		System.out.println(solve.add());
		System.out.println(solve.subtract());
		System.out.println(solve.multiply());
		System.out.println(solve.divide());

		System.out.println(solve.calculate());
	}
}
