public class RekeningTabungan extends Rekening {
	public RekeningTabungan(String nama, double saldo) {
		super(nama, saldo, 0.05);
	}
	public void setor(double d) {
		saldo += d;
	}
	public void tarik(double d) {
		if (saldo >= d) {
			saldo -= d;
		}
	}
	public void update() {
		saldo += (saldo * sukuBunga);
		saldo -= hitungBiaya();
		if (saldo < 0) {
			saldo = 0;
		}
	}
}
