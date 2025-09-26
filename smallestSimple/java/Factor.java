package java;

public class Factor {
	int number;
	int pow;
	
	public Factor(int number, int pow) {
		super();
		this.number = number;
		this.pow = pow;
	}

	@Override
	public String toString() {
		return "Factor [number=" + number + ", pow=" + pow + "]";
	}
	
}
