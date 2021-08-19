/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package formasgeometricas;

/**
 *
 * @author spetr
 */
public class FormaGeometrica {
    private float lado1;
    private float lado2;
    private float lado3;
    private float raio;
    private String tipo;

    public FormaGeometrica(float lado1, float lado2) {
        this.lado1 = lado1;
        this.lado2 = lado2;
        this.lado3 = 0;
        this.raio = 0;
        if (lado1 == lado2)
        {
            this.tipo = "Quadrado";
        }
        else
        {
            this.tipo = "Retângulo";
        }
    }

    public FormaGeometrica(float lado1, float lado2, float lado3) {
        this.lado1 = lado1;
        this.lado2 = lado2;
        this.lado3 = lado3;
        this.raio = 0;
        if(lado1 == lado2 && lado1 == lado3)
        {
            this.tipo = "Triângulo Equilátero";
        }
        else
        {
            if(lado1 != lado2 && lado1 != lado3 && lado2 != lado3)
            {
                this.tipo = "Triângulo Escaleno";
            }
            else
            {
                this.tipo = "Triângulo Isósceles";
            }
        }
    }

    public FormaGeometrica(float raio) {
        this.raio = raio;
        this.lado1 = 0;
        this.lado2 = 0;
        this.lado3 = 0;
        this.tipo = "Cículo";
    }
    
    public void mostraStatus()
    {
        System.out.println("Forma Geométrica: ");
        System.out.println("Tipo = " + this.tipo);
        if(this.lado1 != 0) System.out.println("Lado 1: " + this.lado1);
        if(this.lado2 != 0) System.out.println("Lado 2: " + this.lado2);
        if(this.lado3 != 0) System.out.println("Lado 3: " + this.lado3);
        if(this.raio != 0) System.out.println("Raio: " + this.raio);
    }
    
    public float getLado1() {
        return lado1;
    }

    public void setLado1(float lado1) {
        this.lado1 = lado1;
    }

    public float getLado2() {
        return lado2;
    }

    public void setLado2(float lado2) {
        this.lado2 = lado2;
    }

    public float getLado3() {
        return lado3;
    }

    public void setLado3(float lado3) {
        this.lado3 = lado3;
    }

    public float getRaio() {
        return raio;
    }

    public void setRaio(float raio) {
        this.raio = raio;
    }
    
}
