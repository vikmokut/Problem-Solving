public class Calc {

	static int x;
	static int y;
	static char ops;
	
	// defines an method
	static float calculate () {
		switch (ops) {
			case '+':
				x += y;
				break;
			case '-':
				x -= y;
				break;
			case '*':
				x *= y;
				break;
			case '/':
				x = x / y;
				break;
			default:
				System.out.println("Check your operator.");
		}
		return x;
	}

	static int add() {
		return x + y;
	}

	static int subtract() {
		return x - y;
	}

	static int multiply() {
		return x * y;
	}

	static float divide() {
		return (float)x / y;
	}
}
