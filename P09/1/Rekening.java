public abstract class Rekening {
	public String nama;
	public double saldo;
	public double sukuBunga;
	public Rekening(String nama, double saldo, double sukuBunga) {
		this.nama = nama;
		if (saldo < 0) {
			this.saldo = 0;
		} else {
			this.saldo = saldo;
		}
		this.sukuBunga = sukuBunga;
	}
	public abstract void setor(double d);
	public abstract void tarik(double d);
	public abstract void update();
	public double hitungBiaya() {
		return 10 + (saldo * 0.1);
	}
	public String getNama() { return nama; }
	public double getSaldo() { return saldo; }
	public double getSukuBunga() { return sukuBunga; }
}
