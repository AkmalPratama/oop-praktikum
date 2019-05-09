public class RekeningGiro extends Rekening {
	private boolean penalti;
	private double biayaTransaksi;
	public RekeningGiro(String nama, double saldo) {
		super(nama, saldo, 0.07);
		this.biayaTransaksi = 0.1;
		if (saldo < 500) {
			penalti = true;
		}
	}
	public void setor(double d) {
		saldo += d;
		saldo -= biayaTransaksi;
	}
	public void tarik(double d) {
		if (saldo >= d + biayaTransaksi) {
			saldo -= d + biayaTransaksi;
		}
	}
	public void update() {
		saldo += saldo*sukuBunga;
		saldo -= hitungBiaya();
		if (penalti) {
			saldo -= 10;
		}
		if (saldo < 0) {
			saldo = 0;
		}
	}
}
