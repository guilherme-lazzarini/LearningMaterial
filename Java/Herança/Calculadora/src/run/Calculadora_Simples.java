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
public class Calculadora_Simples {
    private float VariavelX;
    private float VariavelY;
    private float temp;
	
	public Calculadora_Simples() {
		this.VariavelX = 0.0f;
		this.VariavelY = 0.0f;
		this.temp = 0.0f;
	}
	
	public float Soma(float x, float y) {
		this.VariavelX = x;
                this.VariavelY = y;
                temp = x+y;
                return temp;
	}
        
        public float Soma(float y) {
                this.VariavelY = y;
                temp = temp+y;
                return temp;
	}

        
        public float subtracao(float x, float y) {
		this.VariavelX = x;
                this.VariavelY = y;
                temp = x-y;
                return temp;
	}
        
        public float Subtracao(float y) {
                this.VariavelY = y;
                temp = temp-y;
                return temp;
        }
        
        public float multiplicacao(float x, float y) {
		this.VariavelX = x;
                this.VariavelY = y;
                temp = x*y;
                return temp;
	}
        
        public float multiblicacao(float y) {
                this.VariavelY = y;
                temp = temp*y;
                return temp;
        }
        
        public float divisao(float x, float y) {
		this.VariavelX = x;
                this.VariavelY = y;
                temp = x/y;
                return temp;
	}
        
        public float divisao(float y) {
                this.VariavelY = y;
                temp = temp/y;
                return temp;
        }
		
	public void armazenar(float x) {
		this.temp = x;
	}
	
	public void Status() {
		System.out.println("Valor atual da Variavel X: " + VariavelX + "\n");
		System.out.println("Valor atual da Variavel Y: " + VariavelY + "\n");
		System.out.println("Valor atual da Variavel Temp: " + temp + "\n");
	}
	
	public void setVariavelX(float valor) {
		this.VariavelX = valor;
	}

	public void setVariavelY(float valor) {
		this.VariavelY = valor;
	}
	
	public float getVariavelX() {
		return this.VariavelX;
	}

	public float getVariavelY() {
		return this.VariavelY;
	}

	public float getTemp() {
		return this.temp;
	}

}
