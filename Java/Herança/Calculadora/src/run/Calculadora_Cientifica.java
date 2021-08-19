/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package run;

/**
 *
 * @author spetr
 */
public class Calculadora_Cientifica extends Calculadora_Simples {

	public float raizQuadrada(float valor) {
		super.armazenar((float) Math.sqrt(valor));
                return super.getTemp();
	}
        
        public float raizQuadrada() {
		super.armazenar((float) Math.sqrt(super.getTemp()));
                return super.getTemp();
	}
            
	public float potencia(float expoente) {
		super.armazenar((float) Math.pow(super.getTemp(), expoente));
                return super.getTemp();
	}

        public float potencia(float base, float expoente) {
		super.armazenar((float) Math.pow(base, expoente));
                return super.getTemp();
	}
}
