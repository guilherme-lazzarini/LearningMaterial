/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package futebol20200916;

/**
 *
 * @author spetr
 */
public class Futebol20200916 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        Time vasco = new Time();
        vasco.indicar(0, "João", 2);
        vasco.indicar(1,"Pedro", 10);
        vasco.indicar(3,"Marcos", 1);
        vasco.visualizar();
    }
    
}
