public class RekeningDeposito extends Rekening {
    public int bulan;
    public RekeningDeposito(String nama, double saldo) {
        super(nama, saldo, 0.15);
        bulan = 1;
    }
    public void setor(double d) {
		System.out.println("Tidak dapat melakukan penyetoran uang untuk rekening ini.");
	}
	public void tarik(double d) {
		System.out.println("Tidak dapat melakukan penarikan uang sebagian untuk rekening ini.");
	}
    public void tarik() {
        if (bulan < 12) {
            System.out.println("Anda terkena penalti sebesar " + saldo * 0.2 + ".");
        }
        saldo = 0;
    }
	public void update() {
		if (bulan%12 == 0) {
            saldo += saldo*sukuBunga;
        }
        saldo -= hitungBiaya();
        if (saldo < 0) {
            saldo = 0;
        }
        bulan++;
	}
}