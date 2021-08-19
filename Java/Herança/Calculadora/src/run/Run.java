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
public class Run {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        Calculadora_Simples cs = new Calculadora_Simples();
        cs.armazenar(3);
        System.out.println("Soma Simples: " + cs.Soma(5));
        System.out.println("Memoria: " + cs.getTemp());
        System.out.println("Subtração Simples: " + cs.Subtracao(2));
        System.out.println("Memoria: " + cs.getTemp());
        
        Calculadora_Cientifica cc = new Calculadora_Cientifica();
        cc.armazenar(2);
        cc.potencia(3);
        System.out.println("Memoria Cientifica: " + cc.getTemp());
        cc.Soma(1);
        System.out.println("Memoria Cientifica: " + cc.getTemp());
        System.out.println("Raiz Quadrada: " + cc.raizQuadrada());
        
    }
    
}
