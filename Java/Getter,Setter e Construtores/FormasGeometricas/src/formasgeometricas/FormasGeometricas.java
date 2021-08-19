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
public class FormasGeometricas {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        FormaGeometrica f1 = new FormaGeometrica(4,2);
        f1.mostraStatus();
        FormaGeometrica f2 = new FormaGeometrica(5,5);
        f2.mostraStatus();
        FormaGeometrica f3 = new FormaGeometrica(4.1f);
        f3.mostraStatus();
        FormaGeometrica f4 = new FormaGeometrica(1,2,3);
        f4.mostraStatus();
        FormaGeometrica f5 = new FormaGeometrica(4,4,2);
        f5.mostraStatus();
        FormaGeometrica f6 = new FormaGeometrica(2,2,2);
        f6.mostraStatus();
    }
    
}
