import java.util.*;

public class Utility {
	public static <T1 extends Number, T2 extends Number> Double add(T1 o1, T2 o2) {
		return o1.doubleValue() + o2.doubleValue();
	}
	public static <T1 extends Object, T2 extends Number> String add(T1 o1, T2 o2) {
		return o1.toString() + o2;
	}
	public static <T1 extends Number, T2 extends Object> String add(T1 o1, T2 o2) {
		return o1 + o2.toString();
	}
	public static <T1 extends Object, T2 extends Object> String add(T1 o1, T2 o2) {
		return o1.toString() + o2.toString();
	}
	public static <T1 extends Number, T2 extends Number> Double[] add(T1[] o1, T2 o2) {
        Double d[] = new Double[o1.length];
		for (int i = 0; i < o1.length; i++) {
            d[i] = o1[i].doubleValue() + o2.doubleValue();
		}
		return d;
	}
	public static <T1 extends Number, T2 extends Number> Double[] add(T2 o2, T1[] o1) {
        Double d[] = new Double[o1.length];
		for (int i = 0; i < o1.length; i++) {
            d[i] = o1[i].doubleValue() + o2.doubleValue();
		}
		return d;
	}
	public static <T1 extends Number, T2 extends Number> Double[] add(T2[] o2, T1[] o1) {
        int len = o1.length > o2.length ? o1.length : o2.length;
		Double d[] = new Double[len];
		for (int i = 0; i < len; i++) {
			if (i < o1.length + o2.length - len) {
            	d[i] = o1[i].doubleValue() + o2[i].doubleValue();
			} else {
				if (o1.length > o2.length) {
					d[i] = o1[i].doubleValue();
				} else {
					d[i] = o2[i].doubleValue();
				}
			}
		}
		return d;
	}
	public static <T1 extends Number, T2 extends Object> String[] add(T1[] o1, T2[] o2) {
        String s[] = new String[o1.length + o2.length];
		for (int i = 0; i < o1.length + o2.length; i++) {
			if (i < o1.length) {
				s[i] = o1[i].toString();
			} else {
				s[i] = o2[i].toString();
			}
		}
		return s;
	}
	public static <T1 extends Number, T2 extends Object> String[] add(T2[] o1, T1[] o2) {
        String s[] = new String[o1.length + o2.length];
		for (int i = 0; i < o1.length + o2.length; i++) {
			if (i < o1.length) {
				s[i] = o1[i].toString();
			} else {
				s[i] = o2[i].toString();
			}
		}
		return s;
	}
	public static <T1 extends Number, T2 extends Object> String[] add(T1[] o1, T2 o2) {
        String s[] = new String[o1.length + 1];
		for (int i = 0; i < o1.length + 1; i++) {
			if (i < o1.length) {
				s[i] = o1[i].toString();
			} else {
				s[i] = o2.toString();
			}
		}
		return s;
	}
	public static <T1 extends Number, T2 extends Object> String[] add(T2 o1, T1[] o2) {
        String s[] = new String[o2.length + 1];
		for (int i = 0; i < o2.length + 1; i++) {
			if (i < 1) {
				s[i] = o1.toString();
			} else {
				s[i] = o2[i].toString();
			}
		}
		return s;
	}
	public static <T1 extends Object, T2 extends Object> String[] add(T1[] o1, T1 o2) {
        String s[] = new String[o1.length + 1];
		for (int i = 0; i < o1.length + 1; i++) {
			if (i < o1.length) {
				s[i] = o1[i].toString();
			} else {
				s[i] = o2.toString();
			}
		}
		return s;
	}
	public static <T1 extends Object, T2 extends Object> String[] add(T1 o1, T1[] o2) {
        String s[] = new String[o2.length + 1];
		for (int i = 0; i < o2.length + 1; i++) {
			if (i < 1) {
				s[i] = o1.toString();
			} else {
				s[i] = o2[i].toString();
			}
		}
		return s;
	}
	public static <T1 extends Object, T2 extends Object> String[] add(T1[] o1, T2[] o2) {
        String s[] = new String[o1.length + o2.length];
		for (int i = 0; i < o1.length + o2.length; i++) {
			if (i < o1.length) {
				s[i] = o1[i].toString();
			} else {
				s[i] = o2[i].toString();
			}
		}
		return s;
	}
	public static <T> void printList(T[] o) {
        System.out.print("[");
        System.out.print(o[0]);
        for (int i = 1; i < o.length; i++) {
            System.out.print(", " + o[i]);
        }
        System.out.println("]");
	}
	// public static void main(String[] args) {
	// 	System.out.println(Utility.add(1.2, 3));
	// 	System.out.println(Utility.add(1, 3.9));
	// 	System.out.println(Utility.add(1, 3));
	// 	System.out.println(Utility.add("hah", 3));
	// 	System.out.println(Utility.add(1.2, "hah"));
	// 	System.out.println(Utility.add("hah", 1.2));
	// 	System.out.println(Utility.add("hih", "hah"));
	// 	Double[] d = {0.1, 0.2, 0.3};
	// 	Integer[] i = {1, 2, 3};
	// 	String[] s = {"a", "b", "c"};
	// 	Utility.printList(Utility.add(d, 1.5));
	// 	Utility.printList(Utility.add(1.5, d));
	// }
}
