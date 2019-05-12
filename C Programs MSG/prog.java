public class prog {
	public static void main(String[] args) {
		String result = MinorOrAdult(45);
		System.out.println(result);
	}

		String MinorOrAdult(int age) {
		return age>18 ? "Adult" : "Minor";
	}
}	
